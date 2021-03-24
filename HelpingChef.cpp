#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int *a=new int[t];
    for(int i=0;i<t;i++)
    cin>>a[i];
    for(int i=0;i<t;i++)
        if(a[i]<10)
        cout<<"Thanks for helping Chef!"<<endl;
        else
        cout<<-1<<endl;
    return 0;
}