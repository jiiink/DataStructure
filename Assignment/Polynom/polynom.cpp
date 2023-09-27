#include <bits/stdc++.h>
using namespace std;


class Form {
    public:
        int c;
        int e;
        Form(int c, int e) : c(c), e(e) {}
        ~Form() {}
};

vector<Form> terms;

vector<Form> calculated_terms;

vector<int> e_vector;





void output() {
    if (calculated_terms.size() == 0) { // f(x) = 0 
        cout << "0 0" << endl;
    } 
    else {
        cout << calculated_terms.size() << endl;
        for (auto& form : calculated_terms) {
            cout << form.c << " " << form.e << endl;
        }
    }
}


bool mysort(Form a, Form b) {
    return a.e > b.e;
}


void calculate() {
    for (int i=0; i<terms.size(); i++) {
        if (find(e_vector.begin(), e_vector.end(), terms[i].e) == e_vector.end()) { // new e value
            e_vector.push_back(terms[i].e);
            int calculated_c = terms[i].c;
            
            for (int j=i+1; j<terms.size(); j++) {
                if (terms[i].e == terms[j].e) {
                    calculated_c += terms[j].c;
                }
            }
            if (calculated_c != 0) calculated_terms.emplace_back(calculated_c, terms[i].e);
        }
    }
}


void input() {
    string line;
    while (!cin.eof()) {
        getline(cin, line);
        while (line.length() == 1) {
            getline(cin, line);
        }
        if (line.empty()) break;

        istringstream iss(line);
        int c, e;
        iss >> c >> e;
        terms.emplace_back(c, e);
    }
}


int main() {
    input();
    calculate();
    sort(calculated_terms.begin(), calculated_terms.end(), mysort);
    output();

    return 0;
}