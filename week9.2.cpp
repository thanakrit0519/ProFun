#include <bits/stdc++.h>

using namespace std;
char m[2100][2100];
void run(int i,int j)
{
    if(m[i][j]=='1')
    {
        m[i][j]='0';
        if(m[i-1][j-1]=='1')
            run(i-1,j-1);
        if(m[i-1][j]=='1')
            run(i-1,j);
        if(m[i-1][j+1]=='1')
            run(i-1,j+1);
        if(m[i][j-1]=='1')
            run(i,j-1);
        if(m[i][j+1]=='1')
            run(i,j+1);
        if(m[i+1][j-1]=='1')
            run(i+1,j-1);
        if(m[i+1][j]=='1')
            run(i+1,j);
        if(m[i+1][j+1]=='1')
            run(i+1,j+1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,y,sum=0;
    cin>>y>>x;
    for(int i=0; i<y; i++)
    {
        cin>>m[i];
    }
    for(int i=0; i<y; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(m[i][j]=='1')
            {
                sum++;
                run(i,j);
                j++;
            }
        }
    }
    cout<<sum;
    return 0;
}
