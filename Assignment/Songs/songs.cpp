#include <iostream>
#include <sstream>
#include <vector>
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
            cout << this->title << " " << this->genre << " " << this->broadcasting << " " << this->size << " " << this->download << endl;
        }
};

vector<Song> songs;


void input() {
    string first_line;
    getline(cin, first_line);
    istringstream iss(first_line);
    int n = 0;
    int ranking = 0;
    iss >> n >> ranking;

    // cout << n << " " << ranking << endl;
    
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


    // cout << "\n--------------\n"; 
    // for (auto& song : songs) {
    //     song.print();
    // }

}

int main() {
    input();

    return 0;
}