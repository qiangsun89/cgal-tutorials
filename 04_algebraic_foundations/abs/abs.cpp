#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <iostream>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::FT NumberType; // FT 表示字段类型

int main() {
    NumberType a = -3.14;

    // 计算绝对值
    NumberType absValue = CGAL::abs(a);

    // 输出结果
    std::cout << "The absolute value of " << a << " is " << absValue << std::endl;

    return 0;
}
