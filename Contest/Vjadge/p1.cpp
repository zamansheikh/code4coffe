#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    int array[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << (int)sqrt(array[i]) << endl;
    }
}
