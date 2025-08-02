#include <bits/stdc++.h>
using namespace std;
int hashh[10000000];
int main()
{
    int size;
    cout << "Enter size:";
    cin >> size;
    string s;
    cin.ignore();
    cout << "Enter a string:";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int v = s[i] - 'a';
            hashh[v] = hashh[v] + 1;
        }
    }
    int queries;
    cout << "Enter no of queries:";
    cin >> queries;
    while (queries--)
    {
        char c;
        cout << "\nEnter character to count: ";
        cin >> c;
        cout << "Frequency is: " << hashh[c - 'a'];
    }
    return 0;
}
