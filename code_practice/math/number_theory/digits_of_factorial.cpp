#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
//#define srt_v sort(v.begin(),v.end())
#define srt_v(n) sort(v,v+n)
#define all(v) v.begin(),v.end()
#define tc int test;cin>>test;while(test--)
#define rep(i,a,b) for(int i=a; i<b; i++)
#define rev(i,a,b) for(int i=a; i>=b; i--)
#define vpi vector<pair<int,int> >
#define MAX  1000002

double arr[MAX];
int j=1;
void sieve()
{
    arr[0]=0;
    rep(i,1,MAX)
    {
        arr[i]=arr[i-1]+log10(i);
    }
}
void solve()
{
    int n,base;
    cin>>n>>base;
    cout<<"Case "<<j++<<": ";
    cout<<(ll)(arr[n]/log10(base)+1);
    nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    tc{
    solve();
    }
    return 0;
}
