#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int n;
    double rem;
    cin >> rem;
    n = rem;
    cout <<"NOTAS:"<< endl;
    int res = n / 100;
    cout <<res << " nota(s) de R$ 100.00" << endl;
    n = n - res*100;
    res = n/50;
    cout <<res << " nota(s) de R$ 50.00" << endl;
    n = n - res*50;
    res = n/20;
    cout <<res << " nota(s) de R$ 20.00" << endl;
    n = n - res*20;
    res = n/10;
    cout <<res << " nota(s) de R$ 10.00" << endl;
    n = n - res*10;
    res = n/5;
    cout <<res << " nota(s) de R$ 5.00" << endl;
    n = n - res*5;
    res = n/2;
    cout <<res << " nota(s) de R$ 2.00" << endl;
    n = n - res*2;
    res = n/1;
    cout << "MOEDAS:" << endl; 
    cout <<res << " moeda(s) de R$ 1.00" << endl; 
    res = rem;
    double poysha = rem -res;
    res = poysha *100;
    n = res;
    res = n/50;
    cout <<res << " moeda(s) de R$ 0.50" << endl;
    n = n - res*50;
    res = n/25;
    cout <<res << " moeda(s) de R$ 0.25" << endl;
    n = n - res*25;
    res = n/10;
    cout <<res << " moeda(s) de R$ 0.10" << endl;
    n = n - res*10;
    res = n/5;
    cout <<res << " moeda(s) de R$ 0.05" << endl;
    n = n - res*5;
    res = n/1;
    cout <<res << " moeda(s) de R$ 0.01" << endl;
    return 0;
}
