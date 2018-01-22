#ifndef CHOO_CHOO_CARGO_HPP
#define CHOO_CHOO_CARGO_HPP

struct Cargo {
    double bulk;       // Open
    double general;    // Covered
    double perishable; // Refrigerated
    double units;      // Flat
    double liquids;    // Tanks

    Cargo(double b, double g, double p, double u, double l) 
        : bulk(b), general(g), perishable(p), units(u), liquids(l) {}
};

#endif //CHOO_CHOO_CARGO_HPP