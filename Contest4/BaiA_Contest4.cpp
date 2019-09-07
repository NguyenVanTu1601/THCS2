#include<stdio.h>
main(){
	int t;
	scanf("%d", &t);
	int n;
	while(t--){
		scanf("%d", &n);
		int a[n+1];
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
			if(a[i] % 2 == 0) printf("%d ",a[i]);
		}
		printf("\n");
	}

    return 0;
}

