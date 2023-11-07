// One poor interactive system
// 어떤 점이 poor한지 말해보기 바랍니다.

#include <bits/stdc++.h>
using namespace std ;

ifstream fin;
map<string, string> m;

void menu() {
	cout << "----------" << endl;
	cout << "1.load    " << endl;
	cout << "2.search  " << endl;
	cout << "3.exit    " << endl;
	cout << "----------" << endl;
}

void subject_search_menu() {
	cout << "----------" << endl;
	cout << "1.name    " << endl;
	cout << "2.number  " << endl;
	cout << "3.exit    " << endl;
	cout << "----------" << endl;
}

void load() {
	char filename[30];
	char ch[30];
	char num[30];

	cout << "Enter the input file (phone.txt) : ";
	cin >> filename;

	fin.open(filename);

	while(true){
		fin >> ch;	fin >> num;
		if(strcmp(ch,"$$$")==0){
			break;
		}
		m.insert(pair<string, string>(ch, num));
	}
}

void search_name(){
	char name[30];

	cout << "input name: ";
	cin >> name;

	map<string, string>::iterator it;
/*
	for(it=m.begin();it!=m.end();it++){
		cout << (*it).first << " " << (*it).second << endl;
	}
	*/
	it=m.find(name);
	if ( it != m.end() )  cout << it->first << " " << it->second << endl;
	else cout << "어이쿠,.. 이름이 없습니다. = [" << name << "]"  ;
}

int main() {
	bool nMenu=true, nReadMenu=false;
	int selectMenu,  selectReadMenu;


	while(nMenu){
		menu();
		cout << "Choose the menu : " << endl;
		cin >> selectMenu;
		switch(selectMenu){
		case 1: cout << "File Load Menu" << endl;
			load();
			break;
		case 2: cout << "search menu" << endl;
			nReadMenu=true;
			while(nReadMenu){
				subject_search_menu();
				cout << "choose the search menu" << endl;
				cin >> selectReadMenu;

				switch(selectReadMenu){
				case 1: cout << "Name Search(working)" << endl;
					search_name();
					break;
				case 2: cout << "Number Search(dummy) " << endl;
					break;
				case 3: cout << "Exit" << endl;
					nReadMenu=false;
					break;
				default:cout << "Wrong Number" << endl;
					break;
				}
			}
			break;
		case 3: cout << "Exit" << endl;
				nMenu=false;
			break;
		default: cout << "Wrong Number" << endl;
			break;
		}
	}

	return 0;
}
