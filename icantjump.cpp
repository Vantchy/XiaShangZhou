#include <iostream>

int main() {
    int a = 0;
    int b = 0;

    std::cout << "Enter two integers: ";
    if (!(std::cin >> a >> b)) {
        std::cout << "Invalid input.\n";
        return 1;
    }

    std::cout << "Sum: " << static_cast<long long>(a) + b << '\n';
    return 0;
}
