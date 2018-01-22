#include "Wagon.hpp"
#include <stdexcept>
#include <iostream>

Wagon::Wagon(double capacity) : capacity(capacity), occupied(0) {};

double Wagon::getCapacity() { return this->capacity; }

double Wagon::getOccupied() { return this->occupied; }

void Wagon::performLoad(double& goods) {
    double space = this->capacity - this->occupied;
    double portion = std::min(space, goods);
    try {
        this->occupy(portion);
        goods -= portion; // Won't be reduced if occupy() throws
    } catch(std::overflow_error& e) {
        // Fail silently ¯\_(ツ)_/¯
    }
}

void Wagon::occupy(double portion) {
    if (portion > (this->capacity - this->occupied)) {
        throw std::overflow_error("Not enough space in wagon.");
    } else {
        this->occupied += portion;
    }
}