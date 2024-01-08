#include <iostream>

int addNumbers(int first_number, int second_number)
{
    int result = first_number + second_number;
    return result;
}

int main()
{
    int first_number{3};
    int second_number{7};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(25, 7);
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(25, 33);
    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Sum: " << addNumbers(7261, 8743) << std::endl;

    return 0;
}