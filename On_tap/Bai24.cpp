#include<stdio.h>
typedef struct{
	int so;
	int solan;
} Arr;

main(){
	int t;
	scanf("%d", &t);
	int n;
	int z = 1;
	while(t--){
		int k = 0;
		scanf("%d", &n);
		Arr x[100];
		int a[n+1];
		for(int i = 1; i <= n; i++){
			scanf("%d",&a[i]);
		}
		// gan so a[i] chua ktra
		int check[n + 1];
		for(int i = 1; i <= n; i++){
			check[i] = 0;
		}
		// Lap dem so lan
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
		// Kiem tra not so cuoi
		if(check[n] == 0){
			x[k].so = a[n];
			x[k].solan = 1;
			k++;
		}
		//In so lan xuat hien
		printf("Test %d:\n",z);
		for(int i = 0; i < k; i++){
			printf("%d xuat hien %d lan\n", x[i].so,x[i].solan);
		}
		z++;
	}
    return 0;
}

