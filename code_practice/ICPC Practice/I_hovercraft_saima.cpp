#include "bits/stdc++.h"
using namespace std;

#define infinity 1<<30 //2^30
#define ll long long
#define pb push_back
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define pi  3.14159265358979323846
#define INF 99999999

#define nnn 100000007

double  sqrtx(double n,ll p){

    ll low = 0;
    ll high = n;

    double ans ;



    while(low<=high){
        ll mid = (low+high)/2;

        if(mid*mid==n){
            ans = mid;
            break;
        }

        if(mid*mid>n){
            high = mid-1;
        }
        else{
            low = mid+1;
            ans = mid;
        }



    }

       double inc = 0.1;
      for (int i = 0; i < p; i++) {
        while (ans * ans <= n) {
            ans += inc;
        }




        ans = ans - inc;
        inc = inc / 10;
    }
    return ans;
}



int main()
{



        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

        while(true){
            ll l,w;
            cin>>l>>w;

            if(l==0 && w==0){
                return 0;
            }


            double x = w/(l*1.00000000);


            double ysqr = (x*x)+1.0000000;

           // cout<<ysqr<<endl;

            double y = sqrtx(ysqr,9);

           // cout<<y<<endl;

            double d = (l*y)/(1+y);


            double x1 = (l-d);
            double y1 = (d*d)-((l-d)*(l-d));

            double y2 = sqrtx(y1,9);
           // cout<<y2<<endl;

            double ans = d+d+(w-y2);

            cout<<fixed<<setprecision(4)<<ans<<endl;



        }




	return 0;
}

/*
11 23
7 13
0 0
*/
