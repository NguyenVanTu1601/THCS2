#include<stdio.h>

main(){
	
	int t;
	scanf("%d", &t);
	int n, m, p;
	int z = 1;
	int a[101];
	int b[101];
	int c[202];
	while(t--){
		scanf("%d%d%d", &n , &m, &p);
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < m; i++){
			scanf("%d", &b[i]);
		}
		for (int i = 0; i<p; i++){
			c[i] = a[i];
		}
	    for (int i = p; i < m + p; i++){
			c[i] = b[i-p];
		}
	    for (int i = p + m; i < n + m; i++){
			c[i] = a[i-m];
		}
		printf("Test %d:\n",z);
		z++;
		for (int i=0;i<n+m;i++){
			printf("%d ", c[i]);
		}
	
		printf("\n");
		
	}
    return 0;
}

