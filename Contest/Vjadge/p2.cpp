#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double n;
    
    cin >> n;
    if((n<=pow(2,31)) && (n >-pow(2,31)))
    {
        cout << "Yes" << endl;
        return 0;
    }
    else cout << "No" << endl;

}
