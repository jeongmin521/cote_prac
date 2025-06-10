#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string plustring = to_string(a) + to_string(b);
    int plus = stoi(plustring);
    
    int multiply = a * b * 2;
    
    if(plus > multiply){
        return plus;
    }
    else{
        return multiply;
    }
}