#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int *ar = new int[t];
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        ar[i]=a+b;
    }
    for(int i=0;i<t;i++)
    cout<<ar[i]<<endl;
    return 0;
}