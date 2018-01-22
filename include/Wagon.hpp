#ifndef CHOO_CHOO_WAGON_HPP
#define CHOO_CHOO_WAGON_HPP

struct Cargo;

class Wagon {
    private:
        double capacity;
        double occupied;
    public:
        Wagon(double capacity);
        double getCapacity();
        double getOccupied();
        virtual void load(Cargo* list) = 0;
        void performLoad(double& goods);
        void occupy(double portion);
};

#endif //CHOO_CHOO_WAGON_HPP