#include<stdio.h>

main(){
	int t;
	scanf("%d", &t);
	int n;
	while(t--){
		scanf("%d",&n);
		int a[n+1];
		for(int i = 1; i <= n; i++){
			scanf("%d",&a[i]);
		}
		int i = 1;
		int j = n;
		int kt = 0;
		while(i <= j){
			if(a[i] != a[j]){
				kt = 1;
				break;
			}
			i++;
			j--;
		}
		if(kt == 1) printf("NO\n");
		else printf("YES\n");
	}
    return 0;
}

