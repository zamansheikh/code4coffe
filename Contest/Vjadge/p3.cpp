#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    int a, b ;
    cin >> n;
    for ( int i = 0; i < n; i++ )
    {
        cin >> a >> b; 
        int result = a % b;
        cout << result << endl;
    }

}
