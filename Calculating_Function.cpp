#include <iostream>
using namespace std;

//For a positive integer n let's define a function f:
//f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

int main()
{
    long long num;
    cin>> num;
    if(num % 2==0)
        cout<< num /2;
    else
        cout<< ( -(1+num)/2 );

    return 0;
}