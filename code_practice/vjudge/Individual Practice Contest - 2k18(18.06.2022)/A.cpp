#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define srt_v(n) sort(v, v + n)
#define all(v) v.begin(), v.end()
#define tc       \
    ll test;     \
    cin >> test; \
    while (test--)
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rev(i, a, b) for (ll i = a; i >= b; i--)
#define vpi vector<pair<ll, ll>>
#define MAX 1e18
//int m[MAX];

void solve()
{
    ll n,x,mn=LONG_MAX;
    cin>>n>>x;
    vector<pair<ll, pair<ll,ll> > > v(n);
    vector<ll> arr;
    rep(i,0,n){
        cin>>v[i].ss.ff>>v[i].ss.ss;
        v[i].ff=v[i].ss.ff+v[i].ss.ss;
        if(i!=0){
            v[i].ff+=v[i-1].ff;
        }
        if((x-i-1)>=0)
            arr.pb((x-i-1)*v[i].ss.ss);
    }
    rev(i,arr.size()-1,0){
        mn=min(mn,arr[i]+v[i].ff);
    }
    cout<<mn;nl;
    //sort(arr,arr+n);
    //cout<<arr[0];nl;
}
int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    /// tc{
    solve();
    ///}
    return 0;
}