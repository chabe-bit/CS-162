#ifndef BEAR_H
#define BEAR_H
#include "animal.h"
using namespace std;

class Bear : public Animal {
   public:
      Bear();
      Bear(int,int,int,int,int);
      ~Bear();
};
#endif
