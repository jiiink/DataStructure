// 어떤 음식을 주문받아 이것을 처리해주는 프로그램을 큐로 만들어 본다.
#include <fstream>
#include <string.h>
#include <string>
#include <queue>
#include <iostream>
using namespace std;

class order{
public:
	string customer;
	int timeCost;
	order(string rc, int rt){			// 인자를 받아들여서 출력하기 위한 생성자
		customer = rc;
		timeCost = rt;
	}
};

class catfood{
public:
	string category;
	int timeCost;
	catfood(){;}
	catfood(const catfood& rhs){				// 복사 생성자 정의 방법: const 타입의 레퍼런스를 파라미터로 받아서 처리
		category = rhs.category;
		timeCost = rhs.timeCost;
	}
	catfood(string rc, int rt){
		category = rc;
		timeCost = rt;
	}
};

ostream& operator<<(ostream& os, queue<order> orq){
    while(!orq.empty()){
        os << orq.front().customer << ' ' << orq.front().timeCost << endl;
        orq.pop();
    }
}
catfood food_category(string food);

int main(){
	queue <order> orders;
	ifstream fin("orders.inp");
	string customer,food;
	catfood foodCate;

	while(!fin.eof()){
		fin>>food>>customer;							// 데이터 읽기
		foodCate = food_category(food);
		cout << food <<  " by " << customer << "\n";
		orders.push(order(customer,foodCate.timeCost));		// QUEUE에 데이터 저장
	} // end of while( )
	cout << "주문의 갯수 = " << orders.size() ;
	return 0;
} // end of main( )

catfood food_category(string food){
	string  menus[] = { "bibim" , "kimchi", "kimbab", "zzigae" ,
				    	 "zzazang", "mandu", "zzamppong" ,
				     	 "udong", "sushi" , "donburi"};
	int		timecost[] = {	7, 3, 8, 13,  \
	                        8, 2, 22,  \
	          				4, 10, 12 };
	int i;
	int arraySize = sizeof(menus)/sizeof(menus[0]);		// 정적 배열 크기 구하기
	for(i = 0 ; i < arraySize; i++){
		if(menus[i] == food){
			break;
		}
	}
	return catfood( menus[i], timecost[i]);
} // end of catfood food_category(string food)
