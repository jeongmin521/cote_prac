#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    sort(indices.begin(), indices.end(), greater<int>());
    for(int i = 0; i < indices.size(); i++){
        my_string.erase(my_string.begin() + indices[i]);
    }
    return my_string;
}

/*
my_string 에서 indices 정수의 인덱스를 지우기
현재 문제점
인덱스가 순서대로 있는게 아니라서 my_string이 변할때 그 순서가 조금씩 바뀜
1. indices를 내림차순 정렬해서 뒤에부터 없앤다
2. my_string을 복사해서 새로운 배열에 저장하고 원래 인덱스와 맞는 문자를 찾아서 지우기

1이 더 편할듯?
*/