#include <bits/stdc++.h>
#include <random>
using namespace std ;

#define N 1000000  // 초기 준비된 원소 수 100만개
#define M 1000     // insert할 원소의 갯수

vector<double>       vecflo, insdata ;
list  <double>       lstflo ;

int main(){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec, myrand, ftemp  ;

    int i,j ;

    srand(220911);

    cout << "\n Data 준비하기 " << endl ;
        mybegin = chrono::system_clock::now();
    for(i=0; i < N ; i++){
        myrand = rand( )/RAND_MAX  ;
        vecflo.push_back( myrand ) ;
        lstflo.push_back( myrand ) ;
    }
    sort( vecflo.begin(), vecflo.end());
    lstflo.sort( );

    for(i=0; i < M ; i++){
        myrand = rand( )/RAND_MAX  ;
        insdata.push_back( myrand) ;
    }
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  데이터 준비시간 Time : "<< tsec << endl;

    cout << "\n  vector vecflo[]에 삽입함. " << endl ;
    mybegin = chrono::system_clock::now();
    for (i = 0; i < M; ++i) {
         ftemp = insdata[i] ; // 삽입할 데이터
         if(i%100 == 0 ) cout << "  *";
         auto vit= vecflo.begin();
         for( vit= vecflo.begin(); vit != vecflo.end(); vit++){
            if( ftemp < *vit) break ; // 들어갈 위치 찻기
         }
         vecflo.insert( vit, ftemp );
    }
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << "\n>  vector<float> random insert Time : "<< tsec << endl;

    cout << "\n\n  list lstflo[]에 삽입함. " << endl ;
    mybegin = chrono::system_clock::now();
    for (i = 0; i < M; ++i) {
         ftemp = insdata[i] ; // 삽입할 데이터
         if(i%100 == 0 ) cout << "  *";
         auto lit= lstflo.begin();
         for( lit= lstflo.begin(); lit != lstflo.end(); lit++){
            if( ftemp < *lit) break ; // 들어갈 위치 찻기
         }
         lstflo.insert( lit, ftemp );
    }
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << "\n>  list<float> random insert Time : "<< tsec << endl;

    cout << "\n  vector vecflo[]에 찾아서 삭제함. " << endl ;
    mybegin = chrono::system_clock::now();
    for (i = 0; i < M; ++i) {
         ftemp = insdata[i] ; // 삭제할 데이터
         if(i%100 == 0 ) cout << "  *";
         auto vit= vecflo.begin();
         for( vit= vecflo.begin(); vit != vecflo.end(); vit++){
            if( ftemp == *vit) break ; // 삭제할 위치
         }
         vecflo.erase( vit);
    }
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << "\n 삭제 후 vecflo.size() = " << vecflo.size() ;
    cout << "\n>  vector<float> random find and erase( ) Time : "<< tsec << endl;

    cout << "\n\n  list lstflo[]에서 찾아서 삭제함. " << endl ;
    mybegin = chrono::system_clock::now();
    for (i = 0; i < M; ++i) {
         ftemp = insdata[i] ; // 제거할 데이터
         if(i%100 == 0 ) cout << "  *";
         auto lit= lstflo.begin();
         for( lit= lstflo.begin(); lit != lstflo.end(); lit++){
            if( ftemp == *lit) break ; // 삭제할 위치
         }
         lstflo.erase( lit );
    }
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << "\n 삭제 후 lstflo.size() = " << lstflo.size() ;
    cout << "\n>  list<float> find and erase( ) Time : "<< tsec << endl;

	return 0;
} // end of main( )
