#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str,s[100];
    getline(cin,str);
    int l=str.length();
    for(int i=0;i<l;i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            s[]
        }
        else count++;
    }
    int a[i+1];
    for(int j=0;j<=i;j++)
    {
        a[j]=str[j].length();
    }
    for(int j=0;j<i+1;j++)
    {
        if(a[j]>max.length())
        max=str[j];
        if(a[j]<min.length())
        min=str[j];
    }
    if(max.length()!=min.length())
    {
        cout<<str[max]<<endl;
    cout<<str[min]<<endl;
    }
    else
    cout<<str[i];
    return 0;
}