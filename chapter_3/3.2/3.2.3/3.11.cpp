/* 合法。虽然是对const取引用，但是如果不修改其值，仍能正常编译。
 * c的推断类型是char的常量引用
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
