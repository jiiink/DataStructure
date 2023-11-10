    #include <bits/stdc++.h>
    using namespace std;


    // score 93

    struct File {
        string name;
        int size;
        File(string name, int size) : name(name), size(size) {}
    };

    list<File> disk;
    int volume;

    bool isExist(File f) {
        for (auto node : disk) {
            if (node.name == f.name) return true;
        }
        return false;
    }

    void generalCompact() {
        auto behind = disk.begin();
        auto current = disk.begin();
        advance(current, 1);
        while (current != disk.end()) {
            if ((*current).name == (*behind).name) {
                (*current).size += (*behind).size;
                behind = disk.erase(behind);
                advance(current, 1);
            } else {
                advance(behind, 1);
                advance(current, 1);    
            } 
        }
    }

    void writeFile(File f, list<File>::iterator it) {
        if (isExist(f) || f.size == 0) {
            cout << "error\n"; 
            return;
        }
        int empty_size = 0;
        for (auto node : disk) {
            if (node.name == "free") empty_size += node.size;
        }

        if (empty_size < f.size) {
            cout << "diskfull\n";
        } else {
        
            for (auto it = disk.begin(); it!=disk.end(); it++) {
                if ((*it).name == "free" && (*it).size > f.size) {
                    disk.insert(it, f);
                    (*it).size -= f.size;
                    return;
                }
            }
            
            for (auto it = disk.begin(); it!=disk.end(); it++) {
                if ((*it).name == "free" && (*it).size <= f.size) {
                    (*it).name = f.name;
                    f.size -= (*it).size;
                } else if ((*it).name == "free" && (*it).size > f.size) {
                    disk.insert(it, f);
                    (*it).size -= f.size;
                    return;
                }
            }
        }
    }

    void deleteFile(File f) {
        if (!isExist(f)) {
            cout << "error\n";
        } else {
            for (auto& node : disk) {
                if (node.name == f.name) {
                    node.name = "free";
                }
            }
            generalCompact();
        }
    }


    void show(File f) {
        if (!isExist(f)) cout << "error\n";
        else {
            int position = 0;
            for (auto& node : disk) {
                if (node.name == f.name) cout << position << " ";

                position += node.size;
            }
            cout << endl;
        }
    }


    bool isFree(File node) {
        return node.name == "free";
    }



    void compact() {
        int empty_size = 0;

        for (auto& node : disk) {
            if (node.name == "free") empty_size += node.size;
        }
        disk.remove_if(isFree);
        disk.emplace_back("free", empty_size);
        
        generalCompact();
    }

    void input() {
        cin >> volume;
        disk.emplace_back("free", volume);
        auto it = disk.begin();
        
        string operation = "";
        string fileName = "";
        int fileSize = 0;

        while (true) {
            cin >> operation;
            if (operation == "write") {
                cin >> fileName >> fileSize;
                File file(fileName, fileSize);
                writeFile(file, it);
            } else if (operation == "show") {
                cin >> fileName;
                fileSize = 0;
                File file(fileName, fileSize);
                show(file);
            } else if (operation == "delete") {
                cin >> fileName;
                fileSize = 0;
                File file(fileName, fileSize);
                deleteFile(file);
            } else if (operation == "compact") {
                compact();
            } else { 
                break;
            }
        }
    }

    int main() {
        input();
        return 0;
    }
