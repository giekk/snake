#include "food.h"

namespace snake {

    Food::Food() : value(10) {}

    Food::~Food() {}

    unsigned int Food::getValue() const { return value; }

}