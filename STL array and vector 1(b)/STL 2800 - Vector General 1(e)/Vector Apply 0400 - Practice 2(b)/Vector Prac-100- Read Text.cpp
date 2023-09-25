// No.2 Wording Vector 활용하기 STL

#include <iostream>
#include <fstream>
#include <string>
#include <vector>			//Vector를 사용하기 위한 헤더
#include <algorithm>		//STL정렬을 사용하기 위한 헤더
#include <stdexcept>        // Try Catch를 사용하기 위해서 넣어야 하는 헤드
using namespace std;

// Global Variables
vector < vector<string> > Book ;
vector<string> Text;
vector<string>::iterator strit;
string mystr ;

int main(){

	ifstream fin("Heaven.txt");	//Initialize & Reading Words
	while(!fin.eof()) {
		string temp;
		fin>>temp;
		Text.push_back(temp);
	}//Initialize End
	cout << "주어진 화일의 단어를 다 읽었습니다. " << endl ;
	cout << "단어의 갯수는 " << Text.size() << endl << endl ;

	for(int i = 0 ; i <= 11 ; i++) {
            cout << i << "= " << Text[i] << endl ;
    }

	//질문2. 가장 마지막 단어를 출력하시오.
	cout<<"\n 마지막 단어는 " << Text[ Text.size()-1] << endl;

	//질문3. 모든 단어를 사전식으로 정렬했을때 25번째 나타나는 단어를 출력하시오.
	vector<string> align(Text);		// TextVector를 복사
	sort( align.begin(),align.end() );

	//질문4. 특정한 스트링이 이 파일에 있는지 찾아내고 있으면 그 위치를 출력하고
	//       없으면 0을 출력하시오.
	vector<string>::iterator it;

	cout << "검색할 단어를 입력하세요: " ;
    cin >> mystr ;
    cout << "입력하신 단어는 " << mystr << " 입니다." << endl ;

	cout << " 검색어 " << mystr << " 의 첫번째 발견위치 = " ;
	it = find(Text.begin(),Text.end(), mystr );		//일치하는 첫번째 위치 Return

	if(it == Text.end()){ cout<<  " - 단어가 나타나지 않았음"<<endl; }
	else{ cout<<distance(Text.begin(),it)+1 <<" 번째에 있음 " << endl; }

	//질문5. 각 단어의 빈도수를 체크하시오.
	fin.close();
	return 0;
}//End of Main
