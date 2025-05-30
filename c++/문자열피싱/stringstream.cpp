#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input_string = "10 20 30 40 50";
    std::istringstream iss(input_string);

    int num;
    while (iss >> num) {
        std::cout << "Read number: " << num << std::endl;
    }

    return 0;
}

/*
공백을 기준으로 문자열을 나눠줌
출력결과
Read number: 10
Read number: 20
Read number: 30
Read number: 40
Read number: 50
*/
