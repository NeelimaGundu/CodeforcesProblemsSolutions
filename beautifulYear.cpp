#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int nt,check=0;
    nt= stoi(a)+1;
    a = to_string(nt);
    while(true)
    {
        for(int i=0;i<4;i++)
        {

            for(int j=i+1;j<4;j++)
            {
                if(a[i]==a[j])
                { 
                check=1;
                break;
                }
            }
            if(check==1)
            break;
        }
        if(check==1)
        {
            nt=nt+1;
            a = to_string(nt);
            check=0;
        }
        else 
        break;
    }
    cout<<nt;
    return 0;
}