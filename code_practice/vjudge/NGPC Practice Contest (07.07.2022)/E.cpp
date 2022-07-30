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
#define MAX 1000002
int m[MAX];

void solve()
{
    string s1,s2;
    while(getline(cin,s1) && getline(cin,s2)){
        int found=0;
        //found=s2.find(s1,found);
        // cout<<s1<<" "<<s2<<" ";
        // cout<<found;nl;
        vector<int> v;
        while (s2.find(s1,found)!=-1)
        {
            v.pb(s2.find(s1,found));
            found=s2.find(s1,found)+1;
        }
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }nl;
    }
}
int main()
{
    /*
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/
    /// tc{
    solve();
    ///}
    return 0;
}