#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> words;

    words.insert("banana");
    words.insert("apple");
    words.insert("orange");

    for (const auto& word : words) {
        cout << word << " ";
    }
    return 0;
}

// 출력: apple banana orange
