#include<iostream>
using namespace std;
int num_of_dominos(int len, int wed)
{
    return (len*wed)/2;
}
int main()
{
    int len , wed;
    cin>> len;
    cin>>wed;
    cout<< num_of_dominos(len,wed);
    return 0;
}