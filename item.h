#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "food.h"

namespace snake {

    class Item : public Food {
    private:
        std::string name;
    public:
        Item(const unsigned int value, const std::string name);
        const std::string getName() const;
    };
}

#endif