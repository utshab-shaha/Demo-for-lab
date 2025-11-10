#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cout<< "enter the first word :";
    cin>> a;
    cout<< "enter the second word :";
    cin>>b;

    int  count[26] = {0};
    for(char c:a )
        count[c -'a']++;
    for(char c:b)
        count[c-'a']--;

    bool thik_ache = true;
    for ( int i=0; i<26; i++)
    {
        if (count[i] != 0)
        {
            thik_ache = false;
            break;
        }
    }

    if(thik_ache)
        cout<<"they are anagram !!!! ";
    else
        cout<<"they are not anagram !!!! ";
}
