#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&');
	cin.ignore();//'&'뒤에 따라오는 엔터키 제거 코드

	string f, r;
	cout << endl << "find : ";
	getline(cin, f, '\n');

	cout << "replace : ";
	getline(cin, r, '\n');

	int startIndex = 0;
	while (true) {
		int fIndex = s.find(f, startIndex);//startindex부터 시작하여 f를 검색한다.
		if (fIndex == -1) 
			break;//만약 못찾으면 종료
		
		s.replace(fIndex, f.length(), r);//findex부터 시작하여 f의 길이만큼 문자열 r로 대체한다.
		startIndex = fIndex + r.length();

	}
	cout << s << endl;
}