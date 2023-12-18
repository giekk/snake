#ifndef INFO_H
#define INFO_H

#include <QWidget>
#include <QLabel>
#include "../snake.h"
#include "../snake_observer_interface.h"

namespace Snake {
    namespace View {

        class Info : public QWidget, public SnakeObserverInterface {
            Q_OBJECT
        private:
            Snake& snake;
            QLabel* lenght_label;
            QLabel* points_label;
        public:
            Info(Snake& snake, QWidget* parent = 0);
            void notify(Snake& snake) override;
        };
    }
}

#endif