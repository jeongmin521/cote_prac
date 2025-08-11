#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
     while (true) {
        vector<int> prev = arr; 
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                arr[i] /= 2;
            } else if (arr[i] < 50 && arr[i] % 2 != 0) {
                arr[i] = arr[i] * 2 + 1;
            }
        }
        
        if (arr == prev) { 
            break;
        }
        
        answer++;
    }
    
    return answer;
}

/*
arr[i] >= 50 && arr[i] % 2 = 0 이면
/2
arr[i] < 50 && arr[i] % 2 != 0 이면
*2 + 1
했을 때 배열이 똑같은 경우 (= 조건에 해당하지 않는 원소들로 채워졌을 경우 중 가장 빠른 경우 찾기)
*/