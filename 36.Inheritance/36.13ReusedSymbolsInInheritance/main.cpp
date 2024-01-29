#include <iostream>
#include "child.h"

int main()
{
    Child child(33);
    child.print_var(); // call the method in child
    /* call the method in parent, value in parent just contains
     junk or whatever in class initialization we did */
    child.Parent::print_var();

    std::cout << "-------------" << std::endl;
    child.show_values();

    return 0;
}