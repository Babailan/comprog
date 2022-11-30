#include <iostream>
#include <string>
#include <cstring>

void y();
void calculate(std::string expression, std::string *splitter, int l);
void check(std::string expression);
float whatthefuck(float x, float y, char operators);

void check(std::string expression)
{
    // -> l , the size of expression
    int l = expression.size();
    std::string splitter[l] = {};
    for (int i = 0; i < l; i++)
    {
        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '/' || expression[i] == '*')
        {
            splitter[i] = "i";
        }
        else
        {
            splitter[i] = expression[i];
        }
    }
    calculate(expression, splitter, l);
}

void y()
{
    std::string expression = "53+32-32-6";
    check(expression);
    system("pause");
}

void calculate(std::string expression, std::string *splitter, int l)
{
    // "53+32-32"
    int w = 0;
    char operators = '2';
    std::string x = "";
    std::string y = "";
    for (int i = 0; i < l; i++)
    {
        if (splitter[i] == "i")
        {
            w++;
            operators = expression[i];
            if (w == 2)
            {
                x = std::to_string(whatthefuck(std::stof(x), std::stof(y), operators));
                y = "";
                w = 1;
            }
            continue;
        }
        if (w == 0)
        {
            x.append(splitter[i]);
        }
        if (w == 1)
        {
            y.append(splitter[i]);
        }
        if (w == 1 && i == (l - 1))
        {
            x = std::to_string(whatthefuck(std::stof(x), std::stof(y), operators));
        }
    }
}

float whatthefuck(float x, float y, char operators)
{
    switch (operators)
    {
    case '+':
        return x + y;
        ;
    case '-':

        return x - y;
    case '/':
        return x / y;
    case '*':
        return x * y;
    default:
        return 0;
    }
}
