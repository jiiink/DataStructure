#include <iostream>
using namespace std;

class Point {
  private:
    int x, y;
  public:
    Point(int _x=0, int _y=0):x(_x), y(_y) {}
    void ShowPosition();
    friend Point operator+(const Point& p1, const Point& p2);
};

void Point::ShowPosition() {
    cout<<x<<" "<<y<<endl;
}

Point operator+(const Point& p1, const Point& p2) { //전역함수다
    Point temp(p1.x+p2.x, p1.y+p2.y);
    return temp;
}

int main(void) {
    Point p1(11, -2);
    Point p2(24, 31);
    Point p3=p1+p2;
    p3.ShowPosition();

    return 0;
}
