#include <iostream>
using namespace std;

class Point {
  private:
    int x, y;
  public:
    Point(int _x=0, int _y=0):x(_x), y(_y) {}
    void ShowPosition();
    Point& operator++(); //멤버 함수
    friend Point& operator--(Point& p);
};

void Point::ShowPosition(){
    cout<<"x= " << x <<" : y= "<<y<<endl;
}


Point& Point::operator++() { //멤버함수 정의
    x++;
    y++;
    return *this;
}

Point& operator--(Point& p) { //전역함수
    p.x--;
    p.y--;
    return p;
}

int main(void) {
    Point p(13, 59);
    ++p;
    printf("++p;     ");
    p.ShowPosition();

    printf("--p;     ");
    --p;
    p.ShowPosition();

    printf("++(++p);    ");
    ++(++p);
    p.ShowPosition();



    printf("--(--p);    ");
    --(--p);
    p.ShowPosition();

    return 0;
}
