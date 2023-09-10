#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<":- ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {

    string dictionary_name;
    cout << "Type a word: " ;
    cin >> dictionary_name;
    ifstream ifs(dictionary_name.c_str());
    if (!ifs.is_open()) {
        cout << "Eh? Could not open file named "
             << dictionary_name << endl;
        exit(1);
    }
    cout << "\nReading the dictionary ..." << flush;
    typedef istream_iterator<string> string_input;
    vector<string> dictionary;
    copy(string_input(ifs), string_input(),
         back_inserter(dictionary));
    cout << "\nThe dictionary contains "
         << dictionary.size() << " words.\n\n";
    cout << "Now type a word (or any string of letters),\n"
         << "and I'll see if it has any anagrams: " << flush;
    for (string_input j(cin); j != string_input(); ++j) {
        string word = *j;
        sort(word.begin(), word.end());
        bool found_one = false;
        do {
            if (binary_search(dictionary.begin(),
                              dictionary.end(),
                              word)) {
                cout << "  " << word << endl;
                found_one = true;
            }
        } while (next_permutation(word.begin(), word.end()));
        if (!found_one)
            cout << "  Sorry, none found.\n";
        cout << "\nType another word "
             << "(or the end-of-file char to stop): " << flush;
    }
    return 0;
}
