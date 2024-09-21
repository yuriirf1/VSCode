#include <iostream>
#include <cmath>
double perimeterOfSquare(double);//begin1 prototype of functionr of function Begin1
double squareArea(double);//begin2
double perimeterOfRectangle(double, double);//begin3_1
double areaOfRectangle(double, double);//begin3_2
double circumference(double);//begin4
void swapMinMax(double, double);//if task 9 
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
double perimeterOfRectangle(double height, double width)//begin3_1
{
    return 2 * (height + width);
}
double areaOfRectangle(double height, double width)//begin3_2
{
    return height * width;
}
double circumference(double diameter)//begin4
{
    const double Pi = 3.1415;
    return Pi * diameter;
}
//Даны две переменные вещественного типа a и b. Перераспределить значения данных переменных так чтобы в A оказалось меньшее из значений, а в b - большее
void swapMinMax(double a, double b)//if task 9
{
    if(a < b)
    {
        return;
    }
    double c = a;
    a = b;
    b = c;
    std::cout << a << ' ' << b << std::endl;
}
