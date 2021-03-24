#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    string c;
    cin>>c;
    int l=s.length(),count=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]==c[0])
            count++;
    }
    cout<<count;
    return 0;
}