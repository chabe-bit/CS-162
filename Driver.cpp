/*************************************************************************
** Program: program3.cpp 
** Author: Benjamin Cha
** Date: 5/10/2020
** Description: Zoo Tycoon
** Input: 1 or 0
** Output: Buy animals, pay for food cost, give birth to animals, 
           and, sealions booms, 
*************************************************************************/
#include <iostream>
#include <cstdlib>
#include "animal.h"
#include "tiger.h"
#include "sealion.h"
#include "bear.h"
#include "zoo.h"
using namespace std;

int main () {
   Tiger tiger;
   Sealion sealion;
   Bear bear;
   Animal animal;
   Zoo zoo;
   int playGame = 1; // continues game
   cout << "Welcome to Zoo Tycoon!" << endl;
   cout << "Press (1) to play: " << endl;
   cout << "Press (0) to quit: " << endl;
   cin >> playGame;
   do {
      cout << endl;
      if (playGame == 1) {
         srand(time(NULL));
	 int random = rand() % 4; // random selection between 0 - 3
	 zoo.playGame(); // calls playGame
	 if (random == 1) {
	    zoo.sickEvent(); // calls sickEvent
	 }
	 else if (random == 2) {
	    zoo.animalBirth(tiger,sealion,bear); // calls animalBirth
	 }
	 else if (random == 3) {
	    zoo.zooBoom(); // calls zooBoom
	 }
	 else {
	    zoo.zooNothing(); // calls zooNothing
	 }
         zoo.tigerPay(); // looks into zoo for tigerPay
         zoo.sealionPay(); // looks into zoo for sealionpay
         zoo.bearPay(); // looks into zoo for bearPay
         zoo.tigerBabyPay(); // looks into zoo for babyTigerPay
         zoo.sealionBabyPay(); // looks into zoo for babySealionPay
         zoo.bearBabyPay(); // looks into zoo for bearBabyPay
	 zoo.buyAnimal(); // looks into zoo for buyAnimal
	 zoo.tigerCost(); // looks into zoo for tigerCost
	 zoo.sealionCost(); // looks into zoo for sealionCost
	 zoo.bearCost(); // looks into zoo for bearCost
      }
      else {
	 return 0;
      }
      if (zoo.get_account() <= 0) {
	 zoo.gameEnd(); // calles gameEnd
	 return 0;
      }
      cout << endl;
      cout << "Press (1) to continue: " << endl;
      cout << "Press (2) to quit: " << endl;
      cin >> playGame;
   } while (playGame == 1); // continues game
   
}
