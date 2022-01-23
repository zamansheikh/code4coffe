#include<iostream>
using namespace std;

int recursiveSum( int m, int n )
{
    if( m == n )
        return m;
    else
        return m + recursiveSum( m + 1, n );
}

int main(){

    int sum = 0;
    sum = recursiveSum( 2, 4 );
    cout << "The sum of 2 to 5 is: " << sum << endl;
}