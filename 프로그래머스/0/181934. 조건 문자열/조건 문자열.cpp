#include <string>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    if(ineq == ">") {
        if(eq == "=") {
            return n >= m;
        }
        else if(eq == "!") {
            return n > m;
        }
    }
    else if(ineq == "<") {
        if(eq == "=") {
            return n <= m;
        }
        else if(eq == "!") {
            return n < m;
        }
    }
}

/*
ineq로 나누고
eq로 또 나눠서 
각 경우
*/