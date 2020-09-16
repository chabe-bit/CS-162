#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
class Animal {
   private:
   public:
      Animal();
      Animal(int,int,int,int,int);
      ~Animal();
      int get_age();	      
      int get_cost();
      int get_babies();
      int get_foodCost();
      int get_revenue();
      int set_age(int);
      int set_cost(int);
      int set_babies(int);
      int set_foodCost(int);
      int set_revenue(int);
   protected:
      int age;
      int cost;
      int babies;
      int foodCost;
      int revenue;
};
#endif 
