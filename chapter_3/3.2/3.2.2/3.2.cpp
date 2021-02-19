#include <iostream>
#include <string>

using std::cin;     using std::endl;
using std::cout;
using std::string;

int main() {

    string str;
    // while(getline(cin, str)) {
    while(cin >> str) {

        if(!str.empty())
            cout << str << endl;
    }
    return 0;
}
