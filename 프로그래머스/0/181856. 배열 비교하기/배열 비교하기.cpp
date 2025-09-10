#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int sum1 = 0;
    int sum2 = 0;
    if(arr1.size() > arr2.size()){
        return 1;
    }
    else if(arr1.size() < arr2.size()){
        return -1;
    }
    else if (arr1.size() == arr2.size()){
        for(int i = 0; i < arr1.size(); i++){
            sum1 += arr1[i];
            sum2 += arr2[i];
        }
        if(sum1 > sum2){
            return 1;
        }
        else if(sum1 < sum2){
            return -1;
        }
    }
    return 0;
}

/*
배열 길이 비교
같은 경우 원소 합 비교
arr2가 크면 -1
arr1이 크면 1
같다면 0
*/