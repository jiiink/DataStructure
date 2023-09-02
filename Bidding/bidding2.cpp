#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // Include the sstream header
using namespace std;

bool isNotDigit(char c) {
    return !isdigit(c);
}

int main(void) {
    fstream myfile;
    myfile.open("test3.txt", ios::in);
    
    if (myfile.is_open()) {
        int number;
        string s;
        myfile >> number;  // Read the number of elements
        myfile.ignore(); // Ignore the newline after the number
        // getline(myfile, s);
        // number = stoi(s);
        cout << number << endl;
        
        string strArr[number];
        int intArr[number];

        for (int i = 0; i < number; i++) {
            string line;
            getline(myfile, line);
            
            istringstream iss(line);
            iss >> strArr[i];
            string intStr;
            iss >> intStr;
        
            intStr.erase(remove_if(intStr.begin(), intStr.end(), isNotDigit), intStr.end());
            // Convert intStr to an integer 
            if (!intStr.empty()) {
                intArr[i] = stoi(intStr);
            } else {
                // Handle the case where intStr is empty (no valid integer)
                intArr[i] = 0; // or another appropriate default value
            }
        }
        //print
        for (int i = 0; i < number; i++) {
            cout << strArr[i] << " " << intArr[i] << endl;
        }
    }
    
    myfile.close();
    return 0;
}

