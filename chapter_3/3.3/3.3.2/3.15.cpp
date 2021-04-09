#include<iostream>
#include<string>
#include<vector>

using std::cin;     using std::endl;
using std::cout;
using std::string;
using std::vector;

int main() {

    vector<string> input;

    string str = "";
    while(cin >> str) {

        input.push_back(str);
    }

    for(auto &str : input)
        cout << str << " ";
    cout << endl;
    
    return 0;
}
