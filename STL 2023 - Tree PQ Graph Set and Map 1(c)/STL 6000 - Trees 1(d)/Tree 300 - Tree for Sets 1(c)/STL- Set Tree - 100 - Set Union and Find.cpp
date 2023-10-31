// Tree를 이용해서 집합(Set)의 Union과 Find(소속을 찾는 작업) 구현
#include <bits/stdc++.h>
using namespace std;

const int HeapSize = 100;

class Sets {
public:
   Sets (int);
   void display();
   void SimpleUnion     (int, int);
   void WeightedUnion   (int, int);
   int  SimpleFind      (int);
   int  CollapsingFind   (int);
private:
   int *parent;
   int n;
};

Sets::Sets(int sz = HeapSize) {
    n = sz;
    parent = new int[sz + 1]; // Don't want to use parent[0]
    for (int i = 1; i <= n; i++) parent[i] = -1;  // 0 for Simple versions
}

void Sets::SimpleUnion(int i, int j) { // j를 i에 매답니다. i <- j
    parent[j] = i;
}

int Sets::SimpleFind(int i) { // 원소 i가 속한 집합을 찾아냅니다.
    while (parent[i] > 0) i = parent[i];
    return i;
}

void Sets::WeightedUnion(int i, int j) { // 가중치 규칙으로 i와 j를 합칩니다.

    int temp = parent[i] + parent[j];
    if (parent[i] > parent[j]) { // i쪽이 더 작은 수를 노드를 가짐
	parent[i] = j;
	parent[j] = temp;
    }
    else { // @j@ 쪽이 더 작은 수의 노드를 가짐
	parent[j] = i;
	parent[i] = temp;
    }
}

int Sets::CollapsingFind(int i) { // i를 따라가면서 길을 합침. Collapsing
    int r ;
    for ( r = i; parent[r] > 0; r = parent[r]); // find root
    while (i != r) {
       int s = parent[i];
       parent[i] = r;
       i = s;
    }
    return r;
}



void Sets::display() {
int i ;
    cout << "전체 원소의 집합 구조를 보여줍니다. \n S[ " ;
    for(i=1; i <= n; i++) cout << i << ", " ;
    cout << " ] \n P[ ";
    for(i=1; i <= n; i++) cout << parent[i] << ", " ;;
    cout << " ] \n";
}


int main() {
    Sets m(8);
    m.display();
    cout << "find 5" << m.CollapsingFind(5) << endl;
    m.WeightedUnion(1,2);
    m.WeightedUnion(3,4);
    m.WeightedUnion(5,6);
    m.WeightedUnion(7,8);
    m.display();

    cout << "find 5" << m.CollapsingFind(5) << endl;
    cout << "find 6" << m.CollapsingFind(6) << endl;
    m.WeightedUnion(1,3); m.WeightedUnion(5,7);
    m.display();

    cout << "find 5" << m.CollapsingFind(5) << endl;
    cout << "find 6" << m.CollapsingFind(6) << endl;
    cout << "find 7" << m.CollapsingFind(7) << endl;
    cout << "find 8" << m.CollapsingFind(8) << endl;
    m.WeightedUnion(1,5);
    m.display();

    cout << "find 1" << m.CollapsingFind(1) << endl;
    cout << "find 2" << m.CollapsingFind(2) << endl;
    cout << "find 3" << m.CollapsingFind(3) << endl;
    cout << "find 4" << m.CollapsingFind(4) << endl;
    cout << "find 5" << m.CollapsingFind(5) << endl;
    cout << "find 6" << m.CollapsingFind(6) << endl;
    cout << "find 7" << m.CollapsingFind(7) << endl;
    cout << "find 8" << m.CollapsingFind(8) << endl;
    m.display();
} //end of main()
