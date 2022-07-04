#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
#define MAX 110
bool arr[MAX];
bool prime[MAX];
vector  <int> hold;

void sieve()
{
    for(int i=3; i*i<=MAX; i+=2)
    {
    	if(!prime[0]){
        for(int j=i*i; j<=MAX; j=j+2*i)
        {
            prime[j]=1;
        }
    	}
    }
    hold.push_back(2);
    for(int i=3; i<=MAX; i+=2)
    {
        if(!(prime[i]))
        {
            hold.push_back(i);
        }
    }
}

int main()
{
	sieve();
	int test,tc=0;
	int ans[MAX];
    int fact[MAX];
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		memset(ans,0,sizeof(ans));
		for(int i=0; i<MAX; i++)
            fact[i]=i;
		for(int i=0; hold[i]<=n && i<hold.size(); i++){
            int temp = hold[i];
            for(int j=temp; j<=n; j+=temp){
                while(fact[j]%temp==0){
                    fact[j]/=temp;
                    ans[temp]++;
                }
            }
		}
        printf("Case %d: %d = ", ++tc,n);
		for(int i=0; hold[i]<=n; i++){
            printf("%d (%d)", hold[i], ans[hold[i]]);
            if(i!=hold.size()-1 && hold[i+1]<=n)
                printf(" * ");
		}
		printf("\n");
	}
}
