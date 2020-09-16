#include "zoo.h"
#include "sealion.h"
#include "tiger.h"
#include "bear.h"
#include <cstdlib>
Zoo::Zoo() {
   account = 100000;  // starting balance 
   revenue = 0; // starting revenue
   foodCost = 0; // starting food cost

   adultTiger = 0; // starting tigers
   babyTiger = 0; // starting tigers
   adultSealion = 0; // starting sealions
   babySealion = 0; // starting sealions
   adultBear = 0; // starting bears
   babyBear = 0; // starting bears
   
   tigerZoo = 0; // tigers in zoo
   sealionZoo = 0; // sealions in zoo
   bearZoo = 0; // bears in zoo
   
   tiger = new Tiger[tigerZoo]; // allocate memory for tiger
   sealion = new Sealion[sealionZoo]; // allocate memory for sealion
   bear = new Bear[bearZoo]; // allocate memory for bear
}

Zoo::Zoo(const Zoo &oldZoo) {
   account = oldZoo.account; // starting balance 
   revenue = oldZoo.revenue; // starting revenue
   foodCost = oldZoo.foodCost; // starting food cost
   
   adultTiger = oldZoo.adultTiger; // starting tigers
   babyTiger = oldZoo.babyTiger; // starting tigers
   adultSealion = oldZoo.adultSealion; // starting sealions
   babySealion = oldZoo.babySealion; // starting sealions
   adultBear = oldZoo.adultBear; // starting bears
   babyBear = oldZoo.babyBear; // starting bears
   
   tigerZoo = oldZoo.tigerZoo; // tigers in zoo
   sealionZoo = oldZoo.sealionZoo; // sealions in zoo
   bearZoo = oldZoo.bearZoo; // bears in zoo
   
   tiger = new Tiger[tigerZoo]; // allocate memory for tiger
   for (int i = 0; i < tigerZoo; i++) {
      tiger[i] = oldZoo.tiger[i]; // set old array to new array
   }
   sealion = new Sealion[sealionZoo]; // allocate memory for sealion
   for (int i = 0; i < sealionZoo; i++) {
      sealion[i] = oldZoo.sealion[i]; // set old array to new array
   }
   bear = new Bear[bearZoo]; // allocate memory for bear
   for (int i = 0; i < bearZoo; i++) {
      bear[i] = oldZoo.bear[i]; // set old array to new array
   }
}


Zoo& Zoo::operator=(const Zoo &newZoo) {
   if (this == &newZoo) {
      return *this;
   }
   delete [] tiger; // delete old tigers
   delete [] sealion; // delete old sealions
   delete [] bear; // delete old bears
   account = newZoo.account;  // starting balance 
   revenue = newZoo.revenue; // starting revenue
   foodCost = newZoo.foodCost; // starting food cost

   adultTiger = newZoo.adultTiger; // starting tigers
   babyTiger = newZoo.babyTiger; // starting tigers
   adultSealion = newZoo.adultSealion; // starting sealions
   babySealion = newZoo.babySealion; // starting sealions
   adultBear = newZoo.adultBear; // starting bears
   babyBear = newZoo.babyBear; // starting bears
   
   tigerZoo = newZoo.tigerZoo; // tigers in zoo
   sealionZoo = newZoo.sealionZoo; // sealions in zoo
   bearZoo = newZoo.bearZoo; // bears in zoo
   
   tiger = new Tiger[tigerZoo]; // allocate memory for tiger
   for (int i = 0; i < tigerZoo; i++) {
      tiger[i] = newZoo.tiger[i]; // set old array to new array
   }
   sealion = new Sealion[sealionZoo]; // allocate memory for sealion
   for (int i = 0; i < sealionZoo; i++) {
      sealion[i] = newZoo.sealion[i]; // set old array to new array
   }
   bear = new Bear[bearZoo]; // allocate memory for bear
   for (int i = 0; i < bearZoo; i++) {
      bear[i] = newZoo.bear[i]; // set old array to new array
   }
   return *this;
}
   
Zoo::~Zoo() {
   delete [] tiger; // deletes tiger
   delete [] sealion; // deletes sealion 
   delete [] bear; // deletes bear
}

int Zoo::get_startTigerA() {
   return adultTiger; // grab adult tiger
}

int Zoo::get_startSealionA() {
   return adultSealion; // grab adult sealion
}

