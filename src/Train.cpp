#include "Train.hpp"
#include "Wagon.hpp"

Train::Train() : wagons() {}

Train::~Train() {
    for (auto it = this->wagons.begin(); it != this->wagons.end(); ++it) {
        delete (*it);
    }
}

void Train::attachWagon(Wagon* wagon) {
    this->wagons.push_back(wagon);
}

Wagon* Train::getWagon(unsigned int n) {}

unsigned int numberOfWagons() {}

double totalCapacity() {}

void loadWagons(Cargo* list) {}
