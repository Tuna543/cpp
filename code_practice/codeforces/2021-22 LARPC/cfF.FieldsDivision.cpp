#include<bits/stdc++.h>

using namespace std;
#define ll long long int
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

#define sz 300010
vector <int> grp[sz];
int vis[sz];

void dfs(int node)
{
    ///cout<<"this "<<node+1<<" is called\n";
    vis[node]=1;
    for(int i=0; i<grp[node].size(); i++){
        int x=grp[node][i];
        ///cout<<"child node: "<<x+1<<"\n";
        if(!vis[x])
            dfs(x);
    }
}

void solve()
{
    memset(vis,0,sizeof(vis));
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        grp[a].push_back(b);
        grp[b].push_back(a);
    }
    vis[n]=2;/*
    rep(i,0,n)
        cout<<i+1<<"="<<vis[i]<<"\n";*/
    dfs(n-1);/*
    rep(i,0,n)
        cout<<i<<"="<<vis[i]<<"\n";*/
    for(int i=1; i<=n; i++){
        if(vis[i]==1)
            cout<<"B";
        else cout<<"A";
    }
    cout<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ///tc{
    solve();
    ///}
    return 0;
}
/*
2
3 2
1 3
3 2
6 6
3 5
2 6
1 3
3 6
5 1
4 6
*/
