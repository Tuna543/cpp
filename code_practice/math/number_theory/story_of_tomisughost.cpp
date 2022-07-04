#include<bits/stdc++.h>
using namespace std;

#define max 100005
#define mod 10000019
#define ll long long int

bitset <max> bit;
vector <ll> v;

void sieve()
{
    v.push_back(2);
    bit.set();
    for(ll i=3; i<max; i+=2){
        if(bit[i]){
            v.push_back(i);
            for(ll j=i*i; j<max; j+=i){
                bit[j] = false;
            }
        }
    }
}

ll bigmod(ll a, ll b)
{
    if(b==0){
        return 1;
    }
    else if(b%2){
        return (a%mod*bigmod(a,b-1)%mod)%mod;
    }
    else{
        return (bigmod(a,b/2)%mod*bigmod(a,b/2)%mod)%mod;
    }
}

int main()
{
    sieve();
    int test,in=0;
    scanf("%d", &test);
    while(test--)
    {
        ll n,t,res=1;
        scanf("%lld %lld", &n, &t);
        for(ll i=0;i<v.size() && v[i]<=n; i++)
        {
            ll f=n,cont=0;
            while(f>=v[i])
            {
                cont+=f/v[i];
                f/=v[i];
            }
            if(cont>=t)
            {
                cont/=t;
                ll bfa=bigmod(v[i],cont);
                res=(res%mod*bfa%mod)%mod;
            }
        }
        if(res==1){
            printf("Case %d: -1\n", ++in);
        }
        else{
            printf("Case %d: %lld\n", ++in, res);
        }
    }
    return 0;
}