int Zoo::get_startBearA() {
   return adultBear; // grab adult bear
}

int Zoo::get_startTigerB() {
   return babyTiger; // grab baby tiger
}

int Zoo::get_startSealionB() {
   return babySealion; // grab baby sealion
}

int Zoo::get_startBearB() {
   return babyBear; // grab baby bear
}

int Zoo::get_account() {
   return account; // grab account
}

int Zoo::get_revenue() {
   return revenue; // grab revenue
}

int Zoo::get_tigerZoo() {
   return tigerZoo; // grab tiger zoo
}

int Zoo::get_sealionZoo() {
   return sealionZoo; // grab sealion zoo
}

Tiger* Zoo::get_tiger() {
   return tiger; // grab array of tigers
}

Sealion* Zoo::get_sealion() {
   return sealion; // grab array of sealions
}

Bear* Zoo::get_bear() {
   return bear; // grab array of bears
}

int Zoo::set_startTigerA(int newTiger) {
   adultTiger = newTiger; // sets adult tiger to new tiger
}

int Zoo::set_startSealionA(int newSealion) {
   adultSealion = newSealion; // sets adult sealion to new sealion
}

int Zoo::set_startBearA(int newBear) {
   adultBear = newBear; // sets adult bear ro new bear
}

int Zoo::set_startTigerB(int newTiger) {
   babyTiger = newTiger; // sets baby tiger to new tiger
}

int Zoo::set_startSealionB(int newSealion) {
   babySealion = newSealion; // sets baby sealion to new sealion
}

int Zoo::set_startBearB(int newBear) {
   babyBear = newBear; // sets baby bear to new bear
}

int Zoo::set_account(int newAccount) {
   account = newAccount; // sets account to new account
}

int Zoo::set_revenue(int newRevenue) {
   account = newRevenue; // sets account to new revenue
}

int Zoo::set_tigerZoo(int newZoo) {
   tigerZoo = newZoo; // sets tiger zoo to new tiger zoo
}

int Zoo::set_sealionZoo(int newZoo) {
   sealionZoo = newZoo; // sets sealion ozo to new zoo
}

int Zoo::set_bearZoo(int newZoo) {
   bearZoo = newZoo; // sets bear zoo to new zoo
}

/*************************************************************************
** Function: addBabyTiger
** Description: adds a baby tiger
** Parameters: Tiger new_tiger
** Pre-conditions: requires tiger array to increment
** Post-conditions: holds and adds baby tigers
*************************************************************************/
void Zoo::addBabyTiger(Tiger new_tiger) {
   tiger[babyTiger] = new_tiger; // set tiger array of baby tigers to new tiger
   babyTiger++; // increment baby tiger
   cout << "A baby tiger has been added to your zoo!" << endl;
}

/*************************************************************************
** Function: addAdultTiger
** Description: adds an adult tiger
** Parameters: Tiger new_tiger
** Pre-conditions: requires tiger array to increment
** Post-conditions: holds and adds adult tigers
*************************************************************************/
void Zoo::addAdultTiger(Tiger new_tiger) {
   tiger[adultTiger] = new_tiger;  // set tiger array of adult tigers to new tiger
   adultTiger++; // increment adult tiger
   cout << "An adult tiger has been added to your zoo!" << endl;
}

/*************************************************************************
** Function: addBabySealion
** Description: adds a baby sealion
** Parameters: Sealion new_sealion
** Pre-conditions: requires sealion array to increment
** Post-conditions: holds and adds adult sealion
*************************************************************************/
void Zoo::addBabySealion(Sealion new_sealion) {
   sealion[babySealion] = new_sealion; // set sealion array of baby sealion to new sealion
   babySealion++; // increment baby sealion
   cout << "A baby sealion has been added to your zoo!" << endl;
}

/*************************************************************************
** Function: addAdultSealion
** Description: adds an adult sealion
** Parameters: Sealion new_sealion
** Pre-conditions: requires sealion array to increment
** Post-conditions: holds and adds adult sealion
*************************************************************************/
void Zoo::addAdultSealion(Sealion new_sealion) {
   sealion[adultSealion] = new_sealion;  // set sealion array of adult sealion to new sealion
   adultSealion++; // increment adult sealion
   cout << "An adult sealion has been added to your zoo!" << endl;
}

