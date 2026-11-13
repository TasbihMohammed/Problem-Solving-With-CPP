#include<iostream>
#include<set>
#include<string>
using namespace std;

string convert_string_to_lower(string s1)
{
    string s2;
    for(char c: s1)
    {
        s2 += tolower(c);
    }
    return s2;
}

bool is_pangram(string word)
{
    string converted_word = convert_string_to_lower(word);
    if(converted_word.length() < 26)
        return false;
    
    set<char> letters;
    for(char c: converted_word)
    {
        letters.insert(c);
    }

    return(letters.size()==26? true : false);
}

int main()
{
    int length;
    string word;
    cin>> length;
    cin>> word;

    cout<<(is_pangram(word)?"YES" : "NO");

    return 0;
}