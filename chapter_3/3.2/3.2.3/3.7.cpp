#include <iostream>
#include <string>

using std::cin;     using std::endl;
using std::cout;
using std::string;

int main() {

    string str;
    while(cin >> str) {

        if(!str.empty())
            // key word auto is modified to char.
            // Nothing will happen because here the auto type is exactly char.
            // for(auto &c : str)
            for(char &c : str)
                c = 'X';
        cout << str << endl;
    }

    return 0;
}
