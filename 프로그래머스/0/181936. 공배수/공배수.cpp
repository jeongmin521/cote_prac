#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
    if(number % n == 0 and number % m == 0){
        answer = 1;
    }
    return answer;
}

/*
number가 n의 배수이면서 m의 배수이면 1, 아니면 0
*/