#include<iostream>
using namespace std;

string replace_children(int num_of_children, string children)
{
    int i=0;
    while(i < num_of_children-1)
    {
        if(children[i]=='B' && children[i+1]=='G')
        {
            children[i]='G';
            children[i+1]='B';
            i+=2;
        }
        else
        {
            i+=1;
        }
    }

    return children;
}
int main()
{
    int num_of_children , time;
    string children;
    cin>> num_of_children >> time >> children;

    string new_children;

    for(int i=0 ; i < time ; i++)
    {
        children = replace_children(num_of_children,children);
    }

    cout<< children;

    return 0;
}