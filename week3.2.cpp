#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a,sum=0;
    for(int i=0;i<10;i++)
    {
        cin>>a;
        sum+=a;
        cout<<a<<endl;
    }
    cout<<sum/10;
    return 0;
}

