#include<bits/stdc++.h>
using namespace std;

struct People {
    int age;
    int salary;

};

struct Guest{
    int entertime ;
    int IDnum ;
    int ctime ;
};

struct compare {
    bool operator()(const People & a, const People & b) {
        if(a.salary==b.salary) {
            return a.age>b.age;
        } else {
            return a.salary < b.salary;
        }

    }
};

int main() {

    priority_queue< People, vector<People>, compare > pq;
    People person1, person2, person3;
    person1.salary= 100;     person1.age = 50;
    person2.salary=  80;     person2.age = 40;
    person3.salary =100;     person3.age = 40;


    pq.push(person1);
    pq.push(person2);
    pq.push(person3);

    person3.salary = 67;     person3.age= 50;
    pq.push(person3);
    person3.salary = 62;     person3.age= 73;
    pq.push(person3);

    while(!pq.empty()) {
        People r = pq.top();
        pq.pop();
        cout<< "Salary= " << r.salary<<"  Age: "<<r.age<<endl;
    }

} // end of main( )
