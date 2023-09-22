#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

class Song {
    public:
        string title;
        string genre;
        int broadcasting;
        double size;
        int download;
        Song() {}
        Song(string t, string g, int b, double s, int d) : title(t), genre(g), broadcasting(b), size(s), download(d) {}
        void print() {
            cout << this->title << "\t" << this->genre << "\t" << this->broadcasting << "\t" << this->size << "\t" << this->download << endl;
        }
        // ~Song() {}
};

int n = 0;
int ranking = 0;
vector<Song> songs;

bool mysort(Song i, Song j) {
    // cout << "mysort" << endl;
    if (i.broadcasting > j.broadcasting && i.genre != j.genre) {
        return true;
    }
    if (i.broadcasting == j.broadcasting && i.download > j.download && i.genre != j.genre) {
        return true;
    }
    if (i.broadcasting == j.broadcasting && i.download == j.download && i.size < j.size && i.genre != j.genre) {
        return true;
    } else {
        return false;
    }
}
// bool g_sort(Song i, Song j) {
//     // cout << "g_sort" << endl;
//     if (i.genre != j.genre) {
//         return i.genre != j.genre;
//     } else {
//         return false;
//     }
// }




void input() {
    string first_line;
    getline(cin, first_line);
    istringstream iss(first_line);
    
    
    iss >> n >> ranking;

    
    
    while (!cin.eof()) {
        string line;
        getline(cin, line);
        if (line.empty()) {
            break;
        }
        istringstream iss(line);
        

        string title;
        string genre;
        int broadcasting;
        double size;
        int download;

        iss >> title >> genre >> broadcasting >> size >> download;

        songs.emplace_back(title, genre, broadcasting, size, download);
    }
    cout << n << " " << ranking << endl;

    cout << "\n--------------\n"; 
    for (auto& song : songs) {
        song.print();
    }

}

void output() {
    if (ranking == 1) {
        cout << songs[ranking-1].title << endl;
        return;
    }
    int ranking_index = ranking - 1;
    // if (songs[ranking_index].genre == songs[ranking_index-1].genre) {

    // }
    while (songs[ranking_index].genre == songs[ranking_index-1].genre) {
        ranking_index++;
    }
    cout << songs[ranking_index].title << endl;
}

int main() {
    input();
    sort(songs.begin(), songs.end(), mysort);

    cout << "\n--------------\n"; 
    for (auto& song : songs) {
        song.print();
    }

    // output();

    return 0;
}