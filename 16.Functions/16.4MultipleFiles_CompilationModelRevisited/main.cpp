#include <iostream>
#include "compare.h"
#include "operations.h"

int main()
{
    int maximum = max(322, 33);
    std::cout << "max: " << maximum << std::endl;

    int minium = min(32, 432);
    std::cout << "min: " << minium << std::endl;

    int result = incr_mult(9,2);
    std::cout << "result: " << result << std::endl;

    return 0;
}

