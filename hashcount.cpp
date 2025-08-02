#include <bits/stdc++.h>
using namespace std;
int hashh[10000000];
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        hashh[arr[i]] += 1;
    }
    int q, num;
    cout << "Enter queries";
    cin >> q;
    while (q--)
    {
        cout << "Counting number: ";
        cin >> num;
        cout << "Total frquency is : " << hashh[num] << endl;
    }
}