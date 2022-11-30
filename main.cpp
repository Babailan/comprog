#include <iostream>
#include <string>

int operate(int a, int b)
{
    return (a * b);
}

float operate(float a, float b)
{
    std::cout << "float";

    return (a / b);
}

void operate(float a, float b, std::string n)
{
    std::cout << n;
}

int main()
{
    float x = 4.4;
    float y = 4.4;
   operate(x,y);
}