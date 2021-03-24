#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    int ranked[200000];
    for(int i=0;i<n;i++)
    cin>>ranked[i];
    int m;
    int player[200000];
    for(int i=0;i<m;i++)
    cin>>player[i];
    for(int i=0;i<m;i++)
    {
        ranked[n+i]= player[i];
        sort(ranked,ranked+n+i);
    }
    return 0;
}