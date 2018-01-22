#include "Wagon.hpp"

Wagon::Wagon(double capacity) : capacity(capacity), occupied(0) {};

double Wagon::getCapacity() { return this->capacity; }

double Wagon::getOccupied() { return this->occupied; }

void performLoad(double& goods) {}

void occupy(double portion) {}