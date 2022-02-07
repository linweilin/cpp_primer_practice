#include <iostream>

int add_f(int i)
{
    auto f = [i](int &a) {

        return a+i;
    };

    auto a = 5;
    return f(a);
}

int main(int argc, char **argv)
{

    int num;
    std::cin >> num;
    
    auto result = add_f(num);

    std::cout << "result is " << result << std::endl;

    return 0;
}
