#include <iostream>
#include <string>

using std::cin;     using std::endl;
using std::cout;
using std::string;

int main() {

    string str;
    while(cin >> str) {

        if(!str.empty())
            for(auto c : str)
                c = 'X';
        cout << str << endl;
    }

    return 0;
}
