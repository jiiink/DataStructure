#include <bits/stdc++.h>
using namespace std;

struct Custom{
	int x;
	int y;
	int value;
	Custom(int value) : x(0), y(0), value(value) {
    }
};

struct cmp{ // 오름차순 정렬
    bool operator()(Custom t, Custom u){
        return t.value > u.value;  // 작은 것을 더 우선, min heap
    }
};


int main(){ // priority_queue
	priority_queue< Custom, vector<Custom>,  cmp > pq;

	for (auto w : { 15, 9, 5, 6, 3, 11, 21, 7, 0, }){
          pq.push(w) ;
    }


	cout << "pq top : " << pq.top().value << '\n';


	// empty(), size()
	if(!pq.empty()) cout << "pq size : " << pq.size() << '\n';


	// pop all
	while(!pq.empty()){
		cout << pq.top().value << " ";
		pq.pop();
	}

	return 0;

} // end of main()


