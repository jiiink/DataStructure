#include <bits/stdc++.h>
using namespace std;


template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}  // 문자열을 한 글자씩 잘라서 배열로 만들어주는 함수


int main() {

  deque <char> mydeque ;
  cout << "Deque에서 Find 사용하기 " << endl;

  mydeque =  make< deque<char> >("Computer Science!");

  // Search for the first occurrence of the letter e:
  deque<char>::iterator where = find(mydeque.begin(), mydeque.end(), 'e');

  cout << "\n *(where+1) 원소 출력하기= " << *(where+1) ;
  cout << "\n *(where+3) 원소 출력하기= " << *(where+3) ;
  cout << "\n   where[2] 원소 출력하기= " << where[2] ;
  cout << "\n *(mydeque.end()-5) 원소 출력하기= " << *(mydeque.end()-5) ;
  return 0;
}
