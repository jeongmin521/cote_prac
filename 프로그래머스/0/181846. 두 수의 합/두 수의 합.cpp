#include <string>
#include <algorithm>
using namespace std;

string solution(string a, string b) {
    string answer;
    int i = (int)a.size() - 1;
    int j = (int)b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int da = (i >= 0 ? a[i--] - '0' : 0);
        int db = (j >= 0 ? b[j--] - '0' : 0);
        int s = da + db + carry;
        answer.push_back(char('0' + (s % 10)));
        carry = s / 10;
    }
    reverse(answer.begin(), answer.end());
    return answer;
}

/*
    string answer;
    int inta = stoi(a);
    int intb = stoi(b);
    int total = inta + intb;
    
    answer = to_string(total);
    return answer;
에러나는이유 : 수가 너무 커서
*/