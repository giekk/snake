#ifndef SNAKE_VISITOR_INTERFACE
#define SNAKE_VISITOR_INTERFACE

namespace snake {

    class SnakeVisitorInterface {
    public:
        ~SnakeVisitorInterface() = default;
        virtual void visitSnake() = 0;
    };
}

#endif