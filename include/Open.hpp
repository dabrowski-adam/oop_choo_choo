#ifndef CHOO_CHOO_OPEN_HPP
#define CHOO_CHOO_OPEN_HPP

#include "Wagon.hpp"
struct Cargo;

class Open : public Wagon {
    public:
        Open(double capacity);
        void load(Cargo* list) override;
};

#endif //CHOO_CHOO_OPEN_HPP