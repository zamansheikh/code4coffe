#include <iostream>
using namespace std;
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        arr[i] = a[i];
    }
    int temp;
    //short the array
    for (int i = 0; i < 3; i++)
    {
        int min = i;
        for (int j = i + 1; j < 3; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    //print the array
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << endl;
    }
    //print the reverse array
    cout << endl;
    for ( int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
}