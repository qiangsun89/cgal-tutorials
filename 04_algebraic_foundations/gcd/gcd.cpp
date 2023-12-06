#include <iostream>  
#include <CGAL/gcd.h>  
  
int main() {  
    int a = 48;  
    int b = 64;  
  
    // 计算最大公约数  
    int gcd = CGAL::gcd(a, b);  
  
    std::cout << "最大公约数是: " << gcd << std::endl;  
  
    return 0;  
}