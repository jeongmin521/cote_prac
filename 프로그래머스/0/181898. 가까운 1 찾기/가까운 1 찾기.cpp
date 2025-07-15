#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = -1;
    for(int i = idx; i < arr.size(); i++){
        if(arr[i] == 1){
            answer = i;
            break;
        }
    }
    return answer;
}

/*
idx보다 더 뒤에있는 arr중에 1인 값의 인덱스
만약 없으면 -1 리턴
*/