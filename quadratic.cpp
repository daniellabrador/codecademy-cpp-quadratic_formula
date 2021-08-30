#include <iostream>
#include <cmath>

int main() {
  // Declare a, b, c and ask user for values.
  double a,b,c;
  std::cout<<"Enter a: "; std::cin>>a;
  std::cout<<"Enter b: "; std::cin>>b;
  std::cout<<"Enter c: "; std::cin>>c;
  
  // Declare and initialize roots.
  double root1 = (-b + std::sqrt((b*b)-(4*a*c)))/(2*a);
  double root2 = (-b - std::sqrt((b*b)-(4*a*c)))/(2*a);

  // Output answer
  std::cout<<"The roots of the equation are "<<root1 <<" and "<<root2<<".\n";
}