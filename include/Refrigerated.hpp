#ifndef CHOO_CHOO_REFRIGERATED_HPP
#define CHOO_CHOO_REFRIGERATED_HPP

#include "Wagon.hpp"
#include "Cargo.hpp"

class Refrigerated : public Wagon {
    public:
        Refrigerated(double capacity);
        void load(Cargo* list) override;
};

#endif //CHOO_CHOO_REFRIGERATED_HPP