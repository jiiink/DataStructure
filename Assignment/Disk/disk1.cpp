#include <bits/stdc++.h>
using namespace std;


struct File {
    string name;
    int size;
};
// class Disk {
//     list<File> storage;
//     int volume;
// };
list<File> storage;
int volume;




void input() {
    cin >> volume;
    storage.emplace_back("free", volume);
}

void write(File f) {
    int empty_size = 0;
    for (auto node : storage) {
        if (node.name == "free") {
            empty_size += node.size;
        }
    }

    if (empty_size < f.size) {
        cout << "\ndisk full\n";
        return;
    } else {
        for (auto& node : storage) { // entire write
            if (node.name == "free" && node.size > f.size) {
                storage.insert(it, f);
                node.size -= f.size;
                return;
            }
        }
        for (auto& node : storage) {
            if (node.name == "free" && node.size <= f.size) {
                node.name = f.name;
                f.size -= node.size;
            } else if (node.name == "free" && node.size > f.size) {
                storage.insert(it, f);
                node.size -= f.size;
                return;
            }
        }
    }
}

void deleteFile(File f) {
    for (auto& node : storage) {
        if (node.name == f.name) {
            node.name = "free";
        }
    }
}

bool isExist(File f) {
    return find(storage.begin(), storage.end(), f) != storage.end();
}
void show(File f) {
    if (!isExist(f)) {
        cout << "error\n";
        return;
    } else {
        int position = 0;
        for (auto& node : storage) {
            if (node.name == f.name) {
                cout << position;
            }
            position += node.size;
        }
    }
}


void compact() {
    int empty_size = 0;
    for (auto& node : storage) {
        if (node.name == "free") {
            empty_size += node.size;
            storage.erase(node);
        }
    }
    storage.emplace_back("free", empty_size);
    for () {
        if (storage[i].name == storage[i+1].name) {
            [i+1].size += [i].size;
            storage.erase([i])
        }
    }
}



int main() {
    input();
    return 0;
}