#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool isNotDigit(char c) {
    return !isdigit(c);
}

int main() {
    fstream myfile; //file object
    myfile.open("test2.txt", ios::in); //open file
    if (myfile.is_open()) { //check if file is opened
        string line; //var for getline()
        int number; //number of people
        getline(myfile, line); //get first line
        number = stoi(line); //convert string to int

        map<int, vector<string>, greater<int> > bids; //container for combining bid with greater

        string name; //person's name
        int price; //bid
        for (int i=0; i<number; i++) { //loop for cheking people's bid
            getline(myfile, line); //get each line
            istringstream iss(line); //for spliting string
            iss >> name; //store the name
            string intStr; //var for int string
            iss >> intStr; //store the string

            //erase the whitespace in the string
            intStr.erase(remove_if(intStr.begin(), intStr.end(), isNotDigit), intStr.end());
            price = stoi(intStr); //convert string to int

            bids[price].push_back(name); //store name with each price
        }

        string winner = "NONE"; //init for when there is no winner

        for (const pair<int, vector<string> >& bid : bids) { //loop with each price
            if (bid.second.size() == 1) { //if unique
                winner = bid.second[0]; //store the name
            }
        }
        cout << winner << endl; //print the winner
    } else {
        cout << "FIle is not found" << endl;
    }
    myfile.close(); //file close
    return 0;
}