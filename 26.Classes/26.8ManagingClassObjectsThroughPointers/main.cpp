#include <iostream>
#include "cylinder.h"

int main()
{
    Cylinder cylinder1(10, 10); //on stack

    Cylinder *p_cylinder1 = &cylinder1;
    // std::cout << "volume : " << (*p_cylinder1).volume() << std::endl;
    std::cout << "volume(cylinder1): " << p_cylinder1->volume() << std::endl;

    Cylinder* p_cylinder2 = new  Cylinder(100, 2); //on heap
    std::cout << "volume(cylinder2): " << p_cylinder2->volume() << std::endl;
    std::cout << "base_rad(cylinder2): " << p_cylinder2->get_base_radius() << std::endl;

    delete p_cylinder2;
    return 0;
}