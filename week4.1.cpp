#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int sum;
    cin>>a;
    cout<<a<<" -> ";
    int n=a.size();
    while(n>1)
    {
        sum = 0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i]-48;
        }
        if(sum>9)cout<<sum<<" -> ";
        else{
            cout<<sum;
            break;
        }
        a.clear();
        int j=0;
        while(sum>=10)
        {
            a.push_back((sum%10)+48);
            sum /= 10;
            j++;
        }
        if(sum>0)
        {
            a[j]=sum+48;
        }
        n=j+1;
    }
    return 0;
}
