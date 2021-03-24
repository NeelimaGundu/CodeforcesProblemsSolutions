#include<iostream>
using namespace std;
int main()
{
    int n,check=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        if(k==1)
        {
            check=1;
            break;
        }
    }
    if(check==0)
    cout<<"EASY";
    else
    cout<<"HARD";
    return 0;
}