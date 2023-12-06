#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <iostream>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::FT NumberType; // FT 表示字段类型

int main() {
    NumberType a = 0;
    NumberType b = 3.14;

    // 检查 a 是否为零
    if (CGAL::is_zero(a)) {
        std::cout << "a is zero" << std::endl;
    } else {
        std::cout << "a is not zero" << std::endl;
    }

    // 检查 b 是否为零
    if (CGAL::is_zero(b)) {
        std::cout << "b is zero" << std::endl;
    } else {
        std::cout << "b is not zero" << std::endl;
    }

    return 0;
}
