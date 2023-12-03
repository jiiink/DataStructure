/// 직사각형을 넣어 저장하고 이것을 전체 넓이순서대로 배출하는 PQ
#include <bits/stdc++.h>
using namespace std;


class rect { // 직사각형
public:
    rect (int w, int h) : _w(w), _h(h) {}

    void print () {
        cout << "rect(w,h): " << _w << " * " << _h << " : area=  " << _w * _h << endl;
    }
    // greater-than operator > 를 정의합니다. 이 operator는 min-heap을 정의할 때 쓰입니다.
    // class 대신에 struct를 쓰는 것도 가능합니다.
    bool operator > (const rect& rhs) const { return _w * _h > rhs._w * rhs._h; }

private:
    int _w, _h;
};

int main () {   // min-heap을 선언합니다.
    priority_queue<rect, vector<rect>, greater<rect> >       q;
    //             원소   구현방법      비교방법        변수 이름
    q.push (rect (1, 5));
    q.push (rect (7, 6));
    q.push (rect (1, 2));
    q.push (rect (8, 2));
    q.push (rect (5, 5));
    q.push (rect (7, 3));
    q.push (rect (3, 3));


    while (!q.empty ()) {
        rect t = q.top ();
        q.pop ();
        t.print ();  // print (1,2), (1,5), (8,2), (7,6)
    }

    return 0;
}

