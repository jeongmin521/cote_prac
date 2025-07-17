#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    for(int i = 0; i < num_list.size(); i++){
        if(num_list[i] < 0){
            return i;
        }
    }
    return -1;
}

/*
첫 번째로 나오는 음수의 인덱스 return
없으면 -1
*/