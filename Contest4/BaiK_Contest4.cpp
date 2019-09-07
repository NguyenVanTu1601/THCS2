#include<stdio.h>
#include<math.h>
typedef struct{
	int so;
	int solan;
} Arr;
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
 void selectionSort_tang(int a[], int n) {
		for (int i = 1; i <= n - 1; i++) {
			int max = i;

			for (int j = i + 1; j <= n; j++)
				if (a[max] > a[j])
					max = j;
			if (max != i) {
				a[max] ^= a[i];
				a[i] ^= a[max];
				a[max] ^= a[i];
			}
		}
}
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
		selectionSort_tang(a,n);
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
			if(check[i] == 0 && snt(a[i]) == 1){
				x[k].so = a[i];
			x[k].solan = dem;
			k++;
			}
			
		}
		if(check[n] == 0 && snt(a[n]) == 1){
			x[k].so = a[n];
			x[k].solan = 1;
			k++;
		}
		printf("Test %d:\n",z);
		for(int i = 0; i < k; i++){
			printf("%d xuat hien %d lan\n", x[i].so,x[i].solan);
		}
		z++;
	}
    return 0;
}

