#include <iostream>
using namespace std;

//swap function
void swap(int &a, int &b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

//print the array
void printArray(int array[], int size)
{
    cout << "The array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

//partition the array
int partition(int array[], int start, int end)
{
    int pivot = array[end];

    while (start < end)
    {
        while (array[start] <= pivot)
        {
            start++;
        }
        while (array[end] >= pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(array[start], array[end]);
        }
    }
    return end;
}

void quicksort(int array[], int start, int end)
{
    if (start < end)
    {
        int pivot = partition(array, start, end);
        quicksort(array, start, pivot - 1);
        quicksort(array, pivot + 1, end);
    }
}

int main()
{
    int start = 0;
    int end = 10;

    int array[end] = {20, 15, 30, 10, 25, 5, 15, 5, 10, 14};
    printArray(array, end);
    quicksort(array, start, end - 1);
}