#include<stdio.h>

main(){
	int t;
	scanf("%d", &t);
	int n;
	while(t--){
		scanf("%d", &n);
		int a[n+1];
		int vt[n+1];
		int t = 0;
		int Max = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if(a[i] > Max) Max = a[i];
		}
		for(int i = 0; i < n ;i++){
			if(a[i] == Max){
				vt[t] = i;
				t++;
			}
		}
		printf("%d\n", Max);
		for(int i = 0; i < t; i++){
			printf("%d ", vt[i]);
		}
		printf("\n");
		
	}
    return 0;
}

