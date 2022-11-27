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
    string h,m,temp1,temp2;
    char t;
    cin>>h>>m;
    while (true)
    {
        temp1=h, temp2=m;
        if(temp1.length()==1) swap(temp1[0],temp2[0]);
        else swap(temp1[1],temp2[0]);
        if(temp1.compare("24")<0 && temp2.compare("60")<0){
            cout<<h<<" "<<m<<"\n";
            return;
        }

        int min= stoi(m);
        min++;
        if(min>59){
            m="0";
            int hour = stoi(h);
            hour++;
            if(hour>=24)
                hour=0;
            h=to_string(hour);
        }
        else{
            m=to_string(min);
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