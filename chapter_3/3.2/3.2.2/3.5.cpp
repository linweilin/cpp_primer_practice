#include <iostream>
#include <string>

using std::cin;     using std::endl;
using std::cout;
using std::string;

int main() {

    string input_string;
    string output_string;
    while(cin >> input_string) {

        if(!input_string.empty())
            output_string += input_string + " ";
    }

    cout << output_string << endl;
    return 0;
}
