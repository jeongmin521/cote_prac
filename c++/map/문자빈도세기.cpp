#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string s = "hello map example";
    map<char, int> freq;

    for (char c : s) {
        if (c != ' ') freq[c]++;
    }

    for (auto p : freq) {
        cout << p.first << ": " << p.second << endl;
    }

    return 0;
}


/*

결과
a: 2
e: 3
h: 1
l: 3
m: 2
o: 1
p: 2
x: 1

*/