/*************************************************************************
** Function: addAdultBear
** Description:  adds an adult bear 
** Parameters: Bear new_bear
** Pre-conditions: requires bear array to increment
** Post-conditions: holds and adds adult bear
*************************************************************************/
void Zoo::addAdultBear(Bear new_bear) {
   bear[adultBear] = new_bear; // set bear array of adult bear to new bear
   adultBear++; // increment adult bear
   cout << "A bear has been added to your zoo!" << endl;
}

/*************************************************************************
** Function: addBabyBear
** Description: adds baby bear 
** Parameters: Bear new_bear
** Pre-conditions: requires bear array to increment
** Post-conditions: holds and adds baby bear
*************************************************************************/
void Zoo::addBabyBear(Bear new_bear) {
   bear[babyBear] = new_bear; // set bear array of baby bear to new bear
   babyBear++; // increment baby bear
   cout << "A bear has been added to your zoo!" << endl;
}

void Zoo::removeBabyTiger() {
   babyTiger--; // removes baby tiger
}

void Zoo::removeAdultTiger() {
   adultTiger--; // removes adult tiger
}

void Zoo::removeBabySealion() {
   babySealion--; // removes baby sealion
}

void Zoo::removeAdultSealion() {
   adultSealion--; // removes adult sealion
}

void Zoo::removeAdultBear() {
   adultBear--; // removes adult bear
}

void Zoo::removeBabyBear() {
   babyBear--; // removes baby bear
}

/*************************************************************************
** Function: print_cards
** Description: prints cards
** Parameters:
** Pre-conditions: requires get rank and get suit from card class
** Post-conditions: prints cards
*************************************************************************/
void Zoo::ageTiger() {
   for (int i = 0; i < tigerZoo; i++) { // loops through tigerZoo
      tiger[i].set_age(tiger[i].get_age() + 1); // tiger array looks into 
      						// set_age of a tiger array
						// get_age and increments
   }
}

/*************************************************************************
** Function: print_cards
** Description: prints cards
** Parameters:
** Pre-conditions: requires get rank and get suit from card class
** Post-conditions: prints cards
*************************************************************************/
void Zoo::ageSealion() {
   for (int i = 0; i < sealionZoo; i++) { // loops through sealionZoo
      sealion[i].set_age(sealion[i].get_age() + 1); // sealion array looks into
       						    // set_age of a sealion arrat
						    // get_age and increments
   }
}

/*************************************************************************
** Function: print_cards
** Description: prints cards
** Parameters:
** Pre-conditions: requires get rank and get suit from card class
** Post-conditions: prints cards
*************************************************************************/
void Zoo::ageBear() {
   for (int i = 0; i < bearZoo; i++) { // loops through bearZoo 
      bear[i].set_age(bear[i].get_age() + 1); // bear array looks into 
      					      // set_age of a bear array 
					      // get_age and increments
   }
}

/*************************************************************************
** Function: playGame
** Description: sets the UI of the game
** Parameters: 
** Pre-conditions: variables for each animal and account
** Post-conditions: prints the UI of the game
*************************************************************************/
int Zoo::playGame() {    
   Tiger tigers;
   Sealion sealions;
   Bear bears;
   cout << "Account: $" << get_account() << endl; // prints account  
   cout << "Tiger Adults: " << adultTiger << endl; // prints adult tigers
   cout << "Tiger Babies: " << babyTiger << endl; // prints baby tigers
   cout << "Sealion Adults: " << adultSealion << endl; // prints adult sealions
   cout << "Sealion Babies: " << babySealion << endl; // prints baby sealions
   cout << "Bear Adults: " << adultBear << endl; // prints adult bears
   cout << "Bear Babies: " << babyBear << endl; // prints baby bear
   cout << endl;
}

/*************************************************************************
** Function: sickTiger
** Description: a tiger gets sick 
** Parameters: 
** Pre-conditions: requries account and adult tiger array 
** Post-conditions: subtracts money for treatment and tiger if can't be paid
*************************************************************************/
int Zoo::sickTiger() {
   if (adultTiger > 0) { // if there is more than 1 adult tiger
      cout << "An adult tiger is sick! You must pay $7,500 for treatment." << endl;
      if (account > 7400) { // if there's more than 7400 in the account
	 account = account - 7500; // subtract 7500 from bank
      }
      else if (account < 7400) { // if there's less than 7400 in the account
	 if (adultTiger > 0) { // if there is more than 1 adult tiger
	    account = account - 7500; // subtract 7500 from account
	    cout << "A tiger has died." << endl; 
	    adultTiger--; // removes an adult tiger
	 }
         else {
	    cout << "You have no tigers." << endl;
	 }
      }
   }
   else {
      cout << "You have no tigers." << endl;
   }
}

