#include<iostream>
#include<vector>

using std::cin;     using std::endl;
using std::cout;
using std::vector;

int main() {

    vector<int> input;

    int i = 0;
    while(cin >> i) {

        input.push_back(i);
    }

    for(auto &i : input)
        cout << i << " ";
    cout << endl;
    
    return 0;
}
