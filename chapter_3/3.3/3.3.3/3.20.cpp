#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::endl;
using std::cin;
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

    Veci vec;
    int input;
    while(cin >> input) 
        vec.push_back(input);

    // 首先必须判断输入是否为空
    if(vec.empty()) {

        cout << "Input is empty!" << endl;
        return -1;
    }

    // 输入相邻整数和（我的求法是第一二项、第二三项以此类推？）
    // TODO: 为什么相邻两项的求法是第一和第二项、第三和第四项这种？
    Veci sum_neighbor;
    for(int i = 0; i < vec.size() - 1; ++i)
        sum_neighbor.push_back(vec[i] + vec[i+1]);

    // 求i 和 size - i的和
    // Method 1: the sum of vec[vec.size() % 2 + 1] of itself is calculated when vec.size() is odd.
    Veci sum_reverse;   
    Veci sum_reverse_2;   
    if(vec.size() % 2 ==0) {        // Even

        for(int i = 0; i< vec.size() / 2; ++i)
            sum_reverse.push_back(vec[i] + vec[vec.size() - 1 -i]);
    }
    else
        // 学习size为奇数时，单独处理的方法
        // 中间的元素下标为size / 2
        for(int i = 0; i< vec.size() / 2 + 1; ++i)      // Odd
            sum_reverse.push_back(vec[i] + vec[vec.size() - 1 -i]);

    // Method 2: the sum of vec[vec.size() % 2 + 1] of itself is NOT calculated when vec.size() is odd.
    for(int i = 0; i< vec.size() / 2; ++i)
        sum_reverse_2.push_back(vec[i] + vec[vec.size() - 1 -i]);

    printVector(vec);
    printVector(sum_neighbor);
    printVector(sum_reverse);
    printVector(sum_reverse_2);
    
    return 0;
}
