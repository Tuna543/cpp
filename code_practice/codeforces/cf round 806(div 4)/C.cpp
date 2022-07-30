#include <bits/stdc++.h>
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

int power(int num)
{
    int res=1;
    rep(i,1,num+1){
        res*=10;
    }
    return res;
}

void solve()
{
    int n,len,sum=0;
    cin>>n;
    int arr[n];
    string s;
    vector<pair<int,string> > v;
    rep(i,0,n){
        cin>>arr[i];
    }
    rep(i,0,n){
        cin>>len>>s;
        sum=0;
        rep(j,0,len){
            if(s[j]=='D')
                sum++;
            else sum--;
        }
        if((arr[i]+sum)>=0) sum=arr[i]+sum;
        else sum=arr[i]+10+sum;

        // cout<<"inserting values\n";
        // cout<<sum<<"\t"<<s;nl;
        v.push_back(make_pair(abs(sum),s));
    }
    rep(i,0,v.size()){
        cout<<v[i].ff%10<<" ";
    }
    nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc{
        solve();
    }
    return 0;
}

