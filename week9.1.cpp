#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int c,n,x;
    int a1[1000],a2[1000];
    char l[1];
    cin>>c>>n;
    queue <int> a,b[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a1[i]>>a2[i];
    }
    for(int i=0; i<n*10; i++)
    {
        cin>>l[0];
        if(l[0]=='E')
        {
            cin>>x;
            for(int j=0; j<n; j++)
            {
                if(x==a2[j])
                {

                    if(b[a1[j]].empty())
                    {
                        a.push(a1[j]);
                    }
                    b[a1[j]].push(a2[j]);
                    break;
                }
            }
        }
        else if(l[0]=='D')
        {
            cout<<b[a.front()].front()<<"\n";
            b[a.front()].pop();
            if(b[a.front()].empty())
            {
                a.pop();
            }
        }
        else
        {
            cout<<"0";
            break;
        }
    }
}
