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
#define srt_v(n) sort(v, v + n)
#define all(v) v.begin(), v.end()
#define tc       \
    ll test;     \
    cin >> test; \
    while (test--)
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rev(i, a, b) for (ll i = a; i >= b; i--)
#define vpi vector<pair<ll, ll>>
#define MAX 1000008

// prime checking and holding
int prime[MAX];
int hold[MAX];
int index_hold;
int steps_total;
 
void sieve()
{
    // not prime number is marked as 1
    for(int i=4; i<=MAX; i+=2)
    {
        prime[i]=1;
    }
 
    for(int i=3; i*i<=MAX; i+=2)
    {
        if(!prime[i])
        {
            for(int j=i*i; j<MAX; j=j+2*i)
            {
                prime[j]=1;
            }
        }
    }
    hold[0]=2;
    for(int i=3; i<MAX; i+=2)
    {
        if(!(prime[i]))
        {
            hold[++index_hold]=i;
        }
    }
}

void numberofdivisor(int n)
{
    int cnt=1;
    while(true){
        int res=0;
        for(int i=0; hold[i]*hold[i]<=n; i++){
            int c4one=0;
            while(n%hold[i]==0){
                c4one++;
                n/=hold[i];
                
            }
            // cout<<"c4one:"<<c4one;nl;
            res+=c4one*hold[i];
        }

        if(res==0){//the number is prime
            break;
        }

        if(n>1){
            res+=n;
        }
        n=res;
        cnt++;
    }

    cout<<n<<" "<<cnt;nl;
}

void solve()
{
    int n;
    while (cin>>n)
    {
        // ends the program
        if(n==4){
            return;
        }
        numberofdivisor(n);
        
    }
    
}
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();
    /// tc{
    solve();
    ///}
    return 0;
}
/*
2
3
5
76
100
2001
4
*/