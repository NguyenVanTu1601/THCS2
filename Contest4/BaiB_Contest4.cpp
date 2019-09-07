#include<stdio.h>
#include<math.h>
int snt(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n > 2){
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0) return 0;
		}
		return 1;
	}
}

main(){
	int t;
	scanf("%d", &t);
	int n;
	while(t--){
		scanf("%d", &n);
		int a[n+1];
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
			if(snt(a[i]) == 1) printf("%d ",a[i]);
		}
		printf("\n");
	}

    return 0;
}

