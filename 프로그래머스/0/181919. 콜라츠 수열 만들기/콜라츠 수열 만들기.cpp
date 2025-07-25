#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n);
    while(n!= 1){
        if(n % 2 == 0){ //짝수
            n /= 2;
            answer.push_back(n);
        }
        else{
            n = 3 * n + 1;
            answer.push_back(n);
        }
    }
    return answer;
}

/*
홀짝 판별해서 각자 계산
*/