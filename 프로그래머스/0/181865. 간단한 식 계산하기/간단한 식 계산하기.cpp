#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string binomial) {
    stringstream ss(binomial);
    string a_str, op, b_str;
    ss >> a_str >> op >> b_str;
    
    int a = stoi(a_str);
    int b = stoi(b_str);
    
    if (op == "+") {
        return a + b;
    }
    else if (op == "-") {
        return a - b;
    }
    else if (op == "*") {
        return a * b;
    } 
}


/*
각각 a, b, op 로 잘라서
op에 따라서 계산

stringstream : 공백 단위로 자동 분리해서 변수에 넣음
*/