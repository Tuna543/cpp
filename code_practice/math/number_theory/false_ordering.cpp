
#include<bits/stdc++.h>
using namespace std;

long long int divisor(long long int n)
{
    long long int i,sum=0,flag=0;
    for(i=1; (i*i)<=n; i++)
    {
        if(n%i==0)
        {
            sum++;
        }
        if(i*i==n)
        {
            flag=1;
        }
    }

    if(flag)
    {
        return 2*sum-1;
    }
    return 2*sum;
}

int main()
{
    vector<pair<int,int> >v;
    for(int i=0; i<1000; i++)
    {
        v.push_back(make_pair(divisor(i+1),(i+1)*-1));
    }
    sort(v.begin(),v.end());

    int test,j=1;
    int n;
    scanf("%d", &test);
    while(j<=test)
    {
        scanf("%d", &n);
        printf("Case %d: %d\n",j,abs(v[n-1].second));
        j++;
    }
    return 0;
}