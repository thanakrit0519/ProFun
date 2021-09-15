#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d",&m);
    scanf("%d",&n);
    char b[100][100];
    int c[100];
    for(int i=0; i<m; i++)
    {
        scanf("%s",&b[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d",&c[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(b[j][i]=='O')
            {
                if(c[i]>0)
                {
                    for(int k=1; k<=c[i]; k++)
                    {
                        if(j-k<0)
                        {
                            break;
                        }
                        else{
                             b[j-k][i]=35;
                        }
                    }
                    break;
                }

            }
            else if(j==m-1)
            {
                if(c[i]>0)
                {
                    for(int k=1; k<=c[i]; k++)
                    {

                        b[j-k+1][i]=35;
                        if(j-k+1==0){
                            break;
                        }
                    }
                }
            }
        }
    }
        for(int j=0; j<m; j++)
        {
            for(int i=0; i<n; i++)
            {
                    printf("%c",b[j][i]);
            }
            printf("\n");
        }

}
