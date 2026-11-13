#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
    int year;
    cin>> year;
    
    while(true)
    { 
        year++;
        set<char> nums_set;
        
        string string_year = to_string(year);
        for(char c: string_year)
        {
            nums_set.insert(c);
        }
        if(nums_set.size()==4)
        {
            cout<< year;
            break;
        }

    }
    
    return 0;

}
