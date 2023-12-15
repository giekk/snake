#ifndef FOOD_VISITOR_INTERFACE_H
#define FOOD_VISITOR_INTERFACE_H

namespace snake {

    class Item;

    class FoodVisitorInterface {
    public:
        ~FoodVisitorInterface() = default;
        virtual void visitItem(Item& item);
    };
}

#endif