#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *s=new int[n],lucky=0,unlucky=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]%2==0)
        lucky++;
        else
        unlucky++;
    }
    if(lucky>unlucky)
    cout<<"READY FOR BATTLE";
    else
    cout<<"NOT READY";
    return 0;
}