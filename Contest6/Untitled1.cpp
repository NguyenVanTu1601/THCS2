#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int sosanh(char *a1,char *a2){   // neu do dai bang nhau thi xet xem so  nao "lon hon" :))
	int t=0;
	while(a1[t] !='\0'){
		if(a1[t]>a2[t]) return 1;  // =1 neu manga1>manga2 :))
		else if(a1[t]<a2[t]) return 2;  // nguoc lai voi tren
		t++;
	}
	return 0; // bang "0" neu hai so bang nhau :))
}
int main(){
	int sobotest;
	printf("\n Nhap so bo test : ");
	scanf("%d",&sobotest);
	for(int e=1;e<=sobotest;e++){
		int d1,d2;
		char *mang1=(char *)calloc(1000,sizeof(char)); 
		printf("\n Nhap so thu nhat : ");
		fflush(stdin);
		gets(mang1);
		char *mang2=(char *)calloc(1000,sizeof(char));  
		printf("\n Nhap so thu hai : ");
		fflush(stdin);
		gets(mang2);
		d1=strlen(mang1);
		d2=strlen(mang2);
		printf("\n\t Ket qua : \n");
		if(d1>d2){  // neu so nao dai hon => lon hon :)) 
			int *mang3=(int *)calloc(d1,sizeof(int));
			for(int i=0;i<d1;i++){
				mang3[i]=48;                 // phai gan tat ca bang 48('0') thi moi dung :)), gan cho ban gkieu ti tru cho dung
			}
			int h=0;
			for(int i=d1-d2;i<d1;i++){
				mang3[i]=mang2[h];   // giongs hang sao cho cac phan tu cua mang 3 va mang 1 phai bang nhau(tinh tu phai trai ) de thuc hien "phep tru" , con may cai dau "dat bang 0 boi calloc"
				h++;
			}
			int *ketqua=(int *)calloc(d1,sizeof(int));     // mang luu ket qua :)) (nhung phai gan tat ca bang "0" (dung calloc) , vi ta dang can dung thuat toan duoi nay :))
			for(int i=d1-1;i>=0;i--){     // thuc hien phep '-'
				if(mang1[i]==mang3[i]){
					if(mang1[i]==48 && ketqua[i]==-1){
						ketqua[i]=9;
						ketqua[i-1]-=1;
					} 
					ketqua[i]+=0;
					//printf("\n%d",ketqua[i]);
				}
				else if(mang1[i]>mang3[i]){
					ketqua[i]+=mang1[i]-mang3[i];
					//printf("\n%d",ketqua[i]);
				}
				else{
					ketqua[i]+=(mang1[i]+10)-mang3[i];
					ketqua[i-1]-=1;        // nho '1' vao phep tinh tiep theo ben trai  :))
					//printf("\n%d",ketqua[i-1]);
				}
			}
			for(int i=0;i<d1;i++){
				if(ketqua[i] !=0 ){
					for(int j=i;j<d1;j++)
						printf("%d",ketqua[j]);
					break;      // duyet tu trai -> phai tim chu so dau tien khac "0" roi in tat ca sau do ra , va khong in cac so '=0' truoc no :))
				}
			}
			free(mang3);
			free(ketqua);
		}
		else if(d2>d1){  // neu so nao dai hon => lon hon :))
			int *mang3=(int *)calloc(d2,sizeof(int));
			for(int i=0;i<d2;i++){
				mang3[i]=48;                 // phai gan tat ca bang 48('0') thi moi dung :)), gan cho ban gkieu ti tru cho dung
			}
			int h=0;
			for(int i=d2-d1;i<d2;i++){
				mang3[i]=mang1[h];   // giongs hang sao cho cac phan tu cua mang 3 va mang 1 phai bang nhau(tinh tu phai trai ) de thuc hien "phep tru" , con may cai dau "dat bang 0 boi calloc"
				h++;
			}
			int *ketqua=(int *)calloc(d2,sizeof(int));     // mang luu ket qua :)) (nhung phai gan tat ca bang "0" (dung calloc) , vi ta dang can dung thuat toan duoi nay :))
			for(int i=d2-1;i>=0;i--){     // thuc hien '-'
				if(mang2[i]==mang3[i]){
					if(mang2[i]==48 && ketqua[i]==-1){  // cho nay la TH "rat dac biet " , neu mang2[i]=0(theo int ) va mang3[i]=0(theo int) va ketqua[i] dang =-1 :))
						ketqua[i]=9;
						ketqua[i-1]-=1;
					} 
					ketqua[i]+=0;
				}
				else if(mang2[i]>mang3[i]){
					ketqua[i]+=mang2[i]-mang3[i];
				}
				else{
					ketqua[i]+=(mang2[i]+10)-mang3[i];
					ketqua[i-1]-=1;        // nho '1' vao phep tinh tiep theo ben trai  :))
				}
			}
			for(int i=0;i<d2;i++){
				if(ketqua[i] !=0 ){
					for(int j=i;j<d2;j++)
						printf("%d",ketqua[j]);
					break;      // duyet tu trai -> phai tim chu so dau tien khac "0" roi in tat ca sau do ra , va khong in cac so '=0' truoc no :))
				}
			}
			free(mang3);
			free(ketqua);
		}
		else{         // neu d1=d2;
			int result=sosanh(mang1,mang2);
			if(result==1){  // neu mang1>mang2
				int *ketqua=(int *)calloc(d1,sizeof(int));     // mang luu ket qua :)) (nhung phai gan tat ca bang "0" (dung calloc) , vi ta dang can dung thuat toan duoi nay :))
				for(int i=d1-1;i>=0;i--){     // thuc hien phep '-'
					if(mang1[i]==mang2[i]){
						ketqua[i]+=0;
					}
					else if(mang1[i]>mang2[i]){
						ketqua[i]+=mang1[i]-mang2[i];
					}
					else{
						ketqua[i]+=(mang1[i]+10)-mang2[i];
						ketqua[i-1]-=1;        // nho '1' vao phep tinh tiep theo ben trai  :))
					}
				}
				for(int i=0;i<d1;i++){
					if(ketqua[i] !=0 ){
						for(int j=i;j<d1;j++)
							printf("%d",ketqua[j]);
						break;      // duyet tu trai -> phai tim chu so dau tien khac "0" roi in tat ca sau do ra , va khong in cac so '=0' truoc no :))
					}
				}
				free(ketqua);
			}
			else if(result==2){   // neu mang2 > mang1
				int *ketqua=(int *)calloc(d2,sizeof(int));     // mang luu ket qua :)) (nhung phai gan tat ca bang "0" (dung calloc) , vi ta dang can dung thuat toan duoi nay :))
				for(int i=d2-1;i>=0;i--){     // thuc hien '-'
					if(mang2[i]==mang1[i]){
						ketqua[i]+=0;
					}
					else if(mang2[i]>mang1[i]){
						ketqua[i]+=mang2[i]-mang1[i];
					}
					else{
						ketqua[i]+=(mang2[i]+10)-mang1[i];
						ketqua[i-1]-=1;        // nho '1' vao phep tinh tiep theo ben trai  :))
					}
				}
				for(int i=0;i<d2;i++){
					if(ketqua[i] !=0 ){
						for(int j=i;j<d2;j++)
							printf("%d",ketqua[j]);
						break;      // duyet tu trai -> phai tim chu so dau tien khac "0" roi in tat ca sau do ra , va khong in cac so '=0' truoc no :))
					}
				}
			free(ketqua);
			}
			else printf("0"); // neu mang1=mang2;
		}
		free(mang1);
		free(mang2);
		printf("\n\n");
	}
	return 0;
}
