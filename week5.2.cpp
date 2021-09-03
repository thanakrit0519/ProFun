#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i=0,n;
    int a[1000];
    int b[1000];
    int qc=0;
    while(1)
    {
        cout<<"Number : ";
        cin>>n;
        if(n==999)
            break;
        a[i]=n;
        b[i]=n;
        i++;
    }
    sort(a,a+i);
    if(a[0]!=b[0])
        sort(a,a+i,greater<int>());
    if(a[0]!=b[0])
        cout<<"Is sort : NO";
    else
    {
        for(int j=1; j<i; j++)
        {
            if(a[j]!=b[j])
            {
                cout<<"Is sort : NO";
                qc=1;
                break;
            }
        }
        if(qc==0)
            cout<<"Is sort : YES";
    }
    return 0;
}
