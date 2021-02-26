/* 虽然是对const取引用，但是如果不修改其值，仍能正常编译。
 * 类型是char
 */
#include <iostream>
#include <string>
#include <typeinfo>

using std::cout;    using std::endl;
using std::string;

int main() {

    const string s = "Keep out!";
    for(auto &c : s) {

        cout << typeid(c).name() << endl;
    }

    return 0;
}
