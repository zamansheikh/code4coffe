#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    float selary, bonus, total;
    cin >> selary ;
    if ( selary >= 0 && selary <= 400.00 ){
        bonus = 0.15 * selary;
        total = selary + bonus;
        cout << "Novo salario: " << fixed << setprecision(2) << total << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if ( selary >= 400.01 && selary <= 800.00 ){
        bonus = 0.12 * selary;
        total = selary + bonus;
        cout << "Novo salario: " << fixed << setprecision(2) << total << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if ( selary >= 800.01 && selary <= 1200.00 ){
        bonus = 0.10 * selary;
        total = selary + bonus;
        cout << "Novo salario: " << fixed << setprecision(2) << total << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if ( selary >= 1200.01 && selary <= 2000.00 ){
        bonus = 0.07 * selary;
        total = selary + bonus;
        cout << "Novo salario: " << fixed << setprecision(2) << total << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if ( selary > 2000.00 ){
        bonus = 0.04 * selary;
        total = selary + bonus;
        cout << "Novo salario: " << fixed << setprecision(2) << total << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}