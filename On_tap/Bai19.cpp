#include<stdio.h>

int nt(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	else{
		for(int i = 2; i * i <= n; i++){
			if(n % i == 0) return 0;
		}
	}
	return 1;
}
int cs(int n){
	int tong = 0;
	int kt = 1;
	while(n != 0){
		int i = n % 10;
		if(nt(i) != 1) {
			kt = 0;
			break;
		}
		tong = tong + i;
		n = n /10;
	}
	if(kt == 0) return 0;
	else{
		if(nt(tong) == 1) return 1;
		else return 0;
	}
}
main(){
	int t;
	scanf("%d", &t);
	int m ,n;
	while(t--){
		scanf("%d %d",&m, &n);
		int dem = 0;
		for(int i = m; i <= n; i++){
			if(cs(i) == 1){
				if(nt(i) == 1) dem++;
			}
		}
		printf("%d\n",dem);
	}
}
