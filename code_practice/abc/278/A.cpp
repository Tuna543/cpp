#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define yes cout << "yes\n"
#define no cout << "no\n"
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
int i=1;

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }
    rep(i,k,n){
        cout<<arr[i]<<" ";
    }
    rep(i,0,k){
        if(i>=n){
            break;
        }
        else{ cout<<"0 ";}
    }
}
int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // tc{
    solve();
    // }
    return 0;
}
/*
2

3
*/