#include<iostream>
using namespace std;

int main(){
    int value = 3;
    const int *p = &value;
    int val =43;
    p = &val;
    cout << "value = " << value << endl;


    //const type pointer  ||pointer itself is constant

    int i = 10;
    int *const p1 = &i;
    cout << "i = " << i << endl;
    return 0;
}