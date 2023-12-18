#ifndef SNAKE_H
#define SNAKE_H

#include "snake_observer_interface.h"
#include "snake_visitor_interface.h"

namespace snake {

    class Food;

    class Snake {
    private:
        unsigned int lenght;
        unsigned int points;
    public:
        Snake();
        Snake(
            const unsigned int lenght, 
            const unsigned int points
        );
        unsigned int getLenght() const;
        unsigned int getPoints() const;
        void eat(Food& food);
    };
}

#endif