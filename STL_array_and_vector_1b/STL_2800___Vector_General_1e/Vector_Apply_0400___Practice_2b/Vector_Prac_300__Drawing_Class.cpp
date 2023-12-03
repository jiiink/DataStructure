#include <bits/stdc++.h>
using namespace std;

class Time{
protected:
     int hour,min,sec;
public:
     Time(int h,int m,int s) { hour=h;min=m;sec=s; }
     void OutTime() { printf("%d:%d:%d ",hour,min,sec); }
};

template<typename C>
void dump(const char *desc, C c) {
     cout.width(12);cout << left << desc << "==> ";
     for (unsigned i=0;i<c.size();i++) { c[i].OutTime(); }
     cout << endl;
}

template<typename C>
void dump2(const char *desc, C c) {
     cout.width(12);cout << left << desc << "==> ";
     for (unsigned i=0;i<c.size();i++) { c[i]->OutTime(); }
     cout << endl;
}

class Graphic { public: virtual void Draw(){ puts("그래픽 오브젝트입니다."); }  };
class Line   : public Graphic { public: void Draw() { puts("선을 긋습니다."); } };
class Circle : public Graphic { public: void Draw() { puts("동그라미 그렸다 치고."); } };
class Rect   : public Graphic { public: void Draw() { puts("요건 사각형입니다."); } };
void del(Graphic *g) { delete g; }


int main() {
	// 실험1. - 벡터에 어떤 구조체를 입력해보기
     vector<Time> vt;
     vt.push_back(Time(1,1,1));
     vt.push_back(Time(2,2,2));
     dump("요소 2개",vt);

	 // 실험2. - 벡터에 직접 저장하는 것이 아니라, 벡터에는 구조체에 대한 pointer만 넣는다.
	 // 이렇게 하면 나중에 이 자료구조를 파괴(destruction)하기가 쉽다.
	 vector<Time *> vt2;
	 vector<Time *>::iterator it;
     vt2.push_back(new Time(1,1,1));
     vt2.push_back(new Time(2,2,2));
	 vt2.push_back(new Time(3,3,3));
	 vt2.insert(vt2.begin()+1, new Time(8,8,8));
     dump2("요소 3개",vt2);

     for (it=vt2.begin();it!=vt2.end();it++) {
          delete *it;
     }

	 // 실험 3. - 하나의 벡터에 한 종류의 다양한 하위 개체를 넣어서 만들기
	vector<Graphic *> vg;
    vector<Graphic *>::iterator git;

     vg.push_back(new Graphic());
     vg.push_back(new Rect());
     vg.push_back(new Circle());
     vg.push_back(new Line());

     for ( git=vg.begin(); git!=vg.end(); git++) {
          (*git)->Draw();
     }
     for_each(vg.begin(),vg.end(),del);


} // end of main()
