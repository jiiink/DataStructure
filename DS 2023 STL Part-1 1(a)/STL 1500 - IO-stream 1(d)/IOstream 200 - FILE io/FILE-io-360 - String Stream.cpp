#include <bits/stdc++.h>
using namespace std;

int main() {

    stringstream my_stream(ios::in|ios::out);
    string dat("Hey, I have a double : 74.79 .");

    my_stream.str(dat);
    my_stream.seekg(-7,ios::end);

    double val;
    my_stream>>val;

    val= val*val;

    my_stream.seekp(-7,ios::end);
    my_stream<<val;

    string new_val = my_stream.str();
    cout<<new_val;

    return 0;
}
