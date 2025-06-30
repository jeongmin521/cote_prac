#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string number) {
    int sum = 0;
    for(int i = 0; i < number.size(); i++){
        sum += number[i] - '0';  //char to int
    }
    return sum % 9;
}

/*
각 자리 숫자의 합을 9로 나누기
c++ 에서 char to int: - '0' 하기
ex)int('5') - '0'  // int 5 의미
아스키코드 '0' - 48
*/