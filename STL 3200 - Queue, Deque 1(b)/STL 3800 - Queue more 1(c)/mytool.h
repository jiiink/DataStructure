// 나에게 필요한 도구를 모두 여기에 넣어서 head file로 넣어 사용합니다.
template <typename C>
void dump(const char *desc, C c) {
	cout.width(12);
	cout << left << desc << "==> ";
	copy(c.begin(),c.end(),ostream_iterator<typename C::value_type>(cout," "));
	cout << endl;
} // dump( ) template
