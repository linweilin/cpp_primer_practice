/* 声明一个空 string 类型数据时，需要给它分配内存空间。
 * 存在越界索引时没有报错的bug
 * 解决的方法有两种，一种是使用resize给它分配内存；
 * 另外一种是使用+运算符。
 *
 * 20210305更新：存在另一种更快的解法，
 * 可以不使用一个新的string，直接通过cout输出
 */
#include <iostream>
#include <string>
#include <cctype>

using std::cin;     using std::endl;
using std::cout;
using std::string;

int main() {

    string str;
    string new_str;
    // use getline instead of cin
    getline(cin, str);
    if(str.empty())
        return -1;
    
    /* new_str.resize(str.size());
     * do not use copy function
     */
    // new_str = str;
    decltype(str.size()) i = 0;
    while(i < str.size()) {

       if(!ispunct(str[i])) {
           
          new_str[i] = str[i]; 
          // new_str += str[i];
          cout << str[i];
       }
       i++;
    }
    new_str[i+1] = '\0';
    // cout << "str: " << str;
    // cout << "new_str:" << new_str;
    cout << endl;

    return 0;
}
