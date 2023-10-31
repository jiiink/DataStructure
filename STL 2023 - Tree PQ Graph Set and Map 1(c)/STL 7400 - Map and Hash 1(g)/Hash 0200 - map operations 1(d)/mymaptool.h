template <typename C>
void mapdump(const char *desc, C c) {
	cout << "\n------ " << desc << " -------\n" ;
	 for (auto& x: c) {
        cout << x.first << " => " << x.second << '\n';
     }
} // dump( ) template
