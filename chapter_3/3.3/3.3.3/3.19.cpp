#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::endl;
using std::string;
using std::vector;

using Veci = vector<int>;

template<typename T>
void printVector(const T &t) {

    cout << "vector: ";
    for(auto i : t) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {

    // Method 1: 列表初始化
    // 较为麻烦，不推荐
    Veci vec_1{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    // Method 2: 小括号初始化
    // 简介，推荐使用，但需要提前知道初始化的元素数量，较少使用
    Veci vec_2(10, 42);

    // Method 3: 空vector push_back;
    // 最推荐使用的方法，一般不知道元素数量，for 循环的push_back能够防止访问不存在的内存。
    Veci vec_3;
    for(int i = 0; i < 10; ++i)
        vec_3.push_back(42);

    printVector(vec_1);
    printVector(vec_2);
    printVector(vec_3);

    return 0;
}
