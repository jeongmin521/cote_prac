#include <string>
#include <vector>
#include <sstream>                               

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    stringstream ss(my_string);
    ss >> answer;
    while(ss)
    {
        string o;
        int b;
        ss >> o >> b;
        if(o == "+")
            answer += b;
        else if(o == "-")
            answer -= b;
    }
    return answer;
}