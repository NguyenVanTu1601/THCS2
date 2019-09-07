#include<stdio.h>
int a[10][10],n,m,t,d;
void nhap(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for (int v=1;v<=m;v++){
			scanf("%d",&a[i][v]);
		}
	}
}
 
void sapxep(){
	for(int i=1;i<=n;i++){
		for (int v=1;v<m;v++){
			for (int y=v+1;y<=m;y++){
			if (a[i][v]>a[i][y]) {
				d=a[i][v];a[i][v]=a[i][y];a[i][y]=d;
			}
		}
	}
}
	for(int i=1;i<=m;i++){
		for (int v=1;v<n;v++){
			for (int y=v+1;y<=n;y++){
			if (a[v][i]>a[y][i]) {
				d=a[v][i];a[v][i]=a[y][i];a[y][i]=d;
			}
		}
	}
}
}
void in(){
	for(int i=1;i<=n;i++){
		for (int v=1;v<=m;v++){
			printf("%d ",a[i][v]);
		}
		printf("\n");
	}
}
main(){
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		nhap ();
		printf("Test %d:\n",i);
		sapxep();
		in();
		printf("\n");
	}
}
