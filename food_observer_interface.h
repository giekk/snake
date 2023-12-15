#ifndef FOOD_OBSERVER_INTERFACE_H
#define FOOD_OBSERVER_INTERFACE_H

namespace snake {

    class Food;

    class FoodObserverInterface {
    public:
        ~FoodObserverInterface() = default;
        virtual void notify(Food& food) = 0;
    };
}

#endif