#include "snake.h"
#include "food.h"

namespace snake {
    
    Snake::Snake() : lenght(3), points(0) {}

    Snake::Snake(
        const unsigned int lenght,
        const unsigned int points
    ) : lenght(lenght), points(points) {}

    Snake::~Snake() {}

    unsigned int Snake::getLenght() const { return lenght; }

    unsigned int Snake::getPoints() const { return points; }
    
    void Snake::eat(Food& food) {
        points += food.getValue(); lenght++;
    }
}