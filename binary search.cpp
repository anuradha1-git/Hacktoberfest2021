#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(),v.end()

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;//size input
    vector<int> vc;
    for(int i=0;i<n;i++)//array input
    {
        int x;
        cin>>x;
        vc.push_back(x);
    }
    sort(all(vc));//sort the array because binary search is applied on sorted array
    int t;
    cin>>t;//number to be found
    int l=0;
    int u=n-1;
    while(l<=u)
    {
        int mid=(l+u)/2;
        if(vc[mid]==t)
        {
            cout<<"FOUND\n";
            return 0;
        }
        else
        if(vc[mid]>t)
        {
            u=mid-1;
        }
        else
        if(vc[mid]<t)
        {
            l=mid+1;
        }
    }
    cout<<"NOT FOUND\n";
    return 0;
}
