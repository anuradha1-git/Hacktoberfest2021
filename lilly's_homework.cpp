#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    int d[n];
    int as=0;
    int de=0;
    map<long,int>bp;
    map<long,int>cp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        c[i]=b[i]; 
        bp[b[i]]=i;
        cp[c[i]]=i;
    }
    sort(a,a+n);
     for(int i=0;i<n;i++)
    {
        d[i]=a[n-i-1];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            int p=bp[a[i]];
            b[p]=b[i];
            b[i]=a[i];
            bp[a[i]]=i;
            bp[b[p]]=p;
            as++;
        }
           if(d[i]!=c[i])
        {
            int q=cp[d[i]];
            c[q]=c[i];
            c[i]=d[i];
            cp[d[i]]=i;
            cp[c[q]]=q;
            de++;
        } 
    }
   
    if(de>as)
    {
        cout<<as;
        return 0;
    }
    cout<<de;
}