/*************************************************************************
** Function: sickBabyTiger
** Description: a baby tiger gets sick
** Parameters:
** Pre-conditions: requires account and baby tiger array
** Post-conditions: subtracts money for treatment and tiger if can't be paid
*************************************************************************/
int Zoo::sickBabyTiger() {
   if (babyTiger > 0) { // if there is more than 1 baby tiger 
      cout << "A baby tiger is sick! You must pay $15,000 for treatment." << endl;
      if (account > 14000) { // if there's more than 14000 in the bank
	 account = account - 15000; // subtract 14000 from the bank
      }
      else if (account < 14000) { // if there's less than 14000 in the bank
	 if (babyTiger > 0) { // if there's more than 1 baby tiger
	    account = account - 15000; // subtract 15000 from the bank
	    cout << "A baby tiger has died." << endl; 
	    babyTiger--; // removes a baby tiger
	 }
         else {
	    cout << "You have no baby tigers." << endl;
	 }
      }
   }
   else {
      cout << "You have no baby tigers." << endl;
   }
}

/*************************************************************************
** Function: sickSealion
** Description: a sealion gets sick
** Parameters:
** Pre-conditions: requires account and sealion array
** Post-conditions: substracts money for treatment and sealion if can't
                    be paid
*************************************************************************/
int Zoo::sickSealion() {
   if (sealionZoo > 0) { // if there is more than 1 sealion
      cout << "A sealion is sick! You must pay $400 for treatment." << endl;
      if (account > 300) { // if there is more than 300 in the bank
	 account = account - 400; // subtract 400 from the bank
      }
      else if (account < 300) { // if there is less than 300 in the bank
	 if (sealionZoo > 0) { // if there is more than 1 sealion
	    account = account - 400; // subtract 400 from the bank
	    cout << "A sealion has died." << endl; 
	    sealionZoo--; // removes a sealion
	 }
         else {
	    cout << "You have no sealions." << endl;
	 }
      }
   }
   else {
      cout << "You have no sealions." << endl;
   }
}

/*************************************************************************
** Function: sickBabySealion
** Description: a baby sealion gets sick
** Parameters: 
** Pre-conditions: requires account and baby sealion array
** Post-conditions: substracts money for treatment and baby sealion if can't be 
                    paid for.
*************************************************************************/
int Zoo::sickBabySealion() {
   if (babySealion > 0) { // if there is more than 1 baby sealion
      cout << "A baby sealion is sick! You must pay $800 for treatment." << endl;
      if (account > 700) { // if the account has more than 700 in the bank
	 account = account - 800; // subtract 800 from the bank
      }
      else if (account < 700) { // if there is less than 700 in the bank
	 if (babySealion > 0) { // if there is more than 1 baby sealion
	    account = account - 800; // subtract 800 from the bank
	    cout << "A baby sealion has died." << endl;
	    babySealion--; // removes a baby lion
	 }
         else {
	    cout << "You have no baby sealions." << endl;
	 }
      }
   }
   else {
      cout << "You have no baby sealions." << endl;
   }
}

/*************************************************************************
** Function: sickBear
** Description: a bear gets sick
** Parameters:
** Pre-conditions: requires account and bear array
** Post-conditions: subtracts money for treatment and bear if can't be paid
*************************************************************************/
int Zoo::sickBear() { 
   if (bearZoo > 0) { // if there is more than 1 bear
      cout << "A bear is sick! You must pay $3,000 for treatment." << endl;
      if (account > 2900) { // if there is more than 2900 in the bank
	 account = account - 3000; // subtract 3000 from the bank
      }
      else if (account < 2900) { // if there is less than 2900 in the bank
	 if (bearZoo > 0) { // if there is more than 1 bear in the zoo
	    account = account - 3000; // subtract 3000 from the bank
	    cout << "A bear has died." << endl;
	    bearZoo--; // removes a bear
	 }
	 else {
	    cout << "You have no bears." << endl;
	 }
     }
   }
   else {
      cout << "You have no bears." << endl;
   }
}

