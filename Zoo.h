#ifndef ZOO_H
#define ZOO_H
#include "sealion.h"
#include "tiger.h"
#include "bear.h"

class Zoo {
   private: 
      Tiger* tiger;
      Sealion* sealion;
      Bear* bear;
      int adultTiger;
      int babyTiger;
      int adultSealion;
      int babySealion;
      int adultBear;
      int babyBear;
      int account;
      int revenue;
      int foodCost;
      int tigerZoo;
      int sealionZoo;
      int bearZoo;
   public:
      Zoo();
      ~Zoo();
      Zoo(const Zoo&);
      Zoo& operator=(const Zoo&);
      void addTiger(Tiger);
      void addSealion(Sealion);
      void addBear(Bear);
      Tiger* get_tiger();
      Sealion* get_sealion();
      Bear* get_bear();
      int get_startTigerA();
      int get_startSealionA();
      int get_startBearA();
      int get_startTigerB();
      int get_startSealionB();
      int get_startBearB();
      int get_account();
      int get_revenue();
      int get_tigerZoo();
      int get_sealionZoo();
      int get_bearZoo();
      int set_startTigerA(int);
      int set_startSealionA(int);
      int set_startBearA(int);
      int set_startTigerB(int);
      int set_startSealionB(int);
      int set_startBearB(int);
      int set_account(int);
      int set_revenue(int);
      int set_tigerZoo(int);
      int set_sealionZoo(int);
      int set_bearZoo(int);
      void addBabyTiger(Tiger);
      void addAdultTiger(Tiger);
      void addBabySealion(Sealion);
      void addAdultSealion(Sealion); 
      void addBabyBear(Bear);
      void addAdultBear(Bear);
      void removeBabyTiger();
      void removeAdultTiger();
      void removeBabySealion();
      void removeAdultSealion(); 
      void removeBabyBear();
      void removeAdultBear();
      void ageTiger();
      void ageSealion();
      void ageBear();
      int playGame();
      int sickTiger();
      int sickBabyTiger();
      int sickSealion();
      int sickBabySealion();
      int sickBear();
      int sickBabyBear();
      int sickEvent();
      int animalBirth(Tiger,Sealion,Bear);
      int zooBoom();
      int zooNothing();
      void tigerPay();
      void sealionPay();
      void bearPay();
      void tigerBabyPay();
      void sealionBabyPay();
      void bearBabyPay();
      int buyTiger();
      int buySealion();
      int buyBear();
      int buyAnimal();
      int tigerCost();
      int sealionCost();
      int bearCost();
      int gameEnd();
};
#endif
