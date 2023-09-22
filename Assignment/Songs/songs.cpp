#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>
#include <deque>
using namespace std;




class Song {
    public:
        string title;
        int broadcasting = 0;
        double size;
        int download;
        Song() {}
        Song(string t, int b, double s, int d) : title(t), broadcasting(b), size(s), download(d) {}
        
        bool operator>(Song s) {
            if (this->broadcasting == s.broadcasting) {
                if (this->download == s.download) {
                    return this->size < s.size;
                }
                return this->download > s.download;
            }
            return this->broadcasting > s.broadcasting;
        }
};

int number_of_songs;
int ranking; // the song want to find

array< deque<Song>, 5 > songs; // store Songs in deque with each genres

// to express genre to index
array<int, 5> g_array = {0, 1, 2, 3, 4};// T, B, H, P, D
map<char, int> g_map = {
    {'T', 0},
    {'B', 1},
    {'H', 2},
    {'P', 3},
    {'D', 4}
};





void input() {
    string line;
    getline(cin, line);
    istringstream iss(line);

    iss >> number_of_songs >> ranking;
    
    while (!cin.eof()) {
        getline(cin, line);
        if (line.empty()) break;
        istringstream iss(line);
        
        string title;
        char genre;
        int broadcasting, download;
        double size;

        iss >> title >> genre >> broadcasting >> size >> download;

        songs[g_map[genre]].emplace_back(title, broadcasting, size, download);
    }
}




bool mysort(Song i, Song j) {
    return i > j;
}
void sort_each_genre() {
    for (auto& index : g_array) { // sort the songs with each genres
        sort(songs[index].begin(), songs[index].end(), mysort);
    }
}






void find_rank() {
    int ranked_genre = -1; // the ranked song's genre
    int last_genre = -1; // the latest ranked song's genre
   

    for (int i=1; i<=ranking; i++) {
        Song rank_song;
        for (auto& genre : g_array) { // find the most popular song among genres

            if (genre == last_genre) continue; // except the song with same genre 
         
            if (songs[genre].front() > rank_song) {
                rank_song = songs[genre].front();
                
                ranked_genre = genre;
            }
        }
        if (i == ranking) cout << rank_song.title << endl;

        songs[ranked_genre].pop_front();
        last_genre = ranked_genre;
    }
}



int main() {
    input();
 
    sort_each_genre();

    find_rank();

    return 0;
}