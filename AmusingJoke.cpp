#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a,b,pile,mypile;
    getline(cin,a);
    getline(cin,b);
    getline(cin,pile);
    mypile=a+b;
    sort(mypile.begin(),mypile.end());
    sort(pile.begin(),pile.end());
    if(mypile==pile)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}