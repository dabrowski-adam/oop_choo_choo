#include <boost/test/unit_test.hpp>

#include "Train.hpp"
#include "Open.hpp"
#include "Tank.hpp"
#include "Cargo.hpp"

BOOST_AUTO_TEST_SUITE(ChooChooTest)

BOOST_AUTO_TEST_CASE(ChooChooFirst) {
    Train* choo = new Train();
    choo->attachWagon(new Open(25));
    choo->attachWagon(new Open(30));
    BOOST_CHECK_EQUAL(55, choo->totalCapacity());
}

BOOST_AUTO_TEST_CASE(ChooChooSecond) {
    Cargo* bulk = new Cargo(60, 0, 0, 0, 0);

    Train* choo = new Train();
    choo->attachWagon(new Open(25));
    choo->attachWagon(new Open(30));

    choo->loadWagons(bulk);

    BOOST_CHECK_EQUAL(25, choo->getWagon(0)->getOccupied());
    BOOST_CHECK_EQUAL(30, choo->getWagon(1)->getOccupied());
    BOOST_CHECK_EQUAL(5, bulk->bulk);
}

BOOST_AUTO_TEST_CASE(ChooChooThird) {
    Cargo* noLiquids = new Cargo(25, 30, 0, 0, 0);

    Train* choo = new Train();
    choo->attachWagon(new Tank(55));
    
    choo->loadWagons(noLiquids);

    BOOST_CHECK_EQUAL(25, noLiquids->bulk);
    BOOST_CHECK_EQUAL(30, noLiquids->general);
}

BOOST_AUTO_TEST_SUITE_END()
