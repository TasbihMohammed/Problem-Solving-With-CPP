#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> h;
    for(int i=0 ; i<4 ; i++)
    {
        int horseshoe;
        cin>>horseshoe;
        h.insert(horseshoe);
    }

    cout<< (4 - h.size());


    return 0;
}
