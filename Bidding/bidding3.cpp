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
    myfile.open("test.txt", ios::in);
    
    if (myfile.is_open()) {
        int number;
        myfile >> number;  // Read the number of elements
        myfile.ignore(); // Ignore the newline after the number
        
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
        
        //find max value
        int max = 1;
        int nextMax = 1;
        int index = 0;
        
        for (int i=0; i<number; i++) {
            if (max < intArr[i]) {
                nextMax = max;
                max = intArr[i];
                index = i;
            } else if (max == intArr[i]) {
                nextMax = nextMax;
            }
        }
        
        cout << "Max : " << strArr[index] << " " << max << endl;
    }
    
    myfile.close();
    return 0;
}

