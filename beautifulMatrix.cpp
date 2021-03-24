#include<iostream>
using namespace std;
int main()
{
    int a[25],moves=0,p=0;
    for(int j=0;j<25;j++)
    cin>>a[j];
    for(int i=0;i<25;i++)
    {
        if(a[i]==1)
        {
            p=i;
            break;
        }
    }
    if(p<5)
    {
        moves+=2;
        p=p+10;
    }
    else if(p<10)
    {
        moves+=1;
        p=p+5;
    }
    else if((p>14)&&(p<20))
    {
        moves+=1;
        p=p-5;
    }
    else if((p>19)&&(p<25))
    {
        moves+=2;
        p=p-10;
    }
    else
    {
        moves=0;
    }
    
    if(p<12)
        moves+=12-p;
    else 
        moves += p-12;
    cout<<moves;
    return 0;
}