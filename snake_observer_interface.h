#ifndef SNAKE_OBSERVER_INTERFACE
#define SNAKE_OBSERVER_INTERFACE

namespace snake {

    class Snake;

    class SnakeObserverInterface {
    public:
        ~SnakeObserverInterface() = default;
        virtual void notify(Snake& snake) = 0;
    };
}

#endif