#include<cstdio>
#include<cmath>
using namespace std;

#define ll long long int

int main()
{
    int test,tc=0;
    scanf("%d", &test);
    while(test--){
        int m,n;
        scanf("%d %d", &m, &n);
        int mul=m*n;
        int div=mul/2;
        printf("Case %d: ", ++tc);
        if(m==1 || n==1){
            printf("%d\n", mul);
            continue;
        }
        else if(m==2 || n==2){
            int ans;
            if(m==2)
                ans=n;
            else
                ans=m;
            if(ans%4==1)
                ans++;
            else if(ans%4==2)
                ans+=2;
            else if(ans%4==3)
                ans++;
            printf("%d\n", ans);
            continue;
        }
        if(mul%2==0)
            printf("%d\n", div);
        else
            printf("%d\n", div+1);
    }
}
