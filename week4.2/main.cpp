#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    long long b;
    cin>>a;
    cout<<a<<" -> ";
    while(a>9)
    {
        b=0;
        while(a>9)
        {
            b+=a%10;
            a/=10;
        }
        b+=a;
        if(b>9)
            cout<<b<<" -> ";
        else
            cout<<b;
        a=b;
    }
    return 0;
}
