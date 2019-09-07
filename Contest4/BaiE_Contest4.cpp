#include<stdio.h>

main(){
	long long Fi[93];
	Fi[1] = 1;
	Fi[2] = 1;
	for(int i = 3; i <= 92; i++){
		Fi[i] = Fi[i-1] + Fi[i-2];
	}
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%lld\n",Fi[n]);
	}
	return 0;
}

