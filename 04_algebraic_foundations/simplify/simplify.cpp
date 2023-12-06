#include <CGAL/Quotient.h>
#include <CGAL/Gmpq.h>
#include <iostream>

int main() {
    // 创建一个分数
    CGAL::Quotient<CGAL::Gmpq> fraction = CGAL::Quotient<CGAL::Gmpq>(2, 4);

    std::cout << "Before simplification: " << fraction << std::endl;

    // 简化分数
    CGAL::simplify(fraction);

    std::cout << "After simplification: " << fraction << std::endl;

    return 0;
}
