#include<bits/stdc++.h>
using namespace std;

#define tc int test;cin>>test;while(test--)
#define rep(i,a,b) for(int i=a; i<b; i++)
#define rev(i,a,b) for(int i=a; i>=b; i--)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<endl
#define sz 100007


void solve()
{
    string s;
    cin>>s;
    s+="$";
    int len = s.size();
    vector <int> p(len), c(len);
    {
    vector <pair<char,int>> a(len);
    rep(i,0,len){
        a[i]={s[i],i};
    }
    sort(a.begin(), a.end());

    rep(i,0,len){
        p[i]=a[i].ss;
    }
    c[p[0]]=0;
    rep(i,1,len){
        if(a[i].ff == a[i-1].ff){
            c[p[i]] = c[p[i-1]];
        }
        else{
            c[p[i]] = c[p[i-1]]+1;
        }
    }
    }
    int k=0;
    while ((1<<k) < len)
    {
        vector<pair<pair<int,int>,int>> a(len);
        rep(i,0,len){
            a[i]={{c[i], c[(i+(1<<k))%len] }, i};
        }
        sort(a.begin(),a.end());
        
        rep(i,0,len){
            p[i]=a[i].ss;
        }
        c[p[0]]=0;
        rep(i,1,len){
            if(a[i].ff == a[i-1].ff){
                c[p[i]] = c[p[i-1]];
            }
            else{
                c[p[i]] = c[p[i-1]]+1;
            }
        }
        k++;
    }
    
    rep(i,0,len){
        cout<<p[i]<<" ";
    }
    nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // tc{
        solve();
    // }
    return 0;
}

