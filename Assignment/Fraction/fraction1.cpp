#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

pair<int, int> reduceFraction(int num, int den) {
    int common = gcd(num, den);
    return {num / common, den / common};
}

pair<int, int> parseExtendedFraction(vector<string>& tokens) {
    if (tokens.empty()) {
        return {-1, -1};
    }

    string token = tokens.front();
    tokens.erase(tokens.begin());

    if (token == "(") {
        pair<int, int> result = parseExtendedFraction(tokens);
        if (result.first == -1) {
            return {-1, -1};
        }

        int num1 = result.first, den1 = result.second;

        token = tokens.front();
        tokens.erase(tokens.begin());

        if (!isdigit(token[0])) {
            return {-1, -1};
        }
        int a = stoi(token);

        token = tokens.front();
        tokens.erase(tokens.begin());

        if (!isdigit(token[0])) {
            return {-1, -1};
        }
        int b = stoi(token);

        token = tokens.front();
        tokens.erase(tokens.begin());

        if (token != ")") {
            return {-1, -1};
        }

        result = parseExtendedFraction(tokens);
        if (result.first == -1) {
            return {-1, -1};
        }

        int num2 = result.first, den2 = result.second;

        int num = a * den1 + b;
        int den = den1;

        num += num2 * den;
        den *= den2;

        return {num, den};
    } else if (isdigit(token[0])) {
        int a = stoi(token);

        token = tokens.front();
        tokens.erase(tokens.begin());

        if (isdigit(token[0])) {
            // If there are more tokens, treat it as a standalone integer
            int b = stoi(token);
            return {a, b};
        } else {
            // If no more tokens, treat it as a fraction with denominator 1
            int b = a;
            return {b, 1};
        }
    } else {
        return {-1, -1};
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character

    string input;
    getline(cin, input);
    
    vector<string> symbols;
    size_t pos = 0;
    while ((pos = input.find(' ')) != string::npos) {
        string token = input.substr(0, pos);
        symbols.push_back(token);
        input.erase(0, pos + 1);
    }
    symbols.push_back(input);

    auto result = parseExtendedFraction(symbols);

    if (result.first == -1) {
        cout << -1 << endl;
    } else {
        auto reducedResult = reduceFraction(result.first, result.second);
        cout << reducedResult.first << " " << reducedResult.second << endl;
    }

    return 0;
}
