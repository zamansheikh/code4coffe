#include<iostream>
using namespace std;
int main(){
    int initialHour, initialMinute, finalHour, finalMinute;
    int totalHours, totalMinutes;
    cin >> initialHour >> initialMinute >> finalHour >> finalMinute;
    if (initialHour > finalHour){
        totalHours = 24 - initialHour + finalHour;
    }
    else if (initialHour == finalHour){
        if ( initialMinute >= finalMinute){totalHours = 24;}
        
    }
    else{
        totalHours = finalHour - initialHour;
    }
    if (initialMinute > finalMinute){
        totalMinutes = 60 - initialMinute + finalMinute;
        totalHours--;
    }
    else{
        totalMinutes = finalMinute - initialMinute;
    }
    cout << "O JOGO DUROU "<< totalHours<< " HORA(S) E "<<totalMinutes << " MINUTO(S)" << endl;
    return 0;
}