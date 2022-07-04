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

vector  <pair<int,pair<int,int> > > grp;
int arr[3002];

void clear()
{
    rep(i,0,3002)
    {
        arr[i]=i;
    }
}
int root(int i)
{
    while(arr[i]!=i){
        arr[i]=arr[arr[i]];
        i=arr[i];
    }
    return i;
}
int mst(int nodes,int edges)
{
    clear();
    int ans=0;
    int total_weight=0;
    rep(i,0,edges)
    {
        int x=root(grp[i].ss.ff);
        int y=root(grp[i].ss.ss);
        if(x!=y){
            arr[y]=x;
            ans++;
            total_weight+=grp[i].ff;
            ///cout<<"total weight : "<<total_weight;nl;
        }
        if(ans==nodes-1) break;
    }
    return total_weight;
}
void solve()
{
    int nodes,edges;
    cin>>nodes>>edges;
    rep(i,0,edges){
       int a,b,w;
       cin>>a>>b>>w;
       grp.pb(mp(w,mp(a,b)));
    }
    sort(all(grp));
    cout<<mst(nodes,edges);
    nl;
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
