#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define srt_v(n) sort(v,v+n)
#define all(v) v.begin(),v.end()
#define tc int test;cin>>test;while(test--)
#define rep(i,a,b) for(int i=a; i<b; i++)
#define rev(i,a,b) for(int i=a; i>=b; i--)
#define vpi vector<pair<int,int> >
#define MAX  100000002
#define sz 1000002

vector<pair<int,int> > graph[sz];
int dist[sz];

struct data{
    int city;
    int dis;
    bool operator<(const data& p)const{
        return dis>p.dis;
    }
};

void dijkstra(int src)
{
    priority_queue<data> q;
    data u,v;
    u.city=src;
    u.dis=0;
    q.push(u);
    dist[src]=0;
    while(!q.empty()){
        u=q.top();
        q.pop();
        int cost=dist[u.city];
        rep(i,0,(int)graph[u.city].size())
        {
            v.city=graph[u.city][i].ff;
            v.dis=graph[u.city][i].ss+cost;
            if(dist[v.city]>v.dis){
                q.push(v);
                dist[v.city]=v.dis;
            }
        }
    }
}
void solve()
{
    rep(i,0,sz)
        dist[i]=INT_MAX;
    rep(i,0,sz){
        graph[i].clear();
    }
    int nodes,edges,src;
    cin>>nodes>>edges;
    rep(i,0,edges){
       int a,b;
       cin>>a>>b;
       graph[a].pb(mp(b,6));
       graph[b].pb(mp(a,6));
    }
    cin>>src;
    dijkstra(src);
    rep(i,1,nodes+1)
    {
        if(i==src)
            continue;
        if(dist[i]==INT_MAX)
            cout<<"-1 ";
        else
            cout<<dist[i]<<" ";
    }
    nl;
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
