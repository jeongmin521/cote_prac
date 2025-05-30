#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::ostringstream oss;
    std::string msg = "오류 발생";
    int code = 404;

    oss << "에러 메시지: " << msg << ", 코드: " << code;

    std::string result = oss.str();  // 누적된 문자열을 얻기
    std::cout << result << std::endl;

    return 0;
}

/*
string을 조립하거나, 특정 수치를 문자열로 변환
출력결과
에러 메시지: 오류 발생, 코드: 404
 */
