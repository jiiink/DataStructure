// STL Map
#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>
#include <utility>
using namespace std;

int main( ) {

   typedef pair<int,int> Int_Pair;
   map<int, int>::iterator mp0_Iter, mp1_Iter, mp3_Iter, mp4_Iter, mp5_Iter, mp6_Iter;
   map<int, int, greater<int> >::iterator mp2_Iter;

   map <int, int> mp0; //Create an empty map mp0 of key type integer

   //  내림차순으로 입력되는 map 구조 만들기
   map <int, int, less<int> > mp1;
   mp1.insert(Int_Pair(1, 13));
   mp1.insert(Int_Pair(3, 23));
   mp1.insert(Int_Pair(3, 31));
   mp1.insert(Int_Pair(2, 23));
   mp1.insert(Int_Pair(6, 15));
   mp1.insert(Int_Pair(9, 25));

   // 오름차순으로 만들어진 map 구조
   map <int, int, greater<int> > mp2;
   mp2.insert(Int_Pair(3, 12));
   mp2.insert(Int_Pair(1, 31));
   mp2.insert(Int_Pair(2, 21));

   //Create a map mp3 with the allocator of map mp1
   map <int, int>::allocator_type mp1_Alloc;
   mp1_Alloc = mp1.get_allocator();
   map <int, int> mp3(less<int>(), mp1_Alloc);
   mp3.insert(Int_Pair(1, 10));
   mp3.insert(Int_Pair(2, 12));


   map <int, int> mp4(mp1); //Create a copy, map mp4, of map mp1

   //Create a map mp5 by copying the range mp1[_First, _Last)
   map <int, int>::const_iterator mp1_PIter, mp1_QIter;
   mp1_PIter = mp1.begin();
   mp1_QIter = mp1.begin();
   mp1_QIter++;
   mp1_QIter++;
   map <int, int> mp5(mp1_PIter, mp1_QIter);

   //Create a map mp6 by copying the range mp4[_First, _Last) and with the allocator of map mp2

   map <int, int>::allocator_type mp2_Alloc;
   mp2_Alloc = mp2.get_allocator();
   map <int, int> mp6(mp4.begin(), ++mp4.begin(), less<int>(), mp2_Alloc);

   //--------------------------------------------------------
   cout<<"Operation: map <int, int> mp0\n";
   cout<<"mp0 data: ";
   for(mp0_Iter = mp0.begin(); mp0_Iter != mp0.end(); mp0_Iter++)
      cout<<" "<<mp0_Iter->second;
   cout<<endl;

   cout<<"\nOperation1: map <int, int, less<int> > mp1\n";
   cout<<"Operation2: mp1.insert(Int_Pair(1, 13))...\n";
   cout<<"mp1 data: ";
   for(mp1_Iter = mp1.begin(); mp1_Iter != mp1.end(); mp1_Iter++)
      cout<<" "<<mp1_Iter->second;
   cout<<endl;

   cout<<"\nOperation1: map <int, int, greater<int> > mp2\n";
   cout<<"Operation2: mp2.insert(Int_Pair(3, 12))...\n";
   cout<<"mp2 data: ";
   for(mp2_Iter = mp2.begin(); mp2_Iter != mp2.end(); mp2_Iter++)
      cout<<" "<<mp2_Iter->second;
   cout<<endl;

   cout<<"\nOperation1:  map <int, int> mp3(less<int>(), mp1_Alloc)\n";
   cout<<"Operation2: mp3.insert(Int_Pair(1, 10))...\n";
   cout<<"mp3 data: ";
   for(mp3_Iter = mp3.begin(); mp3_Iter != mp3.end(); mp3_Iter++)
      cout<<" "<<mp3_Iter->second;
   cout<<endl;

   cout<<"\nOperation: map <int, int> mp4(mp1)\n";
     cout<<"mp4 data: ";
   for(mp4_Iter = mp4.begin(); mp4_Iter != mp4.end(); mp4_Iter++)
      cout<<" "<<mp4_Iter->second;
   cout<<endl;

   cout<<"\nOperation: map <int, int> mp5(mp1_PIter, mp1_QIter)\n";
   cout<<"mp5 data: ";
   for(mp5_Iter = mp5.begin(); mp5_Iter != mp5.end(); mp5_Iter++)
      cout<<" "<<mp5_Iter->second;
   cout<<endl;

   cout<<"\nOperation: map <int, int> mp6(mp4.begin(), \n++mp4.begin(), less<int>(), mp2_Alloc);\n";
   cout<<"mp6 data: ";
   for(mp6_Iter = mp6.begin(); mp6_Iter != mp6.end(); mp6_Iter++)
      cout<<" "<<mp6_Iter->second;
   cout<<endl;
   return 0;

} //end of main for STLmap()
