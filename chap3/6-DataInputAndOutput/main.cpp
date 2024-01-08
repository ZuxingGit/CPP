#include <iostream>
#include <string>

int main()
{
    // printing data
    /* std::cout << "Hello C++20 " << std::endl;

    int age{21};
    std::cout << "Age: " << age << std::endl;

    std::cerr << "Error message: Something is wrong." << std::endl;
    std::clog << "Log message: Something happend." << std::endl; */

    // get input
    /*
    int age1;
    std::string name;
    std::cout << "Please type ur name and age: " << std::endl;
    std::cin >> name >> age1;
    std::cout << "Hello " << name << ". You r " << age1 << " years old!" << std::endl;
 */

    // data with spaces
    std::string full_name;
    int age3;

    std::cout << "Please type ur name and age: " << std::endl;

    std::getline(std::cin, full_name);
    std::cin >> age3;
    std::cout << "Hello " << full_name
              << ". You r " << age3 << " years old!" << std::endl;

    return 0;
}