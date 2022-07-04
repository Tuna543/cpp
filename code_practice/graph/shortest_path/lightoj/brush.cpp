#include<bits/stdc++.h>

using namespace std;
//#define ll long long int
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
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
#define MAX  100000002
//#define sz 10000002
#define sz 200010
#define inf 100000002
#define ll unsigned long long
vector<pair<int,int> > graph[sz];
bool vis[sz];
int dist[sz];
int j=0;
///set<int> s;
///int mark[sz];

struct data{
    int city;
    int dist;
    bool operator<(const data& p)const{
        return dist>p.dist;
    }
};
void dijkstra(int source,int nodes)
{
    for(int i=0; i<sz; i++)
        dist[i]=inf;
    priority_queue<data> q;
    data u,v;
    u.city=source, u.dist=0;
    q.push(u);
    dist[source]=0;
    vis[source]=1;
    while(!q.empty())
    {
        u=q.top();
        q.pop();
        vis[u.city]=1;
        int ucost = dist[u.city];
        for(int i=0; i<graph[u.city].size(); i++)
        {
            v.city = graph[u.city][i].first;
            v.dist = graph[u.city][i].second+ucost;
            if(dist[v.city]>v.dist)
            {
                q.push(v);
                dist[v.city]=v.dist;
                vis[v.city]=1;
                ///mark[v.city]=u.city;
            }
        }
    }
    cout<<"Case "<<++j<<": ";
    if(dist[nodes]!=inf)
        cout<<dist[nodes];
    else cout<<"Impossible";
    cout<<"\n";
}

void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1][n+1];
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++)
            arr[i][j]=inf;
    }
    for(int i=0; i<m; i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        arr[a][b]=min(arr[a][b],w);
        graph[a].push_back(make_pair(b,arr[a][b]));
        graph[b].push_back(make_pair(a,arr[a][b]));
    }

    ///mark[t]=-1;
    dijkstra(1,n);
    for(int i=0; i<sz; i++){
        graph[i].clear();
    }
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
2
5 4
1 2 5
1 3 15
2 3 6
3 4 2
1
4 4
1 2 24
1 4 20
3 1 3
4 3 12
1
*/
