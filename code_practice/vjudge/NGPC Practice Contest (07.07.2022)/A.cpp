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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rev(i, a, b) for (int i = a; i >= b; i--)
#define vpi vector<pair<ll, ll>>
#define MAX 1000002
int m[MAX];

void solve()
{
    vector<int> v;
    int n,m,k,a,x;
    cin>>n;
    int tea[n];
    rep(i,0,n){
        cin>>tea[i];
    }
    cin>>m;
    int top[m];
    rep(i,0,m){
        cin>>top[i];
    }
    rep(i,0,n){
        cin>>k;
        rep(j,0,k){
            cin>>a;
            v.pb(tea[i]+top[a-1]);
        }
    }
    sort(all(v));
    cin>>x;
    if(x/v[0]==0){
        cout<<0;nl;
    }
    else{
        cout<<x/v[0]-1;nl;
    }
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
// 3 
// 10 20 30
// 5
// 1 2 3 4 5
// 2 4 5
// 3 1 2 3
// 5 1 2 3 4 5
// 9 