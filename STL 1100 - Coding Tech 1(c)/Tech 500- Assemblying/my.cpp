// source에서 어셈블리 code를 얻는 방법
// >g++ -S my.cpp
//
int foo(int x){
  ++x ;
  return(x) ;
}

int main(){
  int i ;
  i = 1024 ;
  foo( i ) ;
  return 0;
}
