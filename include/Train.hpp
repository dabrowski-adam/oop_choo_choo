#ifndef CHOO_CHOO_TRAIN_HPP
#define CHOO_CHOO_TRAIN_HPP

#include <vector>
class Wagon;
struct Cargo;

class Train {
    private:
        std::vector<Wagon*> wagons; 
    public:
        Train();
        ~Train();
        void attachWagon(Wagon* wagon);
        Wagon* getWagon(unsigned int n);
        unsigned int numberOfWagons();
        double totalCapacity();
        void loadWagons(Cargo* list);

};

#endif //CHOO_CHOO_TRAIN_HPP