#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class visitor
{
    private:
        string visitorName;
        int ticketsBought;
    public:
        visitor();
        visitor (string visitorName, int ticketsBought);
        void displayInfo();
        ~visitor();
};

#endif // VISITOR_H







#endif
