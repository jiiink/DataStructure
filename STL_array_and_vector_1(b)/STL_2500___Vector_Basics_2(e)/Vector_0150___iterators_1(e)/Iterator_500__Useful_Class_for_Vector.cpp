#include <bits/stdc++.h>
using namespace std;

class Object {
    public:
         Object() {}
        ~Object() {}
        void AddInt(int num)          { m_VectorOfInts.push_back(num);    }

        vector<int> GetCopyOfVector() { return m_VectorOfInts;  }

        void DisplayVectorContents() {
            for( unsigned int i = 0; i < m_VectorOfInts.size(); i++ ) {
                cout << " 원소 [" << i << "] = " << m_VectorOfInts[i] << endl;
                }  cout << endl;
            }
    private:  vector<int> m_VectorOfInts;
};

int main() {
    Object obj;
    obj.AddInt(32);
    obj.AddInt(56);
    obj.AddInt(21);

    obj.DisplayVectorContents();     // 내용물을 출력함.

    vector<int> container1 = obj.GetCopyOfVector();

    container1.push_back(342);
    container1.push_back(64);
    container1.push_back(123);


    obj.DisplayVectorContents();

    for(auto it=container1.begin(); it != container1.end();it++) {
        cout << " 컨테이너[" << it-container1.begin() << "]= " << *it << endl ;
    }

    return 0;
}


