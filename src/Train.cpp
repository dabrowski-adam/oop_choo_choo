#include "Train.hpp"
#include "Wagon.hpp"
#include <stdexcept>
#include <numeric>

Train::Train() : wagons() {}

Train::~Train() {
    for (auto it = this->wagons.begin(); it != this->wagons.end(); ++it) {
        delete (*it);
    }
}

void Train::attachWagon(Wagon* wagon) {
    this->wagons.push_back(wagon);
}

Wagon* Train::getWagon(unsigned int n) {
    try {
        return this->wagons.at(n);
    } catch (std::out_of_range& e) {
        return NULL;
    }
}

unsigned int Train::numberOfWagons() {
    return this->wagons.size();
}

double Train::totalCapacity() {
    return std::accumulate(
        this->wagons.begin(),
        this->wagons.end(),
        0,
        [](double init, Wagon* el) -> double { 
            return init + el->getCapacity();
        });
}

void Train::loadWagons(Cargo* list) {}
