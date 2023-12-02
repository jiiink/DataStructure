#include <iostream>
using namespace std;

class Point {
  private:
    int x, y;
  public:
    Point(int _x=0, int _y=0):x(_x), y(_y) {}
    void ShowPosition();
    Point& operator++(); //++p
    Point operator++(int); // p++
};
void Point::ShowPosition() {
    cout<<x<<" "<<y<<endl;
}

Point& Point::operator++() {
    x++;
    y++;
    return *this;
}
Point Point::operator++(int) {
    Point temp(x, y);  // Point temp(*this);
    x++;
    y++;
    return temp;
}


int main(void) {
    Point p1(1, 2);
    (p1++).ShowPosition();
    p1.ShowPosition();

    Point p2(1, 2);
    (++p2).ShowPosition();
    return 0;
}
