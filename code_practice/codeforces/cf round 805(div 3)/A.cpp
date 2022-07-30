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
    string s;
    cin>>s;
    int len=s.length();
    cout<<stoi(s)-power(len-1);nl;
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