/*************************************************************************
** Function: sickBabyBear
** Description: a baby bear gets sick
** Parameters:
** Pre-conditions: requires account and baby bear array
** Post-conditions: subtracts money for treatment and baby bear if can't be paid
*************************************************************************/
int Zoo::sickBabyBear() {
   if (babyBear > 0) { // if there is more than 1 baby bear
      cout << "A baby bear is sick! You must pay $6000 for treatment." << endl;
      if (account > 5900) { // if there is more than 5900 in the bank 
	 account = account - 6000; // subtract 6000 in the bank
      }
      else if (account < 5900) { // if there is less than 5900 in the bank
	 if (babyBear > 0) { // if there is more than 1 baby bear
	    account = account - 6000; // subtract 6000 in the bank
	    cout << "A baby bear has died." << endl;
	    babyBear--; // removes a baby bear
	 }
         else {
	    cout << "You have no baby bears." << endl;
	 }
      }
   }
   else {
      cout << "You have no baby bears." << endl;
   }
}

/*************************************************************************
** Function: sickEvent
** Description: selections between the three animals
** Parameters:
** Pre-conditions: requires three previous sick functions
** Post-conditions: randomly chooses the three choices 
*************************************************************************/
int Zoo::sickEvent() {
   srand(time(NULL));
   int random = rand() % 4; // random between 0 - 3
   if (random == 1) { 
      sickTiger(); // call sickTiger
      sickBabyTiger(); // call sickBabyTiger
   }
   else if (random == 2) {
      sickSealion(); // call sicksealion
      sickBabySealion(); // call sickbabysealion
   }
   else if (random == 3) {
      sickBear(); // call sickbear
      sickBabyBear(); // call sickbabybear
   }
   else {
      cout << "No animals have gotten sick." << endl;
   }
}

/*************************************************************************
** Function: animalBirth()
** Description: an animal gives birth
** Parameters: Tiger babyT, Sealion babyS, Bear babyB
** Pre-conditions: requires array for bear, tiger, and sealion
** Post-conditions: a random animal gives birth
*************************************************************************/

/* I couldn't make this function less than 20 lines. I've already tried to
 * condense it by seperating it the birth of each animal into three, but
 * putting it together takes a lot because of if statements and error handling.*/

int Zoo::animalBirth(Tiger babyT, Sealion babyS, Bear babyB) {
   srand(time(NULL));
   int birth = rand() % 4; // random between 0 - 3
   if (birth == 1) {
      if (adultTiger >= 2) { // there has to be more than 2
	 cout << "A tiger has given birth to 3 babies." << endl;
         addBabyTiger(babyT); 
         addBabyTiger(babyT); // call this function three times
         addBabyTiger(babyT);
	 cout << endl;
      }
      else {
	 cout << "No babies born." << endl;
      }
   }
   else if (birth == 2) {
      if (adultSealion >= 2) { // there has to be 2 or more 
         cout << "A sealion has given birth to a baby." << endl;
         addBabySealion(babyS); // call this function once
	 cout << endl;
      }
      else {
	 cout << "No babies born." << endl;
      }
   }
   else if (birth == 3) {
      if (adultBear >= 2) { // there has to be more than 2 
	 cout << "A bear has given birth to 2 babies ." << endl;
         addBabyBear(babyB);
         addBabyBear(babyB); // call this function twice 
	 cout << endl;
      }
      else {
	 cout << "No babies born." << endl;
      }
   }
   else {
  
   }
}

/*************************************************************************
** Function: zooBoom
** Description: a boom for sealions occur 
** Parameters:
** Pre-conditions: requires an array for sealions and acount
** Post-conditions: sealions create a generate extra revenue 
*************************************************************************/
int Zoo::zooBoom() {
   srand(time(NULL));
   revenue = 0; // reset revenue
   int random = rand() % 150 + 400; // random bonus for sealions
   revenue = revenue + random; // adds random to revenue
   if (adultSealion > 0) { // there has to be more than 1 sealion
      account = account + revenue; // adds revenue to account
      cout << "A boom has occurred in your zoo!" << endl;
      cout << endl;  
      cout << "Received $" << revenue << " as bonus revenue from each sealion." << endl;
      cout << endl;
   }
   else {
      cout << "Not enough sealions for a boom." << endl;
   }
}

int Zoo::zooNothing() {
   cout << "No special event has occurred." << endl;
}

