#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string even = "";
    string odd = "";

    for (int i = 0; i < num_list.size(); i++) {
        if (num_list[i] % 2 == 0) {
            even += to_string(num_list[i]); 
        } else {
            odd += to_string(num_list[i]);
        }
    }

    int evennum = stoi(even);
    int oddnum = stoi(odd);

    answer = evennum + oddnum;
    return answer;
}


/*
홀수만 이어붙인 수 + 짝수만 이어 붙인 수
벡터는 현재 int형이고
숫자를 이어 붙이려면 string으로 변환해서
다시 int로 바꾸기
*/