/*
    Binary Search Tree에서 한 원소를 해당 위치를 찾아서
   insert( ) 합니다. 비교해서 왼쪽, 혹은 오른쪽...
   leaf에 도달하면 그때 매답니다.

*/
#include <bits/stdc++.h>
using namespace std;

struct bst {
    int data;
    int leftIdx;
    int rightIdx;
    };

void Make_Root( vector <struct bst > &v1, int aData) {
    struct bst b1 { aData, -1, -1 };  // child가 없으면 -1로 표시. 있으면 그 위치 index
    v1.push_back(b1);
}

// v1으로 표시된 tree node의 left pointer에
void setleft(vector < struct bst > &v1, int currIndex, int aData) {
    unsigned int leftIndex = v1.size();  // 삽입될 위치 vector index
    v1[currIndex].leftIdx = leftIndex;
    struct bst b1 = { aData, -1, -1 };
    v1.push_back(b1);     // 제일 뒤에 v1의 left node 원소를 넣음
}

void setright( vector<struct bst > &v1, int currIndex, int aData) {
    unsigned int rightIndex = v1.size();
    v1[currIndex].rightIdx = rightIndex;
    struct bst b1 = { aData, -1, -1 };
    v1.push_back(b1);
}

void Insert(vector <struct bst> &v1, int aData) {
    if(v1.size() == 0)     {
        cout<<"Noter가 아직 만들어 지지 않았음. MakeNode first..."<<endl;
        return;         }
    int currentIdx = 0;
    while ( currentIdx < v1.size() ) {
        if(aData <= v1[currentIdx].data) {  // 원하는 자리를 찾아들어감.
            if( v1[currentIdx].leftIdx == -1)   { 
                setleft(v1, currentIdx, aData);
                break;                 }
            else currentIdx = v1[currentIdx].leftIdx;
            }
        else { // 값이 크면 오른쪽으로
            if(v1[currentIdx].rightIdx == -1) {
                setright(v1, currentIdx, aData);
                break;
                }
            else
                currentIdx = v1[currentIdx].rightIdx;
            }
        }
}  // end of Insert( )


void InTrav(vector <struct bst> &v1, unsigned int Idx) {
    if(v1[Idx].leftIdx != -1)
        InTrav(v1,v1[Idx].leftIdx );
    cout<< " " << v1[Idx].data ;
    if( v1[Idx].rightIdx != -1)
        InTrav(v1, v1[Idx].rightIdx);
}

void PreTrav(vector <struct bst> &v1, unsigned int Idx) {
    cout<< " " << v1[Idx].data ;
    if(v1[Idx].leftIdx != -1)
        PreTrav(v1,v1[Idx].leftIdx );
    if( v1[Idx].rightIdx != -1)
        PreTrav(v1, v1[Idx].rightIdx);
}

void PostTrav(vector <struct bst> &v1, unsigned int Idx) {
    if(v1[Idx].leftIdx != -1)
        PostTrav(v1,v1[Idx].leftIdx );
    if( v1[Idx].rightIdx != -1)
        PostTrav(v1, v1[Idx].rightIdx);
    cout<< " " << v1[Idx].data ;
}

int main() {
    vector <struct bst> v1;

    Make_Root(v1, 30);
    Insert(v1, 20);
    Insert(v1, 6);
    Insert(v1, 40);
    Insert(v1, 35);
    Insert(v1, 16);
    Insert(v1, 7);
    Insert(v1, 56);
    Insert(v1, 27);

    cout << "\n Inorder: " ;
    InTrav (v1, 0);
    cout << "\n Preorder: " ;
    PreTrav(v1,0);
    cout << "\n Postorder: " ;
    PostTrav(v1,0);
    return 0;
}
