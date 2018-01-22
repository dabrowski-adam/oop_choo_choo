#ifndef CHOO_CHOO_TANK_HPP
#define CHOO_CHOO_TANK_HPP

#include "Wagon.hpp"
struct Cargo;

class Tank : public Wagon {
    public:
        Tank(double capacity);
        void load(Cargo* list) override;
};

#endif //CHOO_CHOO_TANK_HPP