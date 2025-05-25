#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    // 3x3 행렬 초기화
    vector<vector<int>> matrix(3, vector<int>(3));

    // 입력 받기
    cout << "숫자를 입력하세요" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }

    // 전체 합 계산
    int total_sum = 0;
    for (const auto& row : matrix) {
        total_sum += accumulate(row.begin(), row.end(), 0);
    }

    cout << "총합: " << total_sum << endl;

    // 각 행의 합 출력
    for (int i = 0; i < 3; ++i) {
        int row_sum = accumulate(matrix[i].begin(), matrix[i].end(), 0);
        cout << "행의 합 " << i << ": " << row_sum << endl;
    }

    return 0;
}
