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
#define MAX 1000008

int indegree[MAX];
vector<int> graph[MAX];

void solve()
{
    int n,m,a,b;
    vector<int>v;
    vector<int> s;
    // bool flag=0;
    cin>>n>>m;
    while (m--)
    {
        cin>>a>>b;
        indegree[b]++;
        graph[a].pb(b);
    }

    rep(i,1,n+1){
        if(indegree[i]==0){
            v.pb(i);
        }
    }
    while (!v.empty())
    {
        int num=v.back();
        v.pop_back();
        // cout<<"num : "<<num;nl;
        if(indegree[num]==0){
            // cout<<num<<"\t";
            // flag=1;
            s.pb(num);
        }
        rep(i,0,(int)graph[num].size()){
            indegree[graph[num][i]]--;
            if(indegree[graph[num][i]]==0){
                // cout<<graph[num][i]<<"\t";
                // flag=1;
                v.pb(graph[num][i]);
            }
        }
    }
    if(s.size()==0){
        cout<<"IMPOSSIBLE";nl;
        return;
    }
    for(auto& str: s)
    {
        cout << str;nl;
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
/*
3 2
1 2
2 3
5 5
1 2
2 4
4 3
3 5
5 1
*/