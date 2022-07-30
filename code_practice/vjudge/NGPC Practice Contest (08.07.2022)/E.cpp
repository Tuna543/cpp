#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rev(i, a, b) for (int i = a; i >= b; i--)
#define vpi vector<pair<ll, ll>>
#define MAX 1000002
bool prime[MAX];

void sieve()
{
    prime[0]=prime[1]=true;
    for (int p = 2; p * p <= MAX; p++) {
        if (prime[p] == false) {
            for (int i = p * p; i <= MAX; i += p)
                prime[i] = true;
        }
    }
    // false values hold prime numbers 
    /*
    rep(i,0,10){
        if(!prime[i])
           cout<<i<<" ";
    }nl;*/
}

void solve()
{
    sieve();
    int n,q,op,x,y,cnt=0;
    cin>>n;
    vector<int> v(n+1),index(n+1);
    v[0]=index[0]=0;
    rep(i,1,n+1){
        cin>>v[i];
        if(!prime[v[i]]){
            cnt++;
        }
        index[i]=cnt;
    }
    cin>>q;
    while(q--){
        cin>>op>>x>>y;
        if(op==1){
            // cout<<"Upto index "<<y<<" : "<<index[y];nl;
            // cout<<"Upto index "<<x-1<<" : "<<index[x-1];nl;
            cout<<index[y]-index[x-1];nl;
        }
        else{
            v[x]=y;
            if(!prime[y]){
                rep(i,x,n+1)
                    index[i]++;
            }
        }
    }
    /*
    rep(i,1,n+1){
        cout<<"Number of prime numbers is : "<<index[i]<<" upto index : "<<i;nl; 
    }*/
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