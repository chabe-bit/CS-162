#include "animal.h"

Animal::Animal() {
   
}

Animal::Animal(int,int,int,int,int) {

}

Animal::~Animal() {

}

int Animal::get_age() {
   return age;
}
 
int Animal::get_cost() {
   return cost;
}

int Animal::get_babies() {
   return babies;
}

int Animal::get_foodCost() {
   return foodCost;
}

int Animal::get_revenue() {
   return revenue;
}

int Animal::set_age(int new_age) {
   age = new_age;
}

int Animal::set_cost(int new_cost) {
   cost = new_cost;
}

int Animal::set_babies(int new_babies) {
   babies = new_babies;
}

int Animal::set_foodCost(int new_foodCost) {
   foodCost = new_foodCost;
}

int Animal::set_revenue(int new_revenue) {
   revenue = new_revenue;
}


