#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <set>
using namespace std;

class Client {
public:
    string name;
    int price;
    Client() {}
    Client(string name, int price) : name(name), price(price) {}

    // Define a custom comparison operator for sorting in the set
    bool operator<(const Client& other) const {
        return price < other.price;
    }
};

bool isNotDigit(char c) {
    return !isdigit(c);
}

int main(void) {
    fstream myfile;
    myfile.open("test2.txt", ios::in);
    
    if (myfile.is_open()) {
        int number;
        myfile >> number;  // Read the number of elements
        myfile.ignore(); // Ignore the newline after the number
        set<Client> uniqueClients; // Use set to store unique clients directly
        
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

            // Check if the client already exists in the set before inserting
            // This ensures that only unique clients are stored
            if (uniqueClients.find(Client(name, price)) == uniqueClients.end()) {
                uniqueClients.insert(Client(name, price));
            }
        }

        // The largest unique client is still at the end of the set
        const Client& maxClient = *(--uniqueClients.end());
        cout << "Max : " << maxClient.name << " " << maxClient.price << endl;
    }
    
    myfile.close();
    return 0;
}
