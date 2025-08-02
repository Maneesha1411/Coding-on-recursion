// codechef hashmapping question count beutiful pairs;
#include <bits/stdc++.h>
using namespace std;

// Extra 1 because 0-based indexing in C++
const int MX = 1e4 + 1;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int Hash[MX] = {0};
    int ans = 0;
    // Write your solution here
    for (int i = 0; i < n; i++)
    {
        if (a[i] * a[i] < MX)
        {
            ans = ans + Hash[a[i] * a[i]];
        }
        Hash[a[i]] = Hash[a[i]] + 1;
    }
    cout << ans;
    return 0;
}