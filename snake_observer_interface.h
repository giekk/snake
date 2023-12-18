#ifndef SNAKE_OBSERVER_INTERFACE_H
#define SNAKE_OBSERVER_INTERFACE_H

namespace snake {

class Snake;

class SnakeObserverInterface {
    public:
        virtual ~SnakeObserverInterface();
        virtual void notify(Snake& snake) = 0;
};

}

#endif // SNAKE_OBSERVER_INTERFACE_H
