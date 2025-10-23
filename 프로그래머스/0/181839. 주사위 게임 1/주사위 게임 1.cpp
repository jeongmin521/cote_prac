#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    if (a % 2 && b % 2)          // 둘 다 홀수
        return a * a + b * b;
    else if (!(a % 2) && !(b % 2)) // 둘 다 짝수
        return abs(a - b);
    else                          // 하나만 홀수
        return 2 * (a + b);
}


/*
모두 홀수인 경우
하나만 홀수인 경우
둘다 짝수인경우
*/