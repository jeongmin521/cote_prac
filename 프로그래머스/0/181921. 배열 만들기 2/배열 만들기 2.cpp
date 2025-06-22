#include <string>
#include <vector>

using namespace std;

bool fivezero(int num) {
    if (num == 0) {
        return true;
    }

    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 5) {
            return false;
        }
        num /= 10;
    }
    return true;
}

vector<int> solution(int l, int r) {
    vector<int> answer;

    for (int i = l; i <= r; i++) {
        if (fivezero(i)) {
            answer.push_back(i);
        }
    }

    if (answer.empty()) {
        return {-1};
    }

    return answer;
}


/*
l이상 r이하의 정수 중
숫자 0과 5로 이루어진 모든 정수를 오름차순 저장
없으면 -1
int -1이 아니고 [-1] 
함수 리턴값이 vector이기 때문

숫자 0 혹은 5가 아닌 다른 수가 있으면 x
int를 각각 숫자 하나씩 비교해서 다른 수가 있는지 확인하고 없으면
배열에 저장
다시 int형으로 변환해서 오름차순으로 정렬
*/