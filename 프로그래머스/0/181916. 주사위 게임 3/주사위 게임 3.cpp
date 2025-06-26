#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    vector<int> numbers = {a,b,c,d};
    sort(numbers.begin(), numbers.end());
    if(numbers[0] == numbers[3]){ //넷 다 같음
        answer += 1111 * numbers[0];
    }
    else if((numbers[0] == numbers[2] && numbers[2] != numbers[3]) || 
        (numbers[1] == numbers[3] && numbers[0] != numbers[1])){ // 세개 같음
        int p = numbers[1]; //같은 수
        int q = (numbers[0] == p) ? numbers[3] : numbers[0]; //다른 수
        answer += pow(10 * p + q, 2);
    }
    else if(numbers[0] == numbers[1] and numbers[2] == numbers[3]){ //둘 둘 같음
        answer += (numbers[0] + numbers[2]) * abs(numbers[0] - numbers[2]);
    }
    else if(numbers[0] != numbers[1] and numbers[1] != numbers[2] and numbers[2] != numbers[3]){ //넷 다 다름
        answer += numbers[0];
    }
    else { //둘 같고 나머지 둘 다름
        if(numbers[0] == numbers[1]){
            answer += numbers[2] * numbers[3];
        }
        else if(numbers[1] == numbers[2]){
            answer += numbers[0] * numbers[3];
        }
        else if(numbers[2] == numbers[3]){
            answer += numbers[0] * numbers[1];
        }
    }
    return answer;
}

/*
경우의 수 나누기
네 숫자 모두 같음 = 1111 * p
세 숫자 같고 하나 다름 (10 × p + q)2
두개 같고 나머지 각각 다름 q × r
둘 둘 같음 (p + q) × |p - q|
넷 다 다름 -> + 넷중가장 작은수

각자 비교하면 abcd 각각 경우의 수가 너무 많음 ->
벡터를 이용해서 작은 수부터 정렬하면 같은 수끼리 순서대로 붙음
*/