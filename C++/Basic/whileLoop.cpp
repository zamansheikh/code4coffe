#include <iostream>
using namespace std;

/*template <typename VarDataType>

void Swap(VarDataType &a, VarDataType &b)
{
    VarDataType temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "a = " << a << " b = " << b << endl;
    Swap<int>(a, b);
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}*/

int main(){
    int value, sum;
    while (cin >> value)
    {
        sum += value;
    }
    cout << "Sum = " << sum << endl;
    
}