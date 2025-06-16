#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int x = 1;
    int y1 = 0;
    for(int i = 0; i < num_list.size(); i++){
        x *= num_list[i];
        y1 += num_list[i];
    }
    int y = pow(y1,2);
    if(x < y){
        return 1;
    }
    return 0;
}

/*
모든 원소들의 곱 x
모든 원소들의 합의 제곱 y
더 큰거 찾기

x초기값에 0을 넣으면 다 0이 되어버리니까 1을 해야한다
*/