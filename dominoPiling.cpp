#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int area=n*m,pile=0,i=0;
    while(pile<=area)
    {
        pile = pile+ 2;
        i++;
    }
    i--;
    cout<<i;
    return 0;
}