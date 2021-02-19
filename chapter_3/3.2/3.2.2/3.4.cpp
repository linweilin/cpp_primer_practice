#include <iostream>
#include <string>

using std::cin;     using std::endl;
using std::cout;
using std::string;

int main() {

    string str1, str2;
    while(cin >> str1 >> str2) {

        if(str1.empty()) {

            cout << "Please type sting1 again: " << endl;
            cout << str1 << endl;
        }

        if(str2.empty()) {

            cout << "Please type sting2 again: " << endl;
            cout << str2 << endl;
        }

        if(str1 == str2)
            cout << "str1 and str2 is equal" << endl;
        else if(str1.size() > str2.size())
            cout << str1 << endl;
        else if(str1.size() < str2.size())
            cout << str2 << endl;
        else if(str1.size() == str2.size()) {

            cout << __LINE__ << endl;
            if(str1 > str2)
                cout << __LINE__ << str1 << endl;
            // else
            if(str1 < str2)
                cout << __LINE__ << str2 << endl;
        }
    }

    return 0;
}
