#include<iostream>
using namespace std;
int number_of_lucky_digits(string number)
{
    int count =0;
    for(int i=0 ; i<number.length() ; i++)
    {
        if(number[i]=='4' || number[i]=='7')
        {
            count++;
        }
    }
    return count;
}
bool check_if_Lucky(int count)
{
    if(count==4 || count==7)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string number;
    cin >> number;
    int count = number_of_lucky_digits(number);
    if(check_if_Lucky(count))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}