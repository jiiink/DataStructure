// No.1 Vector의 기초 - 선언하기
// 반드시 Project로 묶어 컴파일을 해야 Debug Mode가 동작한다.
// Symbol Table 등을 따로 만들어야 하기 때문이다.
// Debug Mode와 Release Mode 선택해야 한다.
// 주 메뉴에서 Build >> Select Target >> { Release, Debug } 선택

#include <bits/stdc++.h>
using namespace std;

template <typename C>
void dump(const char *desc, C c) {
	cout.width(12);
	cout << left << desc << "==> ";
	copy(c.begin(),c.end(),ostream_iterator<typename C::value_type>(cout," "));
	cout << endl;
} // dump( ) template

int main() {
 int ar[]={1,2,3,4,5,6,7,8,9,10};
 int i, num ;

     // 선언방법 vector  <유형> 변수이름 (option)

     vector <string> v1;		        dump("v1 ==>",v1);
     vector <double> v2(10);	        dump("v2 ==>",v2);
     vector <int>    v3(10, 2009);      dump("v3 ==>",v3);
     vector <int>    v4(v3);	        dump("v4 ==>",v4);
     vector <int>    v5(&ar[2],&ar[5]); dump("v5 ==>",v5);



     printf("\n 입력 배열 크기를 입력하시오 : ");
     scanf("%d",&num);

     vector<int> vi(num); // 동적으로 크기 생성

     for (i=0;i<num;i++) {  vi[i]=i*2;  }
     for (i=0;i<num;i++) {
          printf("vi[%3d]=%3d\n",i,vi[i]);
     }
     printf("\n 새로 만든 벡터의 크기는 %d입니다.\n",vi.size());

     for (i=0;i<10;i++) {  vi.push_back(i*2); }		// 추가해서 집어 넣기
     for (i=0;i<10;i++) {  printf("vi[%d]=%d\n",i,vi[i]);  }
     printf("준비된 벡터의 크기는 %d 입니다.\n",vi.size());
     printf("준비된 벡터의 최대 크기는 %d 입니다.\n",vi.max_size());



} // end of main()

