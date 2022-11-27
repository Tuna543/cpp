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
    string a,b;
    int cnt[3]={0}, bc=0, oc=0;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.end(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    rep(i,0,3){
        if(a[i]=='b' || b[i]=='b'){
            bc++;
            cnt[i]=1;
        }
    }
    if(bc<2){
        no;return;
    }
    rep(i,0,3){
        if(bc==2){
            if((a[i]=='o' || b[i]=='o') && cnt[i]==0){
                oc++;
            }
        }
        else{
            if(a[i]=='o' || b[i]=='o'){
                oc++;
            }
        }
    }
    if(oc) yes;
    else no;
}
int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc{
    solve();
    }
    return 0;
}
/*
3
bob
rob
dbc
ocb
boc
obc

3
bbb
ooo
cbr
obz
cbr
obb
*/