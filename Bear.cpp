#include "animal.h"
#include "bear.h"
using namespace std;

Bear::Bear() {
   age = 0; // sets age to 0
   cost = 6000; // sets cost to 6000
   babies = 2; // sets babies to 2
   foodCost = 240; // sets food cost to 240
   revenue = 600; // sets revenue to 600
}

Bear::Bear(int new_age, int new_cost, int new_babies, int new_foodCost, int new_revenue) { //: Animal (new_age, new_cost, new_babies, new_foodCost, new_revenue) {
   age = new_age; // sets age to new age
   cost = new_cost; // sets cost to new cost
   babies = new_babies; // sets babies to new babies
   foodCost = new_foodCost; // sets food cost to new food cost
   revenue = new_revenue; // sets revenue to new revenue
}

Bear::~Bear() { // destructor
