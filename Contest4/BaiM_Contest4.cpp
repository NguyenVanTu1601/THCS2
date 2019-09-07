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
		}
		int dem = 0;
		for(int i = 1; i < n; i++){
			if(a[i] == a[i+1]) dem++;
		}
		printf("%d\n",dem);
	}
    return 0;
}

