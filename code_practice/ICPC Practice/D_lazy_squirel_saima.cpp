#include "bits/stdc++.h"
using namespace std;

#define infinity 1<<30 //2^30
#define ll long long
#define pb push_back
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define pi  3.14159265358979323846
#define INF 99999999

#define nnn 100000007
vector<ll>v[1000002];

ll vis[1000002];

map<ll,char>mp;
string s1;
string s2;



ll cnt =0;





ll dfs(ll n){

    vis[n]=1;



    s1.pb(mp[n]);
    s2 = s1;

    reverse(s2.begin(),s2.end());



    if(s2==s1){
            //cout<<s1<<endl;
            cnt++;
        }



    //cout<<n<<" "<<s1<<endl;




    for(auto x:v[n]){
        //cout<<x<<endl;


        if(!vis[x]){

                dfs(x);
                s1.pop_back();
        }









    }

}

int main()
{



        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

        ll t;cin>>t;

        for(ll k=1;k<=t;k++){
            ll n;cin>>n;

            for(ll i=1;i<=n;i++){
                v[i].clear();
                vis[i]=0;
                s1.clear();

             }

             //s2.clear();

             cnt =0;

            string s;
            cin>>s;



            for(ll i=0;i<n;i++){
                mp[i+1]=s[i];
            }



            for(ll i = 1;i<=n-1;i++){
                ll x,y;cin>>x>>y;
                v[x].pb(y);
                v[y].pb(x);

            }

            dfs(1);


            cout<<"Case "<<k<<": "<<cnt<<'/'<<n<<endl;





        }



	return 0;
}