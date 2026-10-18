#include <iostream>
#include <cmath>

unsigned int CalculateCircleAreaInTriangle(float triangleLeg, float triangleBase){
    const float PI = 3.14;
    return floor( PI * (pow(triangleBase,2)/4) * ((2 * triangleLeg - triangleBase)/(2 * triangleLeg + triangleBase)) );
}
int main()
{
    float triangleLeg, triangleBase;
    std::cout << "Please Enter The sides of the triangle to calculate Circle Area!\n"
        << "Triangle Legs: "; std::cin >> triangleLeg;
    std::cout << "Triangle Base: "; std::cin >> triangleBase;

	std::cout << "The Area of the Circle Inscribed in the Isosceles Triangle is: " << CalculateCircleAreaInTriangle(triangleLeg, triangleBase) << std::endl;
}