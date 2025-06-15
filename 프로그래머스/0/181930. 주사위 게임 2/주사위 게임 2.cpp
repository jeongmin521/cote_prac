#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    if(a == b && a == c){
        answer = (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2)) * (pow(a, 3) + pow(b, 3) + pow(c, 3));
    }
    else if( a != b and a != c and b !=c){
        answer = a + b + c;
    }
    else {
        answer = (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
    }
    return answer;
}

/*
세 숫자가 다르면 a + b + c
두 숫자가 같으면 (a + b + c) × (a2 + b2 + c2 )
셋다 같으면  (a + b + c) × (a2 + b2 + c2 ) × (a3 + b3 + c3 )

c++ 에서 제곱
cmath 불러와서 pow(a,2)
루트는
sqrt(a)
*/