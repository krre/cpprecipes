#include <iostream>

using namespace std;

template <typename T>
auto sum(T a, T b) {
    return a + b;
}

int main() {
    cout << sum(2, 3) << endl;

    return 0;
}
