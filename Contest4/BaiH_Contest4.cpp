#include<stdio.h>

main(){
	int t;
	scanf("%d", &t);
	int n;
	while(t--){
		scanf("%d",&n);
		int a[n+2];
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
		}
		int dem = 1;
		for(int i = 2; i <= n; i++){
			int kt = 1;
			for(int j = 1; j < i; j++){
				if(a[j] > a[i]){
					kt = 0;
					break;
				}
			}
			if(kt == 1) dem++;
		}
		printf("%d\n", dem);
	}
    return 0;
}

