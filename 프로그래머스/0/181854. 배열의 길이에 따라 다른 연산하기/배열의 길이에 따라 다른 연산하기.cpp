#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    if(arr.size() % 2 != 0){  //홀수
        for(int i = 0; i < arr.size(); i += 2){
            arr[i] = arr[i] + n;
        }
    } 
    else{
        for(int i = 1; i < arr.size(); i += 2){
            arr[i] = arr[i] + n;
        }
    }
    
    return arr;
}
