#include<stdio.h>
typedef struct{
	int so;
	int solan;
} Arr;

main(){
	int t;
	scanf("%d", &t);
	int n;
	while(t--){
		int k = 0;
		scanf("%d", &n);
		Arr x[100];
		int a[n+1];
		for(int i = 1; i <= n; i++){
			scanf("%d",&a[i]);
		}
		int check[n + 1];
		for(int i = 1; i <= n; i++){
			check[i] = 0;
		}
		
		for(int i = 1; i < n; i++){
			int dem = 1;
			for(int j = i + 1; j <= n; j++){
				if(check[i] == 0){
					if(a[i] == a[j]){
						check[j] = 1;
						dem++;
					}
				}
			}
			if(check[i] == 0){
				x[k].so = a[i];
			x[k].solan = dem;
			k++;
			}
			
		}
		if(check[n] == 0){
			x[k].so = a[n];
			x[k].solan = 1;
			k++;
		}
		int max = 0;
		for(int i = 0; i < k; i++){
			if(x[i].solan > max) max = x[i].solan;
		}
		for(int i = 0; i < k; i++){
			if(x[i].solan == max) printf("%d ",x[i].so);
		}
		printf("\n");
	}
    return 0;
}

