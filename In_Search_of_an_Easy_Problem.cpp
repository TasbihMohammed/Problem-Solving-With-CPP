#include<iostream>
using namespace std;

int main()
{
    int test_cases;
    cin>> test_cases;

    int result=0;
    for(int t=0; t<test_cases; t++)
    {
        int n;
        cin>>n;
        result |= n;
    }
    cout << (result ? "Hard" : "Easy");

    return 0;
}