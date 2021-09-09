#include <bits/stdc++.h>

using namespace std;

int main()
{
   string a;
   string b;
   stack<char> c;
   getline(cin,a);
   for(int i=0;i<a.size();i++)
   {
       if(a[i]>='A'&&a[i]<='Z')
       {
           a[i]=a[i]+32;
       }
       if(a[i]>='a'&&a[i]<='z')
       {
           b.push_back(a[i]);
           c.push(a[i]);
       }
   }
   for(int i=0;i<b.size();i++)
   {
       if(b[i]!=c.top())
       {
           cout<<"not palindrome";
           break;
       }
       else if(i==b.size()-1)
       {
           cout<<"palindrome";
       }
       c.pop();
   }
}
