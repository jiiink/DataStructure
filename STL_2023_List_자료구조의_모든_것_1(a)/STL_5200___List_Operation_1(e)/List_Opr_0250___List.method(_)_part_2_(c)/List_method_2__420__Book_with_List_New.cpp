/*

 농사를 하려면 좋은 도구, 삽이나 곡갱이를 만들어야 한다.
 물론 도구를 만들 때에는 먼저 그 보다 작은 도구를 만들어야 한다.
 삽이나 곡갱이를 만들려면 간단한 망치나 끌을 먼저 만들어야 한다.
 좋은 도구를 만들면 나머지 일은 저절로 된다. 조환규(1960~ )

*/

#include <bits/stdc++.h>
using namespace std;
typedef struct{
	int words;
	int types ;  // 문장이 의문문 ?
	list<string> wordList;
} MyStatement;

list <MyStatement> Book;

void ShowTitle();
void printHelp();
void printStatement(MyStatement statement);
void Command();
void readBook(string fileName);

int main(){
	readBook("CrimePunish.txt");  //파일의 내용을 문장단위로 읽어들임
	ShowTitle();              //프로그램 타이틀을 출력함
	Command();               //사용자로부터 명령어를 읽어서 처리함
	return 0;
}

void ShowTitle(){
	cout<<endl<<"[List를 이용한 Book 분석 프로그램]------------------------------"<<endl;
	cout<<"<CrimePunish.txt> : 전체 문장의 개수 : "<<Book.size()<<endl<<endl;
	printHelp();
	cout<<"-------------------------------------------------------------------------------"<<endl;
} // end of printProgram()

void printHelp(){
	cout<<"[도움말]"<<endl;
	cout<<" 1) help         : 도움말 출력"<< endl;
	cout<<" 2) quit         : 프로그램 종료"<< endl;
	cout<<" 3) pline 줄번호 : CrimePunish에서 해당 줄번호(1부터 시작)의 문장을 출력"<<endl;
    cout<<" 4) pword i  j   : i번째 문장에서 j번째 단어." << endl;
	cout<<" 5) find pword   : word를 포함하고 있는 문장 번호 모두 출력"<< endl;
	cout<<" 6) insert k ~~~ : k 뒤에 문장 삽입"<< endl;
} // end of printHelp( )

void printStatement(MyStatement statement){ //list<string>의 내용을 출력하는 함수
	cout<< "Statement: " ;
	for(auto w :statement.wordList ){ cout << w << " " ; }
} // end of printStaement( )

void Command(){ //사용자로부터 명령어를 입력받아 처리하는 함수
	while(true){
		string command = "";
		cout << endl << ">>";
		cin >> command;
		if(command == "quit") break; // quit이 나오면 loop을 중단한다.
		else if(command == "help")   printHelp();
		else if(command == "pline") {
			int line;
			cin>> line;
			if(line <= 0 ) cout<<" 잘못된 줄번호 입니다."<<endl;
			else{
			    MyStatement mystate ;
                list<string> myList ;
				auto it = Book.begin() ;
				advance(it, line-1) ;
				mystate = *it ;
                myList = mystate.wordList;
				for(auto s : myList) cout << s << " " ;
				}
			} // end of  if(command == "pline")
		else if(command == "pword" )  { cout << " 당신의 일 " ;         }
		else if(command == "find"  )  { cout << " 이것도 당신의 일 " ; }
		else if(command == "insert")  { cout << " insert는 당신의 일 " ; }
		else{ 	cout<< " Oh! 잘못된 명령어입니다. help를 확인하세요."<<endl; 	}
	} // end of while()

} // end of Command( )


void readBook(string fileName){
	ifstream documentIfs(fileName.c_str());
	string word;
	MyStatement ms;
	while(!documentIfs.eof()){
		documentIfs>>word;
		if(word == "#"){ //문장의 끝인 경우
			Book.push_back(ms);
			ms.wordList.clear();
		}
		else ms.wordList.push_back(word);

		if(documentIfs.eof())break;
	}
	documentIfs.close();
} // end of readBook()

