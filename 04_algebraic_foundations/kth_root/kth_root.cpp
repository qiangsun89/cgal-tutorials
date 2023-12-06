#include <iostream>
#include <CGAL/Exact_predicates_exact_constructions_kernel.h>
#include <CGAL/MP_Float.h>
#include <CGAL/number_utils.h>

int main() {
    typedef CGAL::MP_Float Number; // 使用 CGAL::MP_Float 作为数值类型，可处理大数
    Number x(8.0); // 要计算的数
    int k = 3; // 3次方根

    Number kth_root_result = CGAL::kth_root(x, k);

    std::cout << "第 " << k << " 次方根：" << kth_root_result << std::endl;

    return 0;
}
