#include<stdio.h>
#include<math.h>
int main()
{
	int test,i=0;
	scanf("%d", &test);
	while(test--){
		int found=0;
		long long int w,odd,even;
		scanf("%lld", &w);
		if(w%2){
			printf("Case %d: Impossible\n", ++i);
			continue;
		}
		odd=w/2;
		even=2;
		while(odd%2==0){
            odd/=2;
            even*=2;
		}
		printf("Case %d: %lld %lld\n", ++i,odd,even);
	}
	return 0;
}
