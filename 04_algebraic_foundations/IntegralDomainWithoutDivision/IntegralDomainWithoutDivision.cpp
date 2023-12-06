#include <CGAL/Gmpq.h>
#include <iostream>

typedef CGAL::Gmpq NumberType;

int main() {
    NumberType a = 6;
    NumberType b = 3;

    // 加法
    NumberType sum = a + b;
    std::cout << "Sum: " << sum << std::endl;

    // 减法
    NumberType diff = a - b;
    std::cout << "Difference: " << diff << std::endl;

    // 乘法
    NumberType product = a * b;
    std::cout << "Product: " << product << std::endl;

    // 除法
    NumberType quotient = a / b;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}
