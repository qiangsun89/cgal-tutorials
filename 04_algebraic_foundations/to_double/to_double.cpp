#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <iostream>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::FT NumberType; // FT 表示字段类型

int main() {
    NumberType a = 3.141592653589793;
    
    // 将 CGAL 数值类型转换为 double
    double a_double = CGAL::to_double(a);

    // 输出转换后的值
    std::cout << "CGAL number: " << a << std::endl;
    std::cout << "Double number: " << a_double << std::endl;

    return 0;
}
