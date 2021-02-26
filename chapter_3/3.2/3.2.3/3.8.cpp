#include <iostream>
#include <string>

using std::cin;     using std::endl;
using std::cout;
using std::string;

int main() {

    string str;
    while(cin >> str) {

        if(!str.empty()) {

            // for(auto &c : str)
            /* Use while or regular for statement instead of range for
             * but range for statement is more simpler
             */
            // while statement
            // decltype(str.size()) index = 0;
            // while(index < str.size())
                // str[index++] = 'X';
            
            // for statement
            for(decltype(str.size()) index = 0; index < str.size(); index++)
                str[index] = 'X';
        }
        cout << str << endl;
    }

    return 0;
}
