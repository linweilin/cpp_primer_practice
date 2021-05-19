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

using std::cout; using std::endl;
using std::string;
using std::vector;

// 3.21.cpp: In instantiation of ‘bool printInfo(const T&) [with T = std::vector<int>]’:
// 3.21.cpp:44:17:   required from here
// 3.21.cpp:24:12: error: request for member ‘empty’ in ‘* it.__gnu_cxx::__normal_iterator<const int*, std::vector< int> >::operator->()’, which is of non-class type ‘const int’
//      if(it->empty())
// template <typename T>
// bool printInfo(vector<int> t) {

    // cout << "size, capacity, and values: " << t.size() << ", " << t.capacity() << ", " << endl;

    // // if(t.empty())
    // auto it = t.cbegin();
    // // if(it->empty())
    // if((*it).empty())
        // return false;

    // for(auto &i : t) {

        // cout << i << "\t";
    // }
    // cout << endl;

    // return true;
// }

int main() {

    vector<int> v1;                  vector<int> v2(10);
    vector<int> v3(10, 42);          vector<int> v4{10};
    vector<int> v5{10, 42}; 
    vector<string> v6 {10};     
    vector<string> v7 {10, "hi"};
    
    auto it = v3.cbegin();
    
    // if(it->empty())
        // return -1;
    
    // printInfo(v1);
    // printInfo(v2);
    // printInfo(v3);
    // printInfo(v4);
    // printInfo(v5);
    // printInfo(v6);
    // printInfo(v7);

    return 0;
}
