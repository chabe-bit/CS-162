#include <iostream>
#include "animal.h"
#include "tiger.h"
using namespace std;

Tiger::Tiger() {
   age = 0; // sets age to 0
   cost = 15000; // sets cost to 1500
   babies = 3; // sets babies to 3 
   foodCost = 400; // sets food cost to 400
   revenue = 1500; // sets revenue to 1500
}

Tiger::Tiger(int new_age, int new_cost, int new_babies, int new_foodCost, int new_revenue) {
   age = new_age; // sets age to new age
   cost = new_cost; // sets cost to new cost
   babies = new_babies; // sets babies to new babies
   foodCost = new_foodCost; // sets food cost to new food cost
   revenue = new_revenue; // sets revenue to new revenue
}

Tiger::~Tiger() {  // destructor

}

