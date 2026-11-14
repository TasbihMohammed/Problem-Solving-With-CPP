#include<iostream>
using namespace std;
bool is_available_room(int people , int capacity)
{
    return ((capacity - people) >= 2);
}
int main()
{
    int num_of_rooms;
    cin>> num_of_rooms;
    int num_of_available_rooms=0;

    for(int i=0 ; i < num_of_rooms ; i++)
    {
        int people , capacity;
        cin>> people >> capacity;
        if(is_available_room(people,capacity))
        num_of_available_rooms++;
    }
    cout << num_of_available_rooms;

    return 0;
}