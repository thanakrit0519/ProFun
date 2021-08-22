#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a[11];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    float sum;
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
        sum+=a[i];
    }
    cout<<sum/10;
    return 0;
}
