#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long max(long long a, long long b){
	if(a >= b) return a;
	else return b;
}
long long min(long long a, long long b){
	if(a <= b) return a;
	else return b;
}
main(){
	
	int t;
	scanf("%d",&t);
	int n;
	while(t--){
		scanf("%d",&n);
		long long a[n+1];
		for(int i = 1; i <= n; i++){
			scanf("%d",&a[i]);
		}
		long long f[n+1];
		f[0] = 0;
	    for (int i = 1; i <= n; ++i) f[i] = f[i-1] + a[i];
	    long long maxsum = 0; 
		long long f_min = 0;
	    for (int i = 1; i <= n; ++i) {
	        f_min = min(f_min, f[i]);
	        maxsum = max(maxsum, f[i] - f_min);
	    }
	    printf("%lld\n",maxsum);
	}
    
}
// https://e16cn-ptit.blogspot.com/2017/12/p171sume-round-1e-day-con-co-tong-lon.html
