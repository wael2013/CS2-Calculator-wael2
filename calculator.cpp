#include "calculator.h"
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <exception>
#include <stdexcept>
namespace
{
    bool random_seed = false;
    void init_random_seed()
    {
        if (!random_seed)
        {
            srand(time(0));
            random_seed = true;
        }
    }
}
double add(double x, double y)
{
    return x + y;
}
double subtract(double x, double y)
{
    return x - y;
}
double multiply(double x, double y)
{
    return x * y;
}
double divide(double x, double y)
{
    if (y != 0)
        return x / y;
    else
        throw std::invalid_argument("Division by zero");
}
int factorial(int n)
{
    int result = 1;
    if (n < 0)
    {
        throw std::invalid_argument("factiorial number must be a positive integer");
    }
    else if (n == 1 || n == 1)
    {
        return 1;
    }
    return result * factorial(n - 1);
}
int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}
int gcd(int x, int y)
{
    int result = min(x, y);
    while (result > 0)
    {
        if ((x % result == 0) && (y % result == 0))
        {
            break;
        }
        result--;
    }
    return result;
}

int lcm(int x, int y)
{
    int result=(x*y)/gcd(x, y);
    return result;
}
int randomInRange(int min, int max)
{
    int result;
    result=rand()%min+(max-min  + 1);
}
int featureFunction()
{
    return 0;
}