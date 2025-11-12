#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class enclosure
{
    private :
        animal *animals;
        int capacity;
        int currentCount;
    public:
        enclosure();
        enclosure(int capacity, int currentCount, animal * a);
        ~enclosure();
        void addAnimal(animal * a);
        void displayAnimals();
        int getCapacity();
        void setCapacity(int cap);
        int getCurrentCount();
        void setCurrentCount(int c);
};

#endif 








#endif
