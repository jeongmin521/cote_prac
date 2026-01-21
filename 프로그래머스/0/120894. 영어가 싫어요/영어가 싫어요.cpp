#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    int i = 0, add = 0;
    while(i < numbers.size()){
        if(numbers[i] == 'o'){
            add = 1, i += 3;
        }
        else if(numbers[i] == 't'){
            if(numbers[i + 1] == 'w') add = 2, i += 3;
            else add = 3, i += 5;
        }
        else if(numbers[i] == 'f'){
            if(numbers[i + 1] == 'o') add = 4;
            else add = 5;
            i += 4;
        }
        else if(numbers[i] == 's'){
            if(numbers[i + 1] == 'i') add = 6, i += 3;
            else add = 7, i += 5;
        }
        else if(numbers[i] == 'e') add = 8, i += 5;
        else if(numbers[i] == 'n') add = 9, i += 4;
        else if(numbers[i] == 'z') add = 0, i += 4;
        
        answer = answer * 10 + add;
    }
    return answer;
}