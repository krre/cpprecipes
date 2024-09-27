#include <iostream>

template <typename T>
auto sum(T a, T b) {
    return a + b;
}

int main() {
    std::cout << sum(2, 3) << std::endl;

    return 0;
}
