#include "sealion.h"
#include "animal.h"

Sealion::Sealion() {
   age = 0; // sets age to 0
   cost = 800; // sets cost to 800
   babies = 1; // sets babies to 1
   foodCost = 80; // sets food cost to 80
   revenue = 120; // sets revenue to 120
}

Sealion::Sealion(int new_age, int new_cost, int new_babies, int new_foodCost, int new_revenue) {
   age = new_age; // sets age to new age
   cost = new_cost; // sets cost to new cost
   babies = new_babies; // sets baboes to new babies
   foodCost = new_foodCost; // sets food cost to new food cost
   revenue = new_revenue; // sets revenue to new revenue
}

Sealion::~Sealion() { // destructor


}

