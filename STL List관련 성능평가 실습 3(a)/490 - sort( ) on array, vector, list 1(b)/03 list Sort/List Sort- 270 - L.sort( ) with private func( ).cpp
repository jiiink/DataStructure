#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std ;

struct Player {
    int id;
    string name;
    Player(int playerId, string playerName) :
        id(playerId), name(playerName) {
    }
    bool operator <(const Player & playerObj) const {
        return id < playerObj.id;
    }
};

struct PlayerComparator { // Compare 2 Player objects using name
    bool operator ()(const Player & player1, const Player & player2) {
        if(player1.name == player2.name)
            return player1 < player2;
        return player1.name < player2.name;
    }
};

int main() {
    list<Player> listofPlayers = { \
      Player(22,   "Sid"), Player(3, "Laura"), Player(43, "Riti"), \
      Player(30, "Angel"), Player(2, "Laura"),  };


    cout<<"****Playes in the list Initially ****"<<endl;
    for(Player & player : listofPlayers)
        cout<<player.id<< " :: "<<player.name<<endl;

    listofPlayers.sort();

    cout<<"****After Sorting By ID ****"<<endl;
    for(Player & player : listofPlayers)
        cout<<player.id<< " :: "<<player.name<<endl;

    cout<<"****After Sorting By Name ****"<<endl;
    listofPlayers.sort([](const Player & player1, const Player & player2) {
        if(player1.name == player2.name)
            return player1 < player2;
        return player1.name < player2.name;
    });

    for(Player & player : listofPlayers) cout<<player.id<< " :: "<<player.name<<endl;

    cout<<"****After Sorting By Name ****"<<endl;
    listofPlayers.sort(PlayerComparator());

    for(Player & player : listofPlayers) cout<<player.id<< " :: "<<player.name<<endl;

    return 0;
}

