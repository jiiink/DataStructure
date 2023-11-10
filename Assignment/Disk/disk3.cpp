    #include <bits/stdc++.h>
    using namespace std;


    // score 93

    struct File {
        string name;
        int size;
        File(string name, int size) : name(name), size(size) {}
    };

    list<File> storage;
    int volume;
    string output = "";


    // void printDisk() {
    //     for (auto node : storage) {
    //         cout << " " << node.name << " (" << node.size << ") |  ";
    //     }
    //     cout << endl;
    // }
    bool isExist(File f) {
        for (auto node : storage) {
            if (node.name == f.name) {
                return true;
            }
        }
        return false;
    }

    void generalCompact() {
        auto behind = storage.begin();
        auto current = storage.begin();
        advance(current, 1);
        while (current != storage.end()) {
            if ((*current).name == (*behind).name) {
                (*current).size += (*behind).size;
                behind = storage.erase(behind);
                advance(current, 1);
            } else {
                advance(behind, 1);
                advance(current, 1);    
            } 
        }
    }

    void writeFile(File f, list<File>::iterator it) {
        if (isExist(f)) {
            output += "error\n";
            return;
        }
        int empty_size = 0;
        for (auto node : storage) {
            if (node.name == "free") {
                empty_size += node.size;
            }
        }

        if (empty_size < f.size) {
            // cout << "\ndisk full\n";
            output += "diskfull\n";
            return;
        } else {
        
            for (auto it = storage.begin(); it!=storage.end(); it++) {
                if ((*it).name == "free" && (*it).size > f.size) {
                    storage.insert(it, f);
                    (*it).size -= f.size;
                    return;
                }
            }
            
            for (auto it = storage.begin(); it!=storage.end(); it++) {
                if ((*it).name == "free" && (*it).size <= f.size) {
                    (*it).name = f.name;
                    f.size -= (*it).size;
                } else if ((*it).name == "free" && (*it).size > f.size) {
                    storage.insert(it, f);
                    (*it).size -= f.size;
                    return;
                }
            }
        }
    }

    void deleteFile(File f) {
        if (!isExist(f)) {
            // cout << "\nerror\n";
            output += "error\n";
            return;
        }
        for (auto& node : storage) {
            if (node.name == f.name) {
                node.name = "free";
            }
        }
        generalCompact();
    }


    void show(File f) {
        if (!isExist(f)) {
            // cout << "error\n";
            output += "error\n";
            return;
        } else {
            int position = 0;
            for (auto& node : storage) {
                if (node.name == f.name) {
                    // cout << position << endl;
                    output += to_string(position) + " ";
                }
                position += node.size;
            }
        }
        // output.erase(output.end());
        output += "\n";
    }


    bool isFree(File node) {
        return node.name == "free";
    }



    void compact() {
        int empty_size = 0;

        for (auto& node : storage) {
            if (node.name == "free") {
                empty_size += node.size;
            }
        }
        storage.remove_if(isFree);
        storage.emplace_back("free", empty_size);
        
        generalCompact();
    }


    // enum Command {WRITE("write"), SHOW, DELETE, COMPACT, END};
    void input() {
        cin >> volume;
        storage.emplace_back("free", volume);
        // printDisk();
        auto it = storage.begin();
        
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
            } else if (operation == "end") { 
                break;
            }
            // printDisk();
        }
    }

    int main() {
        input();
        cout << output;
        return 0;
    }
