#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    int primes[100];
    primes[0]=2;
    for(int i=2;i<=n;i++)
    {
        int check=0;
        for(int j=2;j<sqrt(i);j++)
        {
            if(i%j==0)
            {
                check=1;
                break;
            }
        }
        if(check==0)
        {
            count++;
            primes[count]=i;
        }
    }
    for(int i=0;i<count;i++)
    {
        int sum=0;
        for(int j=0;j<i;j++)
        {
            if(sum>primes[i])
            sum+=primes[j]
        }
    }
    for(int i=)
    for(int i=3;i<=n;i++)
    {
        int p=i;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                break;
            }
            
        }
    }
    return 0;
}