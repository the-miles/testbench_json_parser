#include <iostream>

#include "CResistance.hpp"

void volz::Resistance::printDetails()
{
    std::cout << "Print Resistance Details" << std::endl;
    std::cout << "Sequence: " << getSequence() << std::endl;
    std::cout << getType() << std::endl;
    std::cout << getPath() << std::endl;
    std::cout << getLimitMin() << std::endl;
    std::cout << getLimitMax() << std::endl;
    std::cout << getComment() << std::endl;
}
