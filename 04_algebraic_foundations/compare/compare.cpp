#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <iostream>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::FT NumberType; // FT 表示字段类型

int main() {
    NumberType a = 3.14;
    NumberType b = 2.718;
    NumberType c = 3.14;

    // 比较 a 和 b
    CGAL::Comparison_result result_ab = CGAL::compare(a, b);
    if (result_ab == CGAL::SMALLER) {
        std::cout << "a is smaller than b" << std::endl;
    } else if (result_ab == CGAL::EQUAL) {
        std::cout << "a is equal to b" << std::endl;
    } else {
        std::cout << "a is larger than b" << std::endl;
    }

    // 比较 a 和 c
    CGAL::Comparison_result result_ac = CGAL::compare(a, c);
    if (result_ac == CGAL::SMALLER) {
        std::cout << "a is smaller than c" << std::endl;
    } else if (result_ac == CGAL::EQUAL) {
        std::cout << "a is equal to c" << std::endl;
    } else {
        std::cout << "a is larger than c" << std::endl;
    }

    return 0;
}
