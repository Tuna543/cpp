#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define yes cout << "yes\n"
#define no cout << "no\n"
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

void solve()
{
    int h,m;
    cin>>h>>m;
    while (true)
    {
        int lasth=h%10, firsth=h/10, lastm=m%10, firstm=m/10, temph,tempm;
        temph=firsth*10+firstm;
        tempm=lasth*10+lastm;
        if(temph<=23 && tempm<=59){
            cout<<h<<" "<<m<<"\n";
            return;
        }
        m++;
        if(m>59){
            m=0;
            h++;
            if(h>23)
                h=0;
        }
    }   
}
int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // tc{
    solve();
    // }
    return 0;
}