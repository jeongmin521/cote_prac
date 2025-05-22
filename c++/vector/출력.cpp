#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {0,1,2,3};

    //index로 출력
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << "\n";

    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";
    }

    cout << "\n";


    //iterator로 출력
    for(auto i  = v.begin(); i != v.end(); ++i){
        cout << *i << " ";
    }

    cout << "\n";

    //역순
    for(auto i = v.rbegin(); i != v.rend(); ++i){
        cout << *i << " ";
    }
}
