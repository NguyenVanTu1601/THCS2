#include<stdio.h>
main(){
	int t;
	scanf("%d", &t);
	int n;
	int z = 1;
	while(t--){
		scanf("%d", &n);
		int a[n+1];
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
		}
		int max = 0;
		int dem = 1;
		for(int i = 1; i < n; i++){
			if(a[i] < a[i+1]) dem++;
			else{
				if(dem > max) max = dem;
				dem = 1;
			}
		}
		
		printf("Test %d:\n",z);
		z++;
		printf("%d\n",max);
		for(int i = 1; i <= n - max + 1; i++){
			int kt = 0;
			for(int j = i; j < i + max - 1; j++){
				if(a[j] >= a[j+1]){
					kt = 1;
					break;
				}
			}
			if(kt == 0){
				for(int j = i; j <= i + max - 1; j++){
					printf("%d ", a[j]);
				}
				printf("\n");
				i += max - 1;
			}
			
		}
		
		
	}
}
