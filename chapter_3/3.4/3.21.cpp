/* 重做 3.3.3节中的第一个练习（即3.16.cpp）
 */
// (a) vector<int> v1; 空vector，没有元素                   (b) vector<int> v2(10); 10个元素，默认初始化为0；
// (c) vector<int> v3(10, 42); 10个元素，初始化为42;        (d) vector<int> v4{10}; 1个元素，初始化为10；
// (e) vector<int> v5{10, 42}; 2个元素，分别为10、42
// (f) vector<string> v6 {10}; 由于使列表初始化值为10的string类型失败，因此改为初始化10个string对象，值为空
// (g) vector<string> v7 {10, "hi"}; 由于使列表初始化值为10的string类型失败，因此改为初始化10个string对象，值都为“hi”

#include <iostream>
#include <string>
#include <vector>
// #include <iterator>

using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;

using Veci = vector<int>;

template<typename T>
int printInfo(const T &t) {

    // 判断对象是否为空
    if(t.empty()) {
    // if(t.cbegin() == t.cend()) {

        cout << "Input vector is empty!" << endl;
        return -1;
    }

    for(auto it = t.cbegin(); it != t.cend(); ++it) {

        cout << *it << ", ";
    }
    cout << endl;
    
    return 0;
}

int main() {

    vector<int> v1;                  vector<int> v2(10);
    vector<int> v3(10, 42);          vector<int> v4{10};
    vector<int> v5{10, 42}; 
    vector<string> v6 {10};     
    vector<string> v7 {10, "hi"};
    
    printInfo(v1);
    printInfo(v2);
    printInfo(v3);
    printInfo(v4);
    printInfo(v5);
    printInfo(v6);
    printInfo(v7);

    return 0;
}
