#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,t[n],h[n],x[n],s=0;
    for(i=0;i<n;i++)
    {
        cin>>t[i];
    }
    sort(t,t+n,greater<int>());
;
    for(i=0;i<n;i++)
    {
        cin>>h[i];
    }
    sort(h,h+n,less<int>());
    for(i=0;i<n;i++)
    {
        x[i]=t[i]+h[i];
    }
    sort(x, x+n,less<int>());
    for(int j=n-1;j>0;j--)
    {
        s=s+(x[j]-x[j-1]);
    }
     cout<<s;
}