/*************************************************************************
** Function: tigerPay
** Description: collects revenue from adult tigers
** Parameters:
** Pre-conditions: requires account and quantity for adult tigers
** Post-conditions: collects revenue from each adult tigers
*************************************************************************/
void Zoo::tigerPay() {
   revenue = 0; // resets revenue
   revenue = revenue + (1500 * adultTiger); // multiplies revenue by each tiger
   account = account + revenue; // adds revenue to account
   cout << "Earned a total of $" << revenue <<  " from " << adultTiger 
        << " adult tigers" << endl; 
}

/*************************************************************************
** Function: sealionPay
** Description: collects revenue from adult sealions
** Parameters:
** Pre-conditions: requires account and quantity for adult sealions
** Post-conditions: collect revenue from each adult sealions
*************************************************************************/
void Zoo::sealionPay() {
   revenue = 0; // resetes revenue
   revenue = revenue + (120 * adultSealion); // multiplies revenue by each sealion
   account = account + revenue; // adds revenue to account
   cout << "Earned a total of $" << revenue <<  " from " << adultSealion 
        << " adult sealions" << endl; 
}

/*************************************************************************
** Function: bearPay
** Description: collects revenue from adult bears
** Parameters:
** Pre-conditions: requires account and quanity for adult bears
** Post-conditions: collects revenue from each adult bears
*************************************************************************/
void Zoo::bearPay() {
   revenue = 0; // reset revenue
   revenue = revenue + (600 * adultBear); // multiplies revenue by each bear
   account = account + revenue; // adds revenue to account
   cout << "Earned a total of $" << revenue <<  " from " << adultBear 
        << " adult bears" << endl; 
}

/*************************************************************************
** Function: tigerBabyPay 
** Description: collects revenue from baby tigers
** Parameters:
** Pre-conditions: requires account and quantity for baby tiger
** Post-conditions: collects revenue from baby tigers
*************************************************************************/
void Zoo::tigerBabyPay() {
   revenue = 0; // reset revenue 
   revenue = revenue + (3000 * babyTiger); // multiplies revenue by each baby tiger
   account = account + revenue; // adds revenue to account
   cout << "Earned a total of $" << revenue <<  " from " << babyTiger 
        << " baby tigers" << endl; 
}

/*************************************************************************
** Function: sealionBabyPay
** Description: collects revenue from baby sealion
** Parameters: 
** Pre-conditions: requires account and quantity for baby sealions 
** Post-conditions:  collects revenue from baby sealions
**************************************************************************/
void Zoo::sealionBabyPay() {
   revenue = 0; // resets revenue
   revenue = revenue + (240 * babySealion); // multiplies revenue by each baby sealion
   account = account + revenue; // adds revenue to account
   cout << "Earned a total of $" << revenue <<  " from " << babySealion 
        << " baby sealions" << endl; 
}

/*************************************************************************
** Function: bearBabyPay
** Description: collects revenue from baby bear
** Parameters:
** Pre-conditions: requires account and quantity for baby bear
** Post-conditions: prints cards
*************************************************************************/
void Zoo::bearBabyPay() {
   revenue = 0; // resets revenue
   revenue = revenue + (1200 * babyBear); // multiplies revenue by each baby bear
   account = account + revenue; // adds revenue to account 
   cout << "Earned a total of $" << revenue <<  " from " << babyBear 
        << " baby bears" << endl; 
}

/*************************************************************************
** Function: buy_tiger
** Description: buys a tiger
** Parameters:
** Pre-conditions: requires addAdultTiger function and account
** Post-conditions: adds a tiger and pays for the cost
*************************************************************************/
int Zoo::buyTiger() {
   Tiger buyTigers(36, 7500, 3, 400, 1500); // initializes adult tigers 
   addAdultTiger(buyTigers); // calls addAdultTiger
   account = account - buyTigers.get_cost(); // subtracts the cost of tigers
}

/*************************************************************************
** Function: buySealion
** Description: buys a sealion
** Parameters:
** Pre-conditions: requires addAdultSealion function and account
** Post-conditions: adds a sealion and pays for the cost
*************************************************************************/
int Zoo::buySealion() {
   Sealion buySealions(36, 800, 1, 80, 120); // initializes adult sealions
   addAdultSealion(buySealions); // calls addAdultSealion 
   account = account - buySealions.get_cost(); // subtracts the cost of sealions
}

