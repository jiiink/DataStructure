#include <bits/stdc++.h>
using namespace std;

template <typename C>
void dump(const char *desc, C c) {
	cout.width(12);
	cout << left << desc << "==> ";
	copy(c.begin(),c.end(),ostream_iterator<typename C::value_type>(cout," "));
	cout << endl;
} // dump( ) template

template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}

int main() {

  deque <char> deque1 = make< deque<char> >("Bjarne Stroustrup"), deque2;
  deque <char>::iterator i;

  cout << "Demonstrating deque push_back function" << endl;
  for (i = deque1.begin(); i != deque1.end(); ++i)
    deque2.push_back(*i);

  dump("\nA: push_back후 deque1 = ", deque1 ) ;

  deque1 = make< deque<char> >("Bjarne Stroustrup");
  deque2 = make< deque<char> >("Over-watch");

  dump("\nB: push_back후 deque2 = ", deque2 ) ;

  cout << "\nDemonstrating deque push_front function" << endl;
  for (i = deque1.begin(); i != deque1.end(); ++i)
    deque2.push_front(*i);

  dump("\nC: push_back후 deque1 = ", deque1 ) ;
  dump("\nD: push_back후 deque2 = ", deque2 ) ;


  // Show that deque2 is the reverse of deque1 by using
  // STL generic reverse function to reverse deque1:
  reverse(deque1.begin(), deque1.end());
  dump("\nE: 뒤집은 후 deque1 = ", deque1 ) ;
  dump("\nF: 뒤집은 후 deque2 = ", deque2 ) ;


  return 0;
}
