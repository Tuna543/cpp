#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
//#define srt_v sort(v.begin(),v.end())
#define srt_v(n) sort(v,v+n)
#define all(v) v.begin(),v.end()
#define tc int test;cin>>test;while(test--)
#define rep(i,a,b) for(int i=a; i<b; i++)
#define rev(i,a,b) for(int i=a; i>=b; i--)
#define vpi vector<pair<int,int> >
#define MAX  1000000000
/*
ll pow(int a)
{
    ll res=1;
    for(int i=1; i<=a; i++){
        res*=2;
    }
    return res;
}*/
// int j=1;
// double find_ratio(double ab,double ac,double bc,double ad)
// {
//     double ae=(ad/ab)*ac,de=(ad/ab)*bc,sabc,sade,area_abc,area_ade;
//     sabc=(ab+ac+bc)/2.0;
//     sade=(ad+ae+de)/2.0;
//     area_abc=sqrt(sabc*(sabc-ab)*(sabc-bc)*(sabc-ac));
//     area_ade=sqrt(sade*(sade-ad)*(sade-ae)*(sade-de));
//     return area_ade/(area_abc-area_ade);
// }
// double binary__search(double ab,double ac,double bc,double ratio)
// {
//     double low=0.0,high=ab,mid;
//     rep(i,0,100){
//         mid=low+(high-low)/2.0;
//         if(find_ratio(ab,ac,bc,mid)<ratio)
//             low=mid;
//         else high=mid;
//     }
//     return mid;
// }


double find_total(double a,double b,double mid)
{
    double diagonal=double(a)/2+mid;
    double dis=sqrt(diagonal*diagonal-(a-diagonal)*(a-diagonal));
    // double otherside=sqrt(diagonal*diagonal-dis*dis);
    double rem_dis=b-dis;
    return rem_dis+diagonal+diagonal;
}

double binary__search(double a,double b,double total)
{
    double low=double(a)/2,high=(double)a,mid,ans=0;
    rep(i,0,1000){
        mid=low+(high-low)/2.0;
        if(find_total(a,b,mid)<total)
            break;
        else high=mid;
        total=find_total(a,b,mid);
    }
    ans=sqrt(mid*mid-(a-mid)*(a-mid));//other side of triangle
    ans=b-ans; //remaining part of w
    ans=ans+mid+mid;
    return ans;
}
void solve()
{
    // double ab,ac,bc,ratio;
    // cin>>ab>>ac>>bc>>ratio;
    // cout<<"Case "<<j++<<": ";
    // cout<<fixed<<setprecision(6)<<binary__search(ab,ac,bc,ratio);nl;
    while(true){
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0){
        return;
    }
    double total=(double)a+(double)b;
    cout<<fixed<<setprecision(4)<<binary__search((double)a,(double)b,(double)total);
    nl;
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
/*
11 23
7 13
0 0
*/
