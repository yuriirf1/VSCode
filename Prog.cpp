#include <iostream>
#include <cmath>
double perimeterOfSquare(double );//begin1 prototype of functionr of function Begin1
double squareArea(double );//begin2

int main()
{
    double a;
    std::cout << "Enter side of square: ";
    std::cin >> a;
    double result = perimeterOfSquare(a);
    std::cout << "Perimeter of square: " << result << std::endl; 
    result = squareArea(a);
    std::cout << "Area of square: " << result << std::endl;
    
    return 0;
}
double perimeterOfSquare(double side)//begin1
{
    return side * 4;
}
double squareArea(double side)//begin2
{
    return std::pow(side, 2);
}
