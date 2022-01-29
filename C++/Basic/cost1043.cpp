#include<iostream>
using namespace std;
int main(){
    int value[3];
    cin >> value[0] >> value[1] >> value[2];
    //sort the array
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(value[i] > value[j]){
                int temp = value[i];
                value[i] = value[j];
                value[j] = temp;
            }
        }
    }

    cout << value[0] <<"\n" << value[1] <<"\n" << value[2] << endl;
    for ( int m = 0; m < 3; m++){
        for ( int n = m +1; n< 3 ; n++){
            if (value[m] > value[n]){
                int temp = value[m];
                value[m] = value[n];
                value[n] = temp;
            }
        }
    }
}