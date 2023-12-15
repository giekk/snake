#include "item.h"

namespace snake {

    Item::Item(const std::string name, const unsigned int value) :
        name(name), Food::Food(value) {}
    
    const std::string getName() const { return name; }

    
}