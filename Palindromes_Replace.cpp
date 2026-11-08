#include<iostream>
using namespace std;

string Replace_Palindrome(string str)
{
    int n = str.length();
    for(int i = 0; i < n/2; i++)
    {
        if(str[i] == '?' && str[n-i-1] == '?')
        {
            str[i] = 'a';
            str[n-i-1] = 'a';
        }
        else if(str[i] == '?')
        {
            str[i] = str[n-i-1];
        }
        else if(str[n-i-1] == '?')
        {
            str[n-i-1] = str[i];
        }
    }
    if(n % 2 != 0 && str[n/2] == '?')
    {
        str[n/2] = 'a';
    }
    return str;
}
bool Is_Palindrome(string strAfterReplace)
{
    int n = strAfterReplace.length();
    for(int i = 0; i < n/2; i++)
    {
        if(strAfterReplace[i] != strAfterReplace[n-i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str;
    cin>> str;
    string strAfterReplace = Replace_Palindrome(str);
    if(Is_Palindrome(strAfterReplace))
    {
        cout << strAfterReplace;
    }
    else
    {
        cout << -1 ;
    }
    return 0;
}

