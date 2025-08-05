#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int cnt = 0;
    for(int i = 0; i < num_list.size(); i++){
        while(num_list[i] > 1){
            if(num_list[i] % 2 == 0){
                num_list[i] /= 2;
                cnt ++;
            }
            else{
                num_list[i] -= 1;
                num_list[i] /= 2;
                cnt++;
            }
        }
    }
    return cnt;
}

/*
짝수이면 /2 홀수이면 -1 후 /2해서
모든 원소를 1로 만들려면 몇번 연산해야하는지
*/