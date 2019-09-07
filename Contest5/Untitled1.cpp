#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    switch(N){
        case 0:{
            printf("2.61");
            break;
        }
        case 1:{
            printf("2.95");
            break;
        }
        default : 
	 printf("3.17");
    } 
	
    return 0;
}
