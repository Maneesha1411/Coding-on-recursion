#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s, int left, int right)
{
    while ((left < right) && (!isalnum(s[left])))
    {
        left++;
    }
    while (left < right && !isalnum(s[right]))
    {
        right--;
    }
    if (left >= right)
    {
        return true;
    }
    if (tolower(s[left]) != tolower(s[right]))
    {
        return false;
    }
    return palindrome(s, left + 1, right - 1);
}
bool palindrome(string s)
{
    return palindrome(s, 0, s.size() - 1);
}
int main()
{
    string s = "A man, a plan, a canal: Panama";
    palindrome(s) ? cout << "yes" : cout << "NO";
    return 0;
}