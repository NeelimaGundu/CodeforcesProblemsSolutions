#include<iostream>
using namespace std;
int main()
{
    int t,i=0;
    cin>>t;
    int *r = new int[t];
    while(i<t)
    {
        int a,b;
        cin>>a>>b;
        r[i]=0;
        r[i]= a%b;
        i++;
    }
    for(int j=0;j<t;j++)
    cout<<r[j]<<endl;

    return 0;
}