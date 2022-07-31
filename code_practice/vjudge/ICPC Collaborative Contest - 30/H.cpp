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
    int n,x=0,y=0;
    cin>>n;
    int a[n],b[n];
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i,0,n){
        cin>>b[i];
    }
    rep(i,0,n){
        if(a[i]>b[i]){
            x+=a[i];
            y+=b[i];
        }
    }
    cout<<x-y;nl;
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