#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class mammal : public animal
{
    private:
        string furColor;
    public:
        mammal();
        ~mammal();
        mammal (string name, int age, bool isHungry, string furColor);
        string getFurColor();
        void setFurColor(string f);
};

#endif // MAMMAL_H






#endif
