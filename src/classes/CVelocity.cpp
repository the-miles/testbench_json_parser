#include <iostream>

#include "CVelocity.hpp"

void volz::Velocity::printDetails()
{
    std::cout << "Print Velocity Details" << std::endl;
    std::cout << getType() << std::endl;
    std::cout << getStartPos() << std::endl;
    std::cout << getEndPos() << std::endl;
    std::cout << getLimitMin() << std::endl;
    std::cout << getLimitMax() << std::endl;
}
