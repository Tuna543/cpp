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
#define MAX 1e18
//int m[MAX];
int i=1;

void solve()
{
    int a,b,c,k,sum,rem;
    cin>>a>>b>>c>>k;
    rem=(a+b+c)%3;
    if(rem){
        cout<<"Case "<<i++<<": Fight\n";
        return;
    }
    else{
        sum=(a+b+c)/3;
        if(a>sum){
            if(abs(a-sum)%k==0){
                a=sum;
            }
        }
        else if(a<sum){
            if(abs(a-sum)%k==0){
                a=sum;
            }
        }

        if(b>sum){
            if(abs(b-sum)%k==0){
                b=sum;
            }
        }
        else if(b<sum){
            if(abs(b-sum)%k==0){
                b=sum;
            }
        }

        if(c>sum){
            if(abs(c-sum)%k==0){
                c=sum;
            }
        }
        else if(c<sum){
            if(abs(c-sum)%k==0){
                c=sum;
            }
        }
    }
    // cout<<a<<" "<<b<<" "<<c;nl;
    if(a==b && b==c){        
        cout<<"Case "<<i++<<": Peaceful\n";
    }
    else{
        cout<<"Case "<<i++<<": Fight\n";
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