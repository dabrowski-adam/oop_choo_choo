#ifndef CHOO_CHOO_FLAT_HPP
#define CHOO_CHOO_FLAT_HPP

#include "Wagon.hpp"
struct Cargo;

class Flat : public Wagon {
    public:
        Flat(double capacity);
        void load(Cargo* list) override;
};

#endif //CHOO_CHOO_FLAT_HPP