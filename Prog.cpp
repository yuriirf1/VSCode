#include <iostream>
#include <cmath>
double perimeterOfSquare(double);                    // prototype of function Begin1
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
double sumAbs(double, double);                       // begin11_1
double differenceAbs(double, double);                // begin11_2
double multipleAbs(double, double);                  // begin11_3
double divideAbs(double, double);                    // begin11_4
double hypotenuse(double, double);                   // begin12_1
double perimeter(double, double);                    // begin12_2
void swap(double &, double &);
double squareRing(double, double);                          // begin13var1
double squareRing2(double, double);                         // begin13var2
double radius(double);                                      // begin14_1
double areaCircle2(double);                                 // begin14_2
double diameter(double);                                    // begin15_1
double circumference3(double);                              // begin15_2
double distance(double, double);                            // begin16var1
double distance16(double, double);                          // begin16var2
double length(double, double);                              // begin17_1
double sumABC(double, double, double);                      // begin17_2
double multipleACB(double, double, double);                 // begin18
void minSwap(double &, double &);                           // begin19_0
bool equalSign(double, double);                             // begin19_1
double perimeterRectangle0(double, double, double, double); // begin19_2v0
double perimeterRectangle(double, double, double, double);  // begin19_2v1
double areaRectangle(double, double, double, double);       // begin19_3
void swapMinMax(double, double);                            // if task 9
int main()
{
    std::cout << perimeterRectangle(-1, -1, 3, 3) << std::endl
              << perimeterRectangle(-1, 1, 3, -3) << std::endl
              << perimeterRectangle(1, -1, -3, 3) << std::endl
              << perimeterRectangle(3, 3, -1, -1) << std::endl
              << perimeterRectangle(-3, -3, 1, 1) << std::endl
              << perimeterRectangle(-3, 3, 1, -1) << std::endl
              << areaRectangle(0, 0, -4, -4) << std::endl
              << areaRectangle(-1, -1, 3, 3) << std::endl
              << areaRectangle(-1, 1, 3, -3) << std::endl
              << areaRectangle(1, -1, -3, 3) << std::endl
              << areaRectangle(3, 3, -1, -1) << std::endl
              << areaRectangle(-3, -3, 1, 1) << std::endl
              << areaRectangle(-3, 3, 1, -1) << std::endl
              << areaRectangle(0, 0, -4, -4) << std::endl;
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
double circumference2(double radius) // begin7_1
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
void swap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}
double squareRing(double radius1, double radius2) // begin13var1
{
    if (radius1 < radius2)
    {
        swap(radius1, radius2);
    }
    return areaCircle(radius1) - areaCircle(radius2);
}
double squareRing2(double radius1, double radius2) // begin13var2
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
double diameter(double area) // begin15_1
{
    const double Pi = 3.1415;
    return 2 * std::sqrt(area / Pi);
}
double circumference3(double area) // begin15_2
{
    const double Pi = 3.1415;
    return Pi * diameter(area);
}
double distance(double point1, double point2) // begin16var1
{
    if (point2 < point1)
    {
        swap(point1, point2);
    }
    return fabs(point2 - point1);
}
double distance16(double point1, double point2) // begin16var2
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
double multipleACB(double pointA, double pointB, double pointC) // begin18
{
    return length(pointA, pointC) * length(pointC, pointB);
}
void minSwap(double &value1, double &value2) // begin19_0
{
    if (value1 < value2)
    {
        swap(value1, value2);
    }
}
bool equalSign(double value1, double value2) // begin19_1
{
    // return (value1 * value2) < 0 ? false : true;
    return !((value1 * value2) < 0);
}
double perimeterRectangle0(double pointX1, double pointY1, double pointX2, double pointY2) // begin19_2v0
{
    double width;
    minSwap(pointX1, pointX2);
    if (equalSign(pointX1, pointX2))
    {
        width = fabs(fabs(pointX1) - fabs(pointX2));
    }
    else
    {
        width = fabs(pointX1) + fabs(pointX2);
    }
    double height;
    minSwap(pointY1, pointY2);
    if (equalSign(pointY1, pointY2))
    {
        height = fabs(fabs(pointY1) - fabs(pointY2));
    }
    else
    {
        height = fabs(pointY1) + fabs(pointY2);
    }
    return 2 * (width + height);
}
double perimeterRectangle(double pointX1, double pointY1, double pointX2, double pointY2) // begin19_2v1
{
    minSwap(pointX1, pointX2);
    minSwap(pointY1, pointY2);
    return 2 * ((equalSign(pointX1, pointX2) ? fabs(fabs(pointX1) - fabs(pointX2)) : fabs(pointX1) + fabs(pointX2)) + (equalSign(pointY1, pointY2) ? fabs(fabs(pointY1) - fabs(pointY2)) : fabs(pointY1) + fabs(pointY2)));
}
double areaRectangle(double pointX1, double pointY1, double pointX2, double pointY2) // begin19_3
{
    minSwap(pointX1, pointX2);
    minSwap(pointY1, pointY2);
    return (equalSign(pointX1, pointX2) ? fabs(fabs(pointX1) - fabs(pointX2)) : fabs(pointX1) + fabs(pointX2)) * (equalSign(pointY1, pointY2) ? fabs(fabs(pointY1) - fabs(pointY2)) : fabs(pointY1) + fabs(pointY2));
}
double distance0(double pointX1, double pointY1, double pointX2, double pointY2) // begin20v1
{//не безопасно, надо как в begin19_2v1 
    return std::sqrt(std::pow(pointX2 - pointX1, 2) + std::pow(pointY2 - pointY1, 2));
}
double distance(double pointX1, double pointY1, double pointX2, double pointY2) // begin20v2
{
    minSwap(pointX1, pointX2);
    minSwap(pointY1, pointY2);////////////////////////////////////////////////////////////////
    return std::sqrt(std::pow(pointX2 - pointX1, 2) + std::pow(pointY2 - pointY1, 2));
}
double trianglePerimeter(double pointX1, double pointY1, double pointX2, double pointY2, double pointX3, double pointY3) // begin21p1
{
    return distance(pointX1, pointY1, pointX2, pointY2) + distance(pointX1, pointY1, pointX3, pointY3) + distance(pointX2, pointY2, pointX3, pointY3);
}
double triangleSquare(double pointX1, double pointY1, double pointX2, double pointY2, double pointX3, double pointY3) // begin21p2
{
    double semiPerimeter = trianglePerimeter(pointX1, pointY1, pointX2, pointY2, pointX3, pointY3)/2;
    return std::sqrt(semiPerimeter * (semiPerimeter - distance(pointX1, pointY1, pointX2, pointY2)) * (semiPerimeter - distance(pointX1, pointY1, pointX3, pointY3)) * (semiPerimeter - distance(pointX2, pointY2, pointX3, pointY3)));
}
void swap(double& valueA, double& valueB) // begin22
{
    double valueC = valueA;
    valueA = valueB;
    valueB = valueC;
}
void swap(double& valueA, double& valueB, double& valueC) // begin23v1
{
    double valueX = valueB;
    valueB = valueA;
    valueA = valueC;
    valueC = valueX;
}
void swap(double& valueA, double& valueB, double& valueC) // begin23v2
{
    swap(valueA, valueB);
    swap(valueA, valueC);//эти 2 строки дадут аналогичный требуемому в задании результат
}
void swap0(double& valueA, double& valueB, double& valueC) // begin24v1
{
    double valueX = valueC;
    valueC = valueA;
    double valueY = valueB;
    valueB = valueX;
    valueA = valueY;
}
void swap0(double& valueA, double& valueB, double& valueC) // begin24v2
{
    swap(valueA, valueB);
    swap(valueB, valueC);//эти 2 строки дадут аналогичный требуемому в задании результат

}
void swapMinMax(double a, double b) // if task 9//// Даны две переменные вещественного типа a и b. Перераспределить значения данных переменных так чтобы в A оказалось меньшее из значений, а в b - большее
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
void swapMinMax0(double& a, double& b) // if task 9//// Даны две переменные вещественного типа a и b. Перераспределить значения данных переменных так чтобы в A оказалось меньшее из значений, а в b - большее
{//с использованием ссылок обменяет оригиналы значений в main`e
    if (a < b)
    {
        return;
    }
    double c = a;
    a = b;
    b = c;
    std::cout << a << ' ' << b << std::endl;
}
