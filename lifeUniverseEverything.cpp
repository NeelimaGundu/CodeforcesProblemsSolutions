#include<iostream>
using namespace std;
int main()
{
    int ar[100],i=0;
    while(!EOF)
    {
        cin>>ar[i];
        if(ar[i]==42)
        break;
        else
        cout<<ar[i]<<endl;
    }
    return 0;
}