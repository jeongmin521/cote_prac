#include <string>
#include <vector>

using namespace std;

 
int solution(vector<vector<int>> lines) {
    int answer = 0;

    vector<int> vec (300, 0);
    
    for(int i = 0; i < lines.size(); i++) {
        int a = lines[i][0];
        int b = lines[i][1];
        for(int j = a + 101; j < b + 101; j++) {
            vec[j]++;
        }
    }
    
    for(int i = 0; i < vec.size(); i++) {  
        if (vec[i] > 1) {
            answer++;
        }
    }
    
    return answer;
}
