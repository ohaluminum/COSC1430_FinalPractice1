#include<iostream>
#include <string>
using namespace std;

template<typename T>
void cyclic_shuffle(T arr[], int size, int pos, bool LeftOrRight)
{
    T temp;

    if (LeftOrRight)
    {
        for (int i = 0; i < pos; i++)
        {
            temp = arr[size - 1];

            for (int j = size - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }

            arr[0] = temp;
        }
    }
    else
    {
        for (int i = 0; i < pos; i++)
        {
            temp = arr[0];

            for (int j = 0; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            arr[size - 1] = temp;
        }
    }
}

int main()
{
    int arr[7] = { 6, 2, 1, 7, 4, 6, 9 };

    cyclic_shuffle(arr, 7, 2, false);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}