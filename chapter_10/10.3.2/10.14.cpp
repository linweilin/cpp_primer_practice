#include <iostream>

int main(int argc, char **argv)
{
    auto f = [](int &a, int &b) {

        return a+b;
    };

    int a, b;
    std::cin >> a >> b;

    std::cout << "result is " << f(a, b) << std::endl;

    return 0;
}
