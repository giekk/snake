#ifndef FOOD_H
#define FOOD_H

#include "food_observer_interface.h"
#include "food_visitor_interface.h"

namespace snake {

    class Food {
    private:
        unsigned int value;
    public:
        Food();
        virtual ~Food();
        unsigned int getValue() const;
    };
}

#endif