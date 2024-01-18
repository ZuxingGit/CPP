#include <iostream>

int max(int a, int b);

int min(int , int );

int inc_mult(int a, int b);

int main()
{
    int x{5};
    int y{12};

    int result = max(x, y);
    std::cout << "max: " << result << std::endl;
    std::cout << "min: " << min(x, y) << std::endl;

    result = inc_mult(x, y);
    std::cout << "result: " << result << std::endl;

    return 0;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int inc_mult(int a, int b)
{
    return ((++a) * (++b));
}