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
//#define srt_v sort(v.begin(),v.end())
#define srt_v(n) sort(v, v + n)
#define all(v) v.begin(), v.end()
#define tc       \
    int test;    \
    cin >> test; \
    while (test--)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rev(i, a, b) for (int i = a; i >= b; i--)
#define vpi vector<pair<int, int>>
#define MAX 1000000000

#define sz 1000002
vector<int> graph[sz];
int visited[sz];
string s1, s2;
vector<string> v_str;
map<ll, char> mp;

ll bfs(int source)
{
    ll cnt=0;
    queue<ll> q;
    q.push(source);
    s1.pb(mp[source]);
    s2 = s1;
    reverse(s2.begin(), s2.end());
    v_str.pb(s1);
    v_str.pb(s2);
    visited[source] = 1;
    while (!q.empty())
    {
        ll x = q.front();
        q.pop();
        for (int i = 0; i < graph[x].size(); i++)
        {
            int y = graph[x][i];
            if (!visited[y])
            {
                q.push(y);
                visited[y] = 1;
                s1.pb(mp[y]);
                s2 = s1;
                reverse(s2.begin(), s2.end());
                v_str.pb(s1);
                v_str.pb(s2);
            }
        }
    }

    for(ll i=0; i<v_str.size(); i+=2){
        if(v[i]==v[i+1]){
            cnt++;
        }
    }
    return cnt;
}

void solve()
{
    ll n;
    string s;
    cin >> n >> s;

    for (ll i = 0; i < n; i++)
    {
        mp[i + 1] = s[i];
    }

    rep(i, 0, (int)n - 1)
    {
        ll a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    cout<<bfs(1)<<"/"<<n;nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc
    {
        solve();
    }
    return 0;
}


/*
1
5
ABAAC
1 2
1 3
2 4
2 5
1
A
*/
