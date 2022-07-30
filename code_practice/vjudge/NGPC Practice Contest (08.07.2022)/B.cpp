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
//int m[MAX];

void solve()
{
    int arr[10],mx=0,index=0;
    rep(i,0,10){
        arr[i]=0;
    }
    string s;
    cin>>s;
    rep(i,0,s.size()){
        arr[s[i]-'0']++;
    }
    // rep(i,0,10){
    //     cout<<i<<" "<<arr[i];nl;
    // }
    rev(i,9,0){
        if(mx<=arr[i]){
            mx=arr[i];
            index=i;
        }
    }
    cout<<index;nl;
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