#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <iostream>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::FT NumberType; // FT 表示字段类型

int main() {
    NumberType a = -3.14;
    NumberType b = 0;
    NumberType c = 2.718;

    // 检查 a 是否为正数
    if (CGAL::is_positive(a)) {
        std::cout << "a is positive" << std::endl;
    } else {
        std::cout << "a is not positive" << std::endl;
    }

    // 检查 b 是否为正数
    if (CGAL::is_positive(b)) {
        std::cout << "b is positive" << std::endl;
    } else {
        std::cout << "b is not positive" << std::endl;
    }

    // 检查 c 是否为正数
    if (CGAL::is_positive(c)) {
        std::cout << "c is positive" << std::endl;
    } else {
        std::cout << "c is not positive" << std::endl;
    }

    return 0;
}
