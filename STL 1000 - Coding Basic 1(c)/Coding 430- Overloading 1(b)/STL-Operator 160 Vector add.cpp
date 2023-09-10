#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int _x=0, int _y=0):x(_x), y(_y){}
    void ShowPosition();
    Point operator+(const Point& p);
};

void Point::ShowPosition(){
    cout<<"x= " << x <<" : y= "<<y<<endl;
}

Point Point::operator+(const Point& p){
    Point temp(x+p.x, y+p.y);
    return temp;
}

int main(void) {

    Point p0 ;
    Point p1(-6, 12);
    Point p2(32, 7);
    Point p3 = p1 + p2;
    Point p4 = p1 + p0 ;

    p3.ShowPosition();
    p4.ShowPosition();

    return 0;
}
