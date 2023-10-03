#include <bits/stdc++.h>
using namespace std;


using namespace std;

int main() {
stack<int> nStack;


    cout<<"The size is=" <<nStack.size()<<endl;


    (nStack.empty()==true)?cout<<" is " : cout<<" it is not ";


    cout<<"\n\nNOW YOU ADD TWO INT-S TO IT!!!"<<endl;

    nStack.emplace(1);
    nStack.push(2);
    cout<<"The size is=" <<nStack.size()<<endl;
    cout<<"The stack ";
    (nStack.empty()==true)?cout<<" is " : cout<<" it is not ";
    cout<<" empty "<<endl;

    int nElement =nStack.top();
    cout<<"The size is="   <<nStack.size()<<endl;
    cout<<"The stack ";
    (nStack.empty()==true)?cout<<" is " : cout<<" it is not ";
    cout<<" empty "<<endl;

    cout<<"\n\nWE HAVE TAKEN TOP ELEMENT!!!"<<endl;
    nStack.pop();
    cout<<"The size is="     <<nStack.size()<<endl;
    cout<<"The stack ";
    (nStack.empty()==true)?cout<<" is " : cout<<" it is not ";
    cout<<" empty "<<endl;

    nStack.pop();

    return EXIT_SUCCESS;
}
