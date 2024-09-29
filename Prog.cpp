#include <iostream>
#include <cmath>
double perimeterOfSquare(double);                    // begin1 prototype of functionr of function Begin1
double squareArea(double);                           // begin2
double perimeterOfRectangle(double, double);         // begin3_1
double areaOfRectangle(double, double);              // begin3_2
double circumference(double);                        // begin4
double volumeCube(double);                           // begin5_1
double areaCube(double);                             // begin5_2
double volumeParallelepiped(double, double, double); // begin6_1
double areaParallelepiped(double, double, double);   // begin6_2
double circumference(double);                        // begin7_1
double areaCircle(double);                           // begin7_2
double arithmeticMean(double, double);               // begin8
double geometricMean(double, double);                // begin9
double sumSquares(double, double);                   // begin10_1
double differenceSquares(double, double);            // begin10_2
double multipleSquares(double, double);              // begin10_3
double divisionSquares(double, double);              // begin10_4
void swapMinMax(double, double);                     // if task 9
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
double perimeterOfSquare(double side) // begin1
{
    return side * 4;
}
double squareArea(double side) // begin2
{
    return std::pow(side, 2);
}
double perimeterOfRectangle(double height, double width) // begin3_1
{
    return 2 * (height + width);
}
double areaOfRectangle(double height, double width) // begin3_2
{
    return height * width;
}
double circumference(double diameter) // begin4
{
    const double Pi = 3.1415;
    return Pi * diameter;
}
double volumeCube(double side) // begin5_1
{
    return std::pow(side, 3);
}
double areaCube(double side) // begin5_2
{
    return 6 * std::pow(side, 2);
}
double volumeParallelepiped(double height, double width, double depth) // begin6_1
{
    return height * width * depth;
}
double areaParallelepiped(double height, double width, double depth) // begin6_2
{
    return 2 * (height * width + height * depth + width * depth);
}
double circumference(double radius) // begin7_1
{
    const double Pi = 3.1415;
    return 2 * Pi * radius;
}
double areaCircle(double radius) // begin7_2
{
    const double Pi = 3.1415;
    return Pi * std::pow(radius, 2);
}
double arithmeticMean(double a, double b) // begin8
{
    return (a + b) / 2;
}
double geometricMean(double a, double b) // begin9
{
    // if(a >= 0 && b >= 0)
    //{
    return std::sqrt(fabs(a) * fabs(b));
    //}
}
double sumSquares(double a, double b) // begin10_1
{
    if (a != 0 & b != 0)
    {
        return std::pow(a, 2) + std::pow(b, 2);
    }
    return 0;
}
double differenceSquares(double a, double b) // begin10_2
{
    if (a != 0 & b != 0)
    {
        return std::pow(a, 2) - std::pow(b, 2);
    }
    return 0;
}
double multipleSquares(double a, double b) // begin10_3
{
    if (a != 0 & b != 0)
    {
        return std::pow(a, 2) * std::pow(b, 2);
    }
    return 0;
}
double divisionSquares(double a, double b) // begin10_4
{
    if (a != 0 & b != 0)
    {
        return std::pow(a, 2) / std::pow(b, 2);
    }
    return 0;
}
double sumAbs(double a, double b) // begin11_1
{
    if (a != 0 && b != 0)
    {
        return fabs(a) + fabs(b);
    }
    return 0;
}
double differenceAbs(double a, double b) // begin11_2
{
    if (a != 0 && b != 0)
    {
        return fabs(a) - fabs(b);
    }
    return 0;
}
double multipleAbs(double a, double b) // begin11_3
{
    if (a != 0 && b != 0)
    {
        return fabs(a) * fabs(b);
    }
    return 0;
}
double divideAbs(double a, double b) // begin11_4
{
    if (a != 0 && b != 0)
    {
        return fabs(a) / fabs(b);
    }
    return 0;
}
double hypotenuse(double legA, double legB) // begin12_1
{
    return std::sqrt(std::pow(legA, 2) + std::pow(legB, 2));
}
double perimeter(double legA, double legB) // begin12_2
{
    return legA + legB + hypotenuse(legA, legB);
}
void swap(double& a, double& b)
{
    double temp = a;
    a = b;
    b = temp;
}
double squareRing(double radius1, double radius2) // begin13var1
{
    if(radius1 < radius2)
    {
        swap(radius1, radius2);
    }
    return areaCircle(radius1) - areaCircle(radius2);
}
double squareRing(double radius1, double radius2) // begin13var2
{
    return fabs(areaCircle(radius1) - areaCircle(radius2));
}
double radius(double circumference) // begin14_1
{
    const double Pi = 3.1415;
    return circumference / (2 * Pi);
}
double areaCircle2(double circumference) // begin14_2
{
    const double Pi = 3.1415;
    return Pi * std::pow(radius(circumference), 2);
}
double diameter(double area)// begin15_1
{
    const double Pi = 3.1415;
    return 2 * std::sqrt(area / Pi);
}
double circumference2(double area) // begin15_2
{
    const double Pi = 3.1415;
    return Pi * diameter(area);
}
double distance(double point1, double point2)//begin16var1
{
    if(point2 < point1)
    {
        swap(point1, point2);
    }
    return fabs(point2 - point1);
}
double distance16(double point1, double point2)//begin16var2
{
    return fabs(fabs(point2) - fabs(point1));
}
double length(double pointA, double pointB) // begin17_1
{
    return distance(pointA, pointB);
}
double sumABC(double pointA, double pointB, double pointC) // begin17_2
{
    return length(pointA, pointC) + length(pointB, pointC);
}
// Даны две переменные вещественного типа a и b. Перераспределить значения данных переменных так чтобы в A оказалось меньшее из значений, а в b - большее
void swapMinMax(double a, double b) // if task 9
{
    if (a < b)
    {
        return;
    }
    double c = a;
    a = b;
    b = c;
    std::cout << a << ' ' << b << std::endl;
}
