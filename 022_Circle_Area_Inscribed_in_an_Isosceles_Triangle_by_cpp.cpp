#include <iostream>
#include <cmath>

int main()
{
    const float PI = 3.14;
    float triangleLeg, triangleBase;
    std::cout << "Please Enter The sides of the triangle to calculate Circle Area!\n"
        << "Triangle Legs: "; std::cin >> triangleLeg;
    std::cout << "Triangle Base: "; std::cin >> triangleBase;

    unsigned int Area = floor( PI * (pow(triangleBase,2)/4) * ((2 * triangleLeg - triangleBase)/(2 * triangleLeg + triangleBase)) );
	std::cout << "The Area of the Circle Inscribed in the Isosceles Triangle is: " << Area << std::endl;
}