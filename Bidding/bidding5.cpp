#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

bool isNotDigit(char c) {
    return !isdigit(c);
}

int main() {
    fstream myfile;
    myfile.open("test.txt", ios::in);
    
    if (myfile.is_open()) {
        int number;
        myfile >> number;  // Read the number of elements
        myfile.ignore(); // Ignore the newline after the number

        map<int, vector<string>, greater<int> > bids; // Map to store bids with prices as keys
        
        string name;
        int price;

        for (int i = 0; i < number; i++) {
            string line;
            getline(myfile, line);
            
            istringstream iss(line);
            iss >> name;
            string intStr;
            iss >> intStr;
        
            intStr.erase(remove_if(intStr.begin(), intStr.end(), isNotDigit), intStr.end());
            // Convert intStr to an integer 
            if (!intStr.empty()) {
                price = stoi(intStr);
            } else {
                // Handle the case where intStr is empty (no valid integer)
                price = 0; // or another appropriate default value
            }

            bids[price].push_back(name);
        }
        string winner = "NONE"; // Initialize the winner as "NONE"

        for (const auto& entry : bids) {
            if (entry.second.size() == 1) {
                winner = entry.second[0];
                break; // Found a unique winner
            }
        }

        cout << winner << endl;
    }
    myfile.close();

    return 0;
}
