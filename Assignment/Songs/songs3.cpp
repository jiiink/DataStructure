#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>
#include <deque>
using namespace std;


//score 75

class Song {
    public:
        string title;
        // char genre;
        int broadcasting = 0;
        double size;
        int download;
        Song() {}
        Song(string t, int b, double s, int d) : title(t), broadcasting(b), size(s), download(d) {}
        void print() {
            cout << this->title << "\t" << this->broadcasting << "\t" << this->size << "\t" << this->download << endl;
        }
        bool operator>(Song s) {
            if (this->broadcasting == s.broadcasting) {
                if (this->download == s.download) {
                    return this->size < s.size;
                }
                return this->download > s.download;
            }
            return this->broadcasting > s.broadcasting;
        }
        // ~Song() {}
};

int n;
int ranking;
// vector<Song> songs;

array< deque<Song>, 5 > songs;
array<int, 5> g_array = {0, 1, 2, 3, 4};// T, B, H, P, D
map<char, int> g_code;


bool mysort(Song i, Song j) {
    return i > j;
}



void input() {
    string line;
    getline(cin, line);
    istringstream iss(line);


    g_code['T'] = 0;
    g_code['B'] = 1;
    g_code['H'] = 2;
    g_code['P'] = 3;
    g_code['D'] = 4;

    
    iss >> n >> ranking;
    
    while (!cin.eof()) {
        // string line;
        getline(cin, line);
        if (line.empty()) {
            break;
        }
        istringstream iss(line);
        

        string title;
        char genre;
        int broadcasting, download;
        double size;

        iss >> title >> genre >> broadcasting >> size >> download;

       
        // Song song(title, broadcasting, size, download);
        // songs[g_code[genre]].push_back(song);
        songs[g_code[genre]].emplace_back(title, broadcasting, size, download);
    
    }
 
}

void find_rank() {
    Song win_song;
    int win_genre = -1;
    int last_genre = -1;
   

    for (int i=1; i<=ranking; i++) {
        for (auto& genre : g_array) {
            // cout << (genre == win_genre) << endl;
            if (genre == last_genre) {
                cout << songs[genre].front().title << " is same genre\n";
                continue;
            }
            // win_songs.push_back(songs[genre].front());
            if (songs[genre].front() > win_song) {
                win_song = songs[genre].front();
                // songs[genre].pop_front();
                win_genre = genre;
            }
        }
        cout << win_song.title << ", " << win_genre << endl;
        if (i == ranking) cout << "win : " << win_song.title << endl;
        songs[win_genre].pop_front();
        last_genre = win_genre;
        win_song = Song();
    }

}



int main() {
    input();
 
    for (auto& index : g_array) {
        sort(songs[index].begin(), songs[index].end(), mysort);
    }

    cout << "\n--------------\n"; 
    for (auto& index : g_array) {
        for (auto& song : songs[index]) {
            song.print();
        }
    }
    find_rank();

    return 0;
}