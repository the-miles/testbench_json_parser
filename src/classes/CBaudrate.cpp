#include <iostream>

#include "CBaudrate.hpp"

void volz::Baudrate::printDetails()
{
    std::cout << "Print Baudrate Details" << std::endl;
    std::cout << "Sequence: " << getSequence() << std::endl;
    std::cout << getType() << std::endl;
    std::cout << getLimitMin() << std::endl;
    std::cout << getLimitMax() << std::endl;
    std::cout << getValue() << std::endl;
    std::cout << getComment() << std::endl;
}
