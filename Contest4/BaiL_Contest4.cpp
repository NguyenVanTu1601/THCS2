#include<stdio.h>
int a[10000]={0},b[10000]={0},n=0;
int tim(int t){
	for(int i=0;i<n;i++) if(a[i]==t) return i;
	return -1;
}
int khonggiam(int n){
	int x,y;
	while(n>=10){
		x=n%10; y=(n/10)%10;
		if(x<y) return 0;
		n/=10;
	}
	return 1;
}
void sapxep(){
	int t,i,j;
	int c[10000]; //Thu tu xuat hien
	for(i=0;i<n;i++) c[i]=i;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(b[i]<b[j]){
				t=a[i]; a[i]=a[j]; a[j]=t;
				t=b[i]; b[i]=b[j]; b[j]=t;
				t=c[i]; c[i]=c[j]; c[j]=t;
			}
	
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if((b[i]==b[j])&&(c[i]>c[j])){
				t=a[i]; a[i]=a[j]; a[j]=t;
				t=b[i]; b[i]=b[j]; b[j]=t;
				t=c[i]; c[i]=c[j]; c[j]=t;
			}
}
main(){
	int t,i;
	while(scanf("%d",&t)!=-1){
		if(khonggiam(t)){
			i=tim(t);
			if(i==-1){
				a[n]=t; b[n]=1; n++;
			} else b[i]++;
		}
	}
	sapxep();
	for(i=0;i<n;i++) printf("%d %d\n",a[i],b[i]);
}
