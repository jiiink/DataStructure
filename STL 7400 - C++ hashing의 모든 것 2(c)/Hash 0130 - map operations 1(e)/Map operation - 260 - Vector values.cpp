#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"

int main() {

	map<string, vector<int> > mapOfOccur = 	{
								{ "Riti", { 3, 4, 5, 6, 11, 13 } },
								{ "Jack", { 3, 2, 3, 5 } },
							    { "Wunderich", {  } },
								{ "Samanda", { 9, 8, -1  } }
								};

    cout << "\n\n map<string, vector<int> > 출력해보기 \n" ;

	for (auto entry : mapOfOccur) {  // C++11의 함수형 기능
		cout << entry.first  << ":= " << entry.second.size() << endl ;;
		for (int i : entry.second)
			    cout << i << " , " ;
		cout << endl;
	}
	return 0;
}


