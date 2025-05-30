#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	istringstream iss("first 123 second 456");
	string s1, s2;
	int i1, i2;
	iss >> s1 >> i1 >> s2 >> i2; // 공백을 기준으로 문자열을 parsing하고, 변수 형식에 맞게 변환

	cout << s1 << endl;
	cout << i1 << endl;
	cout << s2 << endl;
	cout << i2 << endl;


/*
string을 입력받아 다른 형식으로 바꿔줌
first
123
second
456
*/
