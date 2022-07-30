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
//int m[MAX];

void solve()
{
    ll n,q,op,a,n1,n2,n3,sum=0,index1=0,index2=0;
    bool flag=0;
    cin>>n>>q;
    vector <ll> arr(n);
    vector<ll>::iterator it1,it2;
    rep(i,0,(int)n){
        cin>>arr[i];
    }
    sort(all(arr));
    while(q--){
        cin>>op;
        if(op==1){
            cin>>a;
            sum+=a;
        }
        else{
            cin>>n1>>n2>>n3;
            //finding the index of the first number;
            it1 = lower_bound (arr.begin(), arr.end(), n1+sum);
            index1=distance( arr.begin(), it1 );

            //finding the index of the last number
            it2 = upper_bound (arr.begin(), arr.end(), n2+sum);
            index2=distance( arr.begin(), it2);
            
                if((index1+n3-1)<n && (index1+n3-1)<index2){
                    cout<<arr[index1+n3-1]-sum;nl;
                }
                else{
                    cout<<-1;nl;
                }
            
        }
    }
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
/*
10 2
8 10 4 9 1 3 5 9 4 10
1 3
2 1 2 4

10 2
8 10 4 9 1 3 5 9 4 10
1 3
2 9 10 1

10 2
8 10 4 9 1 3 5 9 4 10
1 3
2 6 7 5

10 2
8 10 4 9 1 3 5 9 4 10
1 3
2 -16 -7 5

10 2
8 10 4 9 1 3 5 9 4 10
1 3
2 4 7 2
*/