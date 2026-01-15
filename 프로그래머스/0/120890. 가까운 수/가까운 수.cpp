#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 101;
    
    for(const auto& a : array)
    {
        if(abs(a - n) < abs(answer - n))
            answer = a;
        else if(abs(a - n) == abs(answer - n))
            answer = a > answer ? answer : a;
    }
    
    return answer;
}