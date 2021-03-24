#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *c=new int[n];
    for(int i=0;i<n;i++)
    cin>>c[i];
    int i=0,jump=0;
    while((i+2<n)||(i+1<n))
    {
        if(c[i+2]==0)
        {
            jump++;
        i+=2;
        }
        else if(c[i+1]==0)
        {
            jump++;
        i++;
        }
        else
        {
            i++;
        continue;
        }
    }
    cout<<jump;
    return 0;
}