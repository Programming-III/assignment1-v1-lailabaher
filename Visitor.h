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
        string getVisitorName();
        void setVisitorName(string v);
        int getTicketsBought();
        void setTicketsBought(int t);
};

#endif // VISITOR_H







#endif
