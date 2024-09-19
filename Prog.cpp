#include <iostream>
#include <cmath>
/*************  ✨ Codeium Command ⭐  *************/
/**
 * @brief Calculates the perimeter of a square given its side
 * @param side The length of a side of the square
 * @return The perimeter of the square
 */
/******  e9c60971-15a1-4ea8-b8a9-3347d424263f  *******/
double perimeterOFSquare(double );//begin1 prototypr of function Begin1

/*************  ✨ Codeium Command ⭐  *************/
/**
 * @brief This program calculates the perimeter of a square given its side
 */
/******  b191aa7d-65fa-462e-a168-a699ffade37a  *******/
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
