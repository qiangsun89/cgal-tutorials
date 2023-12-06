#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <iostream>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::FT NumberType; // FT 表示字段类型

int main() {
    NumberType a = 1.0/3.0; // 创建一个分数

    // 将 CGAL 数值类型转换为浮点数区间
    std::pair<double, double> interval = CGAL::to_interval(a);

    // 输出区间的上下界
    std::cout << "Lower bound: " << interval.first << std::endl;
    std::cout << "Upper bound: " << interval.second << std::endl;

    return 0;
}
