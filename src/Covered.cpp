#include "Covered.hpp"
#include "Wagon.hpp"

Covered::Covered(double capacity) : Wagon(capacity) {}

void Covered::load(Cargo* list) {
    this->performLoad(list->general);
}