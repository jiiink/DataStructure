
#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

typedef vector<string> MyStatement;

void readDocument   (ifstream& ifs);
void writeDocument  (ofstream& ofs);

MyStatement  statement;     // 하나의 문장은 단어 word로 구성되어 있음
vector <MyStatement> book;   // 하나의 책은 여러개의 문장으로 구성되어 있음

int main(){
	ifstream documentIfs("CrimePunish.txt");
	ofstream documentOfs("CrimePunish_Sorted.txt");

    cout << "\n 입력 문장을 읽어 들입니다." ;
	readDocument(documentIfs);//파일의 내용을 문장단위로 읽어들임
	cout<<"\n 전체 문장의 개수 : "<< book.size() << endl;

    allout("죄와 벌의 첫번째 문장", *book.begin() ) ;

	sort(book.begin(), book.end()); //각 statement의 원소 순으로 정렬
	writeDocument(documentOfs);//정렬된 문서를 파일에 씀
	cout<<"\n 정렬된 문장의 개수 : " << book.size() << endl;

	documentIfs.close();
	documentOfs.close();

    allout("정렬 후 죄와 벌의 첫번째 문장", *book.begin() ) ;
    allout("정렬 후 죄와 벌의 1000번째 문장",     *(book.begin()+1000) ) ;
    cout << "\n\n > 1000번째 문장의 첫 단어: "     << *(( book.begin()+1000)->begin() ) ;
    auto wit = *(book.begin()+1000) ;
    cout << "\n wit.begin()+3 :" << *(wit.begin()+3) ;
    cout << "\n wit.begin()+5 :" << *(wit.begin()+5) ;
    cout << "\n 1000번째 문장의 4번째 단어:  :"   << *(( book.begin()+1000)->begin()+4 ) ;
//    for (auto w : *(book.begin()+1000) ) { // Contl-Shift-C comment 처리
//        cout << "\n " << w ;
//    }        	return 0;
}

void readDocument(ifstream& ifs){ //문서 읽기 함수
	string word;
	cout << "\n In readDocument()" ;
	while( !ifs.eof() ){    // ifs.eof() 화일의 끝인가를 검사함.
		ifs >> word;        // cout << word ;
		if(word == "#"){    // 문장의 끝인가를 검사함.
         	book.push_back(statement);
			statement.clear();
		}
		else statement.push_back(word); // 개별 문장에 단어를 뒤로 채워 넣음

        if(ifs.eof())break; //이 위치에서 eof테스트를 해야 한 번 더 읽지 않음.
	}
} // end of readDocument()

void writeDocument(ofstream& ofs){ //문서 쓰기 함수
	for(vector<MyStatement>::iterator stmtIter = book.begin(); stmtIter != book.end(); stmtIter++){
		MyStatement stmt = (*stmtIter);
		ofs << ">> " ;
		for(vector<string>::iterator wordIter = stmt.begin(); wordIter != stmt.end(); wordIter++){
			ofs<< (*wordIter)<<" ";
		}
		ofs<<endl;
	}
}
