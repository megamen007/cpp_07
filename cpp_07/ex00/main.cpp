#include "whatever.hpp"

// int main()
// { 
// // max_template
// int A = 10,  B = 99 ; 
//     std::cout << max<int>(A,B) << std::endl; 
// // min_template
// int Y = 10,  K = 99 ; 
//     std::cout << min<int>(Y,K) << std::endl; 

// // swap_template
// int a = 10,  b = 99 ; 
// std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;
// swap<int>(a,b); 
// std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;
// }

int main() {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}