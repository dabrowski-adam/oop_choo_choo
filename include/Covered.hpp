#ifndef CHOO_CHOO_COVERED_HPP
#define CHOO_CHOO_COVERED_HPP

#include "Wagon.hpp"
struct Cargo;

class Covered : public Wagon {
    public:
        Covered(double capacity);
        void load(Cargo* list) override;
};

#endif //CHOO_CHOO_COVERED_HPP