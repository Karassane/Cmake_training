#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b) {
    return a + b;
}
int main() {
    std::cout << "Hello from C++ with Clake on Linux (std=c++20)" << std::endl;
    int a = 1;
    int C = 3
    return 0;
}
