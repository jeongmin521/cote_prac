#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    for (int i = 0; i < strArr.size(); i++) {
        for (int j = 0; j < strArr[i].size(); j++) {
            if (i % 2 == 0) {
                strArr[i][j] = tolower((unsigned char)strArr[i][j]);
            } else {
                strArr[i][j] = toupper((unsigned char)strArr[i][j]);
            }
        }
    }
    return strArr;
}
