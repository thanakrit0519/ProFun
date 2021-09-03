#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[1000];
    int n,i=1;
    int qc=0;
    int lastqc;
    int out=1;
    cout<<"Number : ";
    cin>>a[0];
    while(a[0]!=999)
    {
        cout<<"Number : ";
        cin>>n;
        if(n==999)
            break;
        a[i]=n;
        if(i==1)
        {
            if(a[1]>a[0])
                qc=1;
            else
                qc=-1;
        }
        else if(qc==1&&out==1)
        {
            if(a[i]>a[i-1])
                out=1;
            else
                out=0;
        }
        else if(qc==-1&&out==1)
        {
            if(a[i]<a[i-1])
                out=1;
            else
                out=0;
        }
        i++;
    }
    if(out==1)
        cout<<"Is sort : YES";
    else
        cout<<"Is sort : NO";
    return 0;
}
