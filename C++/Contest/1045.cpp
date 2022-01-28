#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    double numA, numB, numC;
    cin >> numA >> numB >> numC;
    if ( numA < numB ){ int temp = numA; numA = numB; numB = temp; }
    if ( numA < numC ){ int temp = numA; numA = numC; numC = temp; }
    if ( numB < numC ){ int temp = numB; numB = numC; numC = temp; }

    if (numA >= numB + numC ){ cout << "NAO FORMA TRIANGULO" << endl; }
    else {
    if (numA*numA == numB*numB + numC*numC){ cout << "TRIANGULO RETANGULO" << endl; }
        else if (numA*numA > numB*numB + numC*numC){ cout << "TRIANGULO OBTUSANGULO" << endl; }
        else if (numA*numA < numB*numB + numC*numC){ cout << "TRIANGULO ACUTANGULO" << endl; }
        if (numA == numB && numB == numC){ cout << "TRIANGULO EQUILATERO" << endl; }
        else if (numA == numB || numB == numC || numA == numC){ cout << "TRIANGULO ISOSCELES" << endl; }

    }
    return 0;

}