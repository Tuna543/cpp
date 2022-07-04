
#include<stdio.h>
 
#define MAX 1000008
#define lli long long int
lli prime[MAX],hold[MAX],index=1;
 
void sieve()
{
    for(lli i=3; i*i<=MAX; i+=2)
    {
        if(!prime[i])
        {
            for(lli j=i*i; j<MAX; j=j+2*i)
            {
                prime[j]=1;
            }
        }
    }
    hold[0]=2;
    for(lli i=3; i<MAX; i+=2)
    {
        if(!(prime[i]))
        {
            hold[index++]=i;
        }
    }
}
int main()
{
    sieve();
    lli test,i=0;
    scanf("%lld", &test);
    while(test--)
    {
        lli n;
        scanf("%lld",&n);
        lli c4one,res=1;
    for(lli i=0; i<index && hold[i]*hold[i]<=n ; i++)
    {
        c4one=1;
        if(n<hold[i])
        {
            break;
        }
        while(n%hold[i]==0)
        {
            c4one++;
            n/=hold[i];
        }
        res*=c4one;
 
    }
    if(n>1)
    {
        res*=2;
    }
    res--;
        printf("Case %lld: %lld\n",++i,res);
 
    }
    return 0;
}
