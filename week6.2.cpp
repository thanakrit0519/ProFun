#include <bits/stdc++.h>

using namespace std;

int main()
{
   char a[1000];
   char bb[1000];
   char b[1000];
   gets(a);
   int n=strlen(a);
   int j=0;
   for(int i=0;i<strlen(a);i++)
   {

           a[i]=tolower(a[i]);

       if(a[i]>='a'&&a[i]<='z')
       {
           b[j]=a[i];
           bb[j]=b[j];
           j++;
       }
   }
   strrev(b);
   if(strcmp(bb,b))
   {
       cout<<"palindrome";
   }
   else
   {
       cout<<"not palindrome";
   }
    return 0;
}
