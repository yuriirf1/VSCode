#include <iostream>
#include <cmath>
double perimeterOFSquare(double );//begin1 prototypr of function Begin1

int main()
{
    double a;
    std::cout << "Enter side of square: ";
    std::cin >> a;
    double result = perimeterOFSquare(a);
    std::cout << result << std::endl; 
    
    return 0;
} 

double perimeterOFSquare(double side)//begin1
{
    return side*4;
}
