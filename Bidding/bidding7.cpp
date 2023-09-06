#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void openFile(fstream& myfile);
int getNumber(fstream& myfile); //get a number of people in text file
void getBid(int number, map<int, vector<string>, greater<int> >& bids, fstream& myfile); //get bid from a text file
istringstream splitLine(fstream& myfile); //split the string
bool isNotDigit(char c); 
int stringToInteger(string intStr);
void addBids(map<int, vector<string>, greater<int> >& bids, int bid, string name); //add a bid to the container
string findWinner(map<int, vector<string>, greater<int> >& bids); //find winner who bidded the largest unique bid
void printWinner(string& winner);
void closeFile(fstream& myfile);

int main() {
    fstream myfile;
    openFile(myfile);

    if (myfile.is_open()) { //check if file is opened
        int number; //a number of people
        number = getNumber(myfile);

        map<int, vector<string>, greater<int> > bids; //container for combining bid with decendent

        getBid(number, bids, myfile);

        string winner = findWinner(bids); //init for when there is no winner
        printWinner(winner);
    } else {
        cout << "The file is not found." << endl;
    }

    closeFile(myfile);
    return 0;
}

void openFile(fstream& myfile) {
    myfile.open("DataStructure/Bidding/test.txt", ios::in);
}
int getNumber(fstream& myfile) {
    string line;
    getline(myfile, line);
    
    return stoi(line);
}
void getBid(int number, map<int, vector<string>, greater<int> >& bids, fstream& myfile) {
    string name;
    int bid;

    for (int i=0; i<number; i++) { //loop for cheking people's bid
        istringstream splitedLine = splitLine(myfile);
        splitedLine >> name; 
        string intStr; 
        splitedLine >> intStr; 

        bid = stringToInteger(intStr); 

        addBids(bids, bid, name); //store name with each bid
    }
}
istringstream splitLine(fstream& myfile) {
    string line;
    getline(myfile, line);
    istringstream iss(line);

    return iss;
}
bool isNotDigit(char c) {
    return !isdigit(c);
}
int stringToInteger(string intStr) {
    intStr.erase(remove_if(intStr.begin(), intStr.end(), isNotDigit), intStr.end());
    return stoi(intStr);
}
void addBids(map<int, vector<string>, greater<int> >& bids, int bid, string name) {
    bids[bid].push_back(name);
}
string findWinner(map<int, vector<string>, greater<int> >& bids) {
    for (const auto& bid : bids) {
        if (bid.second.size() == 1) {
            return bid.second[0];
        }
    }
    return "NONE";
}
void printWinner(string& winner) {
    cout << winner << endl;
}
void closeFile(fstream& myfile) {
    myfile.close();
}