#include<stdio.h>
 void selectionSort_tang(int a[], int n) {
		for (int i = 0; i < n - 1; i++) {
			int max = i;

			for (int j = i + 1; j < n; j++)
				if (a[max] > a[j])
					max = j;
			if (max != i) {
				a[max] ^= a[i];
				a[i] ^= a[max];
				a[max] ^= a[i];
			}
		}
}
 void selectionSort_giam(int a[], int n) {
		for (int i = 0; i < n - 1; i++) {
			int max = i;

			for (int j = i + 1; j < n; j++)
				if (a[max] < a[j])
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
		scanf("%d", &n);
		int a[n+1];
		int b[n+1];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		selectionSort_tang(a,n);
		selectionSort_giam(b,n);
		printf("Test %d:\n",z);
		z++;
		int x = 0; 
		int y = 0;
		for(int i = 0; i < n + n ; i++){
			if(i % 2 == 0){
				printf("%d ", a[x]);
				x++;
			}
			else{
				printf("%d ", b[y]);
				y++;
			}
		}
		printf("\n");
	}
    return 0;
}

