#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;

int main() {

    vector<string> v_word;
    string str;

    while(cin >> str) {

        v_word.push_back(str);
    }

    /* Method 1
     * This line is used to calculate the transform between capital and letters
     * cout << "a - A = " << 'a'-'A' << endl;
     */
    // for(auto &i : v_word) {

        // for(auto &j : i)
            // if('a' <= j <= 'z')
                // j -=32;
        // cout << i << endl;
    // }

    for(auto &i : v_word) {

        for(auto &j : i)
            j = toupper(j);

        cout << i << endl;
    }
    return 0;
}
