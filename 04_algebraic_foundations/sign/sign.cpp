#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <iostream>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::FT NumberType; // FT 表示字段类型

int main() {
    NumberType a = -3.14;
    NumberType b = 0;
    NumberType c = 2.718;

    // 检查 a 的符号
    CGAL::Sign sign_a = CGAL::sign(a);
    if (sign_a == CGAL::NEGATIVE) {
        std::cout << "a is negative" << std::endl;
    } else if (sign_a == CGAL::ZERO) {
        std::cout << "a is zero" << std::endl;
    } else {
        std::cout << "a is positive" << std::endl;
    }

    // 检查 b 的符号
    CGAL::Sign sign_b = CGAL::sign(b);
    if (sign_b == CGAL::NEGATIVE) {
        std::cout << "b is negative" << std::endl;
    } else if (sign_b == CGAL::ZERO) {
        std::cout << "b is zero" << std::endl;
    } else {
        std::cout << "b is positive" << std::endl;
    }

    // 检查 c 的符号
    CGAL::Sign sign_c = CGAL::sign(c);
    if (sign_c == CGAL::NEGATIVE) {
        std::cout << "c is negative" << std::endl;
    } else if (sign_c == CGAL::ZERO) {
        std::cout << "c is zero" << std::endl;
    } else {
        std::cout << "c is positive" << std::endl;
    }

    return 0;
}
