#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[100];
    int n=0;
    while(1)
    {
        cin>>a[n];
        if(a[n]==-1)
        {
            break;
        }
        n++;
    }
    int nwb;
    int nsb;
    for(int i=0; i<n; i++)
    {
        int qb=1;
        int wb=1;
        int sb=0;
        for(int j=0; j<a[i]; j++)
        {
            nwb=wb;
            nsb=sb;
            wb+=nwb+nsb+1;
            sb+=nwb;
            sb-=nsb;
            wb-=nwb;
        }
        cout<<wb<<" "<<wb+sb+1<<endl;
    }
}
