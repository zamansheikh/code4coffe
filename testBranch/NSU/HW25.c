#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct PlaneTicket
    {
        char name[100];
        char destination[100];
        float TicketPrice;
    } mahfuz[4];
    mahfuz[0].name = "Monir";
    mahfuz[0].destination = "Bombay";
    mahfuz[0].TicketPrice = 22000.25;
    mahfuz[1].name = "Sharmin";
    mahfuz[1].destination = "Bangkok";
    mahfuz[1].TicketPrice = 12500.75;
    return 0;
}
