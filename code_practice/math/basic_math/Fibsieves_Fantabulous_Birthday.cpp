#include<cstdio>
#include<cmath>
using namespace std;

#define ll long long int

int main()
{
    int test,tc=0;
    scanf("%d", &test);
    while(test--){
        ll n;
        scanf("%lld", &n);
        double root=sqrt(n);
        ll upper=ceil(root);
        printf("Case %d: ", ++tc);

        if(upper==(ll)root){
            if(upper%2)
                printf("1 %lld\n", upper);
            else
                printf("%lld 1\n", upper);
            continue;
        }
        ll ceil_sq=upper*upper;
        ll mid=ceil_sq-upper+1;
        if(n==mid)
            printf("%lld %lld\n", upper, upper);
        else if(n<mid){
            if(ceil_sq%2==0)
                printf("%lld %lld\n", upper-(mid-n),upper);
            else
                printf("%lld %lld\n", upper, upper-(mid-n));
        }
        else{
            if(ceil_sq%2==0)
                printf("%lld %lld\n", upper, ceil_sq-n+1);
            else
                printf("%lld %lld\n", ceil_sq-n+1, upper);

        }
    }
}
