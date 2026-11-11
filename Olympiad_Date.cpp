#include<iostream>
using namespace std;
bool is_date_formed(int need[],int freq[])
{
    for(int i = 0; i < 10; i++)
    {
        if(need[i] > freq[i])
            return false;
    }
    return true;
}
int find_minimum_steps(int numbers[], int need[],int n)
{
    int steps = 0;
    int freq[10] = {0};
    for(int i = 0; i < n; i++)
    {
        steps++;
        freq[numbers[i]]++;
        if(is_date_formed(need, freq))
        {
            return steps;
        }
        
    }
    return 0;
}
int main()
{
    int need[10] = {3, 1, 2, 1, 0, 1, 0, 0, 0, 0};
    int test_cases;
    cin >> test_cases;
    for(int t = 0; t < test_cases; t++)
    {
        int n;
        cin >> n;
        int numbers[n];
        for(int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
        int result = find_minimum_steps(numbers, need, n);
        cout << result << endl;
    }

    return 0;
    
}