#ifndef CHOO_CHOO_FLAT_HPP
#define CHOO_CHOO_FLAT_HPP

#include "Wagon.hpp"
#include "Cargo.hpp"

class Flat : public Wagon {
    public:
        Flat(double capacity);
        void load(Cargo* list) override;
};

#endif //CHOO_CHOO_FLAT_HPP