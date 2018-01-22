#include "Open.hpp"
#include "Wagon.hpp"

Open::Open(double capacity) : Wagon(capacity) {}

void Open::load(Cargo* list) {
    this->performLoad(list->bulk);
}