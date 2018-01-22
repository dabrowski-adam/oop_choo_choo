#include "Train.hpp"
#include "Wagon.hpp"

Train::Train() : wagons() {}

Train::~Train() {}

void Train::attachWagon(Wagon* wagon) {}

Wagon* Train::getWagon(unsigned int n) {}

unsigned int numberOfWagons() {}

double totalCapacity() {}

void loadWagons(Cargo* list) {}
