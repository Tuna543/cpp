#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define yes printf("YES\n")
#define no printf("NO\n")
#define nl cout<<endl
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
//#define srt_v sort(v.begin(),v.end())
#define srt_v(n) sort(v,v+n)
#define all(v) v.begin(),v.end()
#define tc int test;cin>>test;while(test--)
#define sc(n) ;scanf("%d", &n)
#define rep(i,a,b) for(int i=a; i<b; i++)
#define rev(i,a,b) for(int i=a; i>=b; i--)
#define vpi vector<pair<int,int> >
#define MAX  1000000007

ll big_mod(ll power)
{
    if(power==0){
        return 1;
    }
    else if(power%2==1)
    {
        ll p1 = 2 % MAX;
        ll p2 = (big_mod(power-1))%MAX;
        return (p1*p2)%MAX;
    }
    else if(power%2==0)
    {
        ll p1 = (big_mod(power/2))%MAX;
        return (p1*p1)%MAX;
    }
}

void solve()
{
    ll n,q,x,v;
    bool flag=0;
    cin>>n>>q;
    ll arr[n],odd=0;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2){
            odd++;
        }
    }
        
    while (q--){
        flag=0;
        //previous number is odd
        if(arr[x-1]%2){
            flag=1;
        }
        cin>>x>>v;
        arr[x-1]=v;
        //new number is even, previous number is odd
        if(arr[x-1]%2==0 && flag==1){
            odd--;
        }
        //previous number is even, new number is odd
        else if(flag==0 && arr[x-1]%2==1){
            odd++;
        }
        if(odd){
            cout<<big_mod(n-1);nl;
        }
        else{
            cout<<0;nl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    //tc{
    solve();
    //}
    return 0;
}
