#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <deque>
using namespace std;

class Song {
    public:
        string title;
        string genre;
        int broadcasting = 0;
        double size = 0.0;
        int download = 0;
        Song() {}
        Song(string t, string g, int b, double s, int d) : title(t), genre(g), broadcasting(b), size(s), download(d) {}
        void print() {
            cout << this->title << "\t" << this->genre << "\t" << this->broadcasting << "\t" << this->size << "\t" << this->download << endl;
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

int n = 0;
int ranking = 0;
// vector<Song> songs;

array< deque<Song>, 5 > songs;
array<int, 5> g_array = {0, 1, 2, 3, 4};// T, B, H, P, D
map<string, int> g_code;
// g_code = {{'T', 0}, {'B', 1}, {'H', 2}, {'P', 3}, {'D', 4}};

bool mysort(Song i, Song j) {
    if (i.broadcasting > j.broadcasting) {
        return i.broadcasting > j.broadcasting;
    }
    if (i.broadcasting == j.broadcasting && i.download > j.download) {
        return i.download > j.download;
    }
    if (i.broadcasting == j.broadcasting && i.download == j.download && i.size < j.size) {
        return i.size < j.size;
    } else {
        return false;
    }
}



void input() {
    string first_line;
    getline(cin, first_line);
    istringstream iss(first_line);


    g_code["T"] = 0;
    g_code["B"] = 1;
    g_code["H"] = 2;
    g_code["P"] = 3;
    g_code["D"] = 4;

    
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

        // songs.emplace_back(title, genre, broadcasting, size, download);
        // vector<Song> genre_song;
        // genre_song.emplace_back(title, genre, broadcasting, size, download);
        Song song(title, genre, broadcasting, size, download);
        songs[g_code[genre]].push_back(song);
        // songs[g_code[genre]].emplace_back(title, genre, broadcasting, size, download);
    }
    cout << n << " " << ranking << endl;

    cout << "\n--------------\n"; 
    // for (auto& song : songs) {
    //     song.print();
    // }
    for (auto& index : g_array) {
        // songs[index]
        // cout << index << endl;
        for (auto& song : songs[index]) {
            song.print();
        }
    }

}

void find_rank() {
    Song first_song;
    string win_genre = "";
    // for (auto& genre : g_array) {
    //     // first_songs.push_back(songs[genre].front());
    //     if (songs[genre].front() > first_song) {
    //         first_song = songs[genre].front();
    //         // songs[genre].pop_front();
    //         win_genre = first_song.genre;
    //     }
    // }
    // songs[g_code[win_genre]].pop_front();
    // // sort(first_songs.begin(), first_songs.end(), mysort);
    // first_song = Song();
    // // cout << first_song.broadcasting;
    // for (auto& genre : g_array) {
    //     if (genre == win_genre) {
    //         continue;
    //     }
    //     // first_songs.push_back(songs[genre].front());
    //     if (songs[genre].front() > first_song) {
    //         first_song = songs[genre].front();
    //         songs[genre].pop_front();
    //         win_genre = first_song.genre;
    //     }
    // }





    for (int i=1; i<=ranking; i++) {
        for (auto& genre : g_array) {
            if (genre == g_code[win_genre]) {
                // cout << songs[genre].front().title << " is same genre\n";
                continue;
            }
            // first_songs.push_back(songs[genre].front());
            if (songs[genre].front() > first_song) {
                first_song = songs[genre].front();
                // songs[genre].pop_front();
                win_genre = first_song.genre;
            }
        }
        if (i == ranking) cout << first_song.title << endl;
        songs[g_code[win_genre]].pop_front();
        first_song = Song();
    }




    // cout << "song : " << first_song.title << endl;
}

void output() {
    // int ranking_index = ranking - 1;
    // if (ranking == 1) {
    //     cout << songs[ranking_index].title << endl;
    //     return;
    // }
    // // if (songs[ranking_index].genre == songs[ranking_index-1].genre) {

    // // }
    // while (songs[ranking_index].genre == songs[ranking_index-1].title) {
    //     ranking_index++;
    // }
    // cout << songs[ranking_index].title << endl;
}

int main() {
    // std::map<std::string, int> m{{"CPU", 10}, {"GPU", 15}, {"RAM", 20}};
    input();
    // sort(songs.begin(), songs.end(), mysort);
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