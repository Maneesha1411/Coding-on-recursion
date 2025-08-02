#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int i, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
    reverse(arr, i + 1, n);
}
int main()
{
    int size;
    cout << "Enetr size of an array :";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element:";
        cin >> arr[i];
    }
    reverse(arr, 0, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}