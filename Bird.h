#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class bird : public animal
{
    private :
        float wingSpan;
    public:
        bird();
        bird(string name, int age, bool isHungry, float wingSpan);
        ~bird();
        float getWingSpan();
        void setWingSpan(float w);
};

#endif // BIRD_H







#endif