/*************************************************************************
** Function: buyBear
** Description: buys a bear
** Parameters:
** Pre-conditions: requires addAdultBear function and account
** Post-conditions: adds a bear and pays for the cost
*************************************************************************/
int Zoo::buyBear() {
   Bear buyBears(36, 6000, 2, 240, 600); // initializes adult bears
   addAdultBear(buyBears); // calls addAdultBear
   account = account - buyBears.get_cost(); // subtractst the cost of bears
}

/*************************************************************************
** Function: buyAnimal
** Description: selection between the three choices
** Parameters:
** Pre-conditions: requires three functions of buying each animal
** Post-conditions: random choice between the three animals
*************************************************************************/

/* I couldn't find another way to reduce this function into less than 20
 * lines because I've already tried to condense it with seperating the 
 * buying functions into three functins. And most of the lines taking up
 * the functions for UI design.*/

int Zoo::buyAnimal() {
   int choice, buy, amount;
   cout << endl;
   cout << "Do you want to buy any animals?" << endl;
   cout << "Press (1) - YES | Press (2) - NO" << endl;
   cin >> choice;
   if (choice == 1) { // if choice is 1
      cout << "Which animal do you want to buy?" << endl;
      cout << "(1) Tigers" << endl;
      cout << "(2) Sealions" << endl;
      cout << "(3) Bears" << endl;
      cin >> buy;  
      if (buy == 1) { // if choice is 1 
	 cout << "How many tigers do you want to buy?" << endl;
	 cin >> amount; 
	 if (amount == 1) { // if amount is 1
	    buyTiger(); // call buyTiger
	 }
	 else if (amount == 2) { // if amount is 2
	    buyTiger(); // call buyTiger twice
	    buyTiger();
	 }
	 else {
	    cout << "You did not buy any tigers." << endl;
	 }
      }
      else if (buy == 2) { // if buy is 2
	 cout << "How many sealions do you want to buy?" << endl;
	 cin >> amount;
	 if (amount == 1) { // if amount is 1
	    buySealion(); // call buySealion
	 }
	 else if (amount == 2) { // if amount is 2
	    buySealion(); // call buySealion twice
	    buySealion();
	 }
	 else {
	    cout << "You did not buy any sealions." << endl;
	 }
      }
      else if (buy == 3) { // if buy is 3
	 cout << "How many bears do you want to buy?" << endl;
	 cin >> amount;
	 if (amount == 1) { // if amount is 1
	    buyBear(); // call buyBear
	 }
	 else if (amount == 2) { // if amount is 2
	    buyBear(); // call buyBear twice
	    buyBear();
	 }
	 else {
	    cout << "You did not buy any bears." << endl;
	 }
      }
   }
   else {
      cout << "No animals have been bought." << endl;
   }
}

/*************************************************************************
** Function: tigerCost
** Description: pays for the food cost for tigers
** Parameters:
** Pre-conditions: requires food cost for baby and adult tigers
** Post-conditions: pays for the food cost for tigers
*************************************************************************/
int Zoo::tigerCost() {
   foodCost = 0; // resets food cost
   foodCost = foodCost + (400*(adultTiger + babyTiger)); // multiplies 400 by each adult and baby tiger
   cout << "Paid a total of $" << foodCost <<  " for your tigers." << endl; 
}

/*************************************************************************
** Function: sealionCost
** Description: pays for the food cost for sealions
** Parameters:
** Pre-conditions: requires food cost for baby and adult sealions
** Post-conditions: pays for the food cost for sealions
*************************************************************************/
int Zoo::sealionCost() {
   foodCost = 0; // resets food cost
   foodCost = foodCost + (80*(adultSealion + babySealion)); // multiplies 80 by each adult and baby sealion
   cout << "Paid a total of $" << foodCost <<  " for your sealions." << endl; 
}

/*************************************************************************
** Function: bearCost
** Description: pays for the food cost for bears
** Parameters:
** Pre-conditions: requires food cost for baby and adult bears
** Post-conditions: pays for the food cost for bears
*************************************************************************/
int Zoo::bearCost() {
   foodCost = 0; // resets food cost
   foodCost = foodCost + (240*(adultBear + babyBear)); // multiplies 240 by each adult and baby bear
   cout << "Paid a total of $" << foodCost <<  " for your bears." << endl; 
}

int Zoo::gameEnd() {
   cout << "You're out of cash! Game Over." << endl;
}
