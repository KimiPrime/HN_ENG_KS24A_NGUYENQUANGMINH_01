#include <stdio.h>
int main(){
	int arr[100];
	int size;
	int i;
	int type;
	int check=0;
	int sum;
	do{
	i=0;
	printf("\t MENU \n");
	printf("1.  nhap so phan tu va gia tri trong mang \n");
	printf("2.  in ra cac phan tu trong mang \n");
	printf("3.  tim gia tri lon nhat va gia tri nho nhat trong mang \n");
	printf("4.  in ra tong cac phan tu trong mang  \n");
	printf("5.  them 1 phan tu vao cuoi bang \n");
	printf("6.  xoa phan tu tai  1 vi tri cu the \n");
	printf("7.  sap xep mang theo thu tu giam dan \n");
	printf("8.  tim kiem phan tu co ton tai trong mang khong \n");
	printf("9.  in ra toan bo so nguyen to trong mang \n");
	printf("10. sap xep mang theo thu tu tang dan \n");
	printf("11. thoat \n");
	printf("nhap lua chon cua ban vao day ");
	scanf("%d",&type);
	switch(type){
  	case 1:
        		do{
					printf("moi ban nhap so phan tu  ");
					scanf("%d",&size);
					if(size<=0){
						printf("gia tri khong thao mang");
					}
				}while(size<=0 || size>=100);
					for(int i=0;i<size;i++){
							printf("moi ban nhap vi tri [%d] ",i);
							scanf("%d",&arr[i]);
					}

			break;
    case 2:
		printf("cac gia tri cua mang\n");
			for(int i=0;i<size;i++){
				printf("arr[%d]=%d\n",i,arr[i]);
						}
			break;
	case 3:
	if(size<=0){
				printf("moi ban nhap gia tri vao mang");
					break;
				}else{
					int max=arr[0];
					for(int i=0;i<size;i++){
						if(arr[i]>max){
							max=arr[i];
					}	
				}
				printf("phan tu lon nhat cua mang la %d\n",max);
				int min=arr[size-1];
				for(int i=size-1;i>=0;i--){
					if(arr[i]<min){
					min=arr[i];
						}	
					}
				printf("phan tu nho nhat cua mang la %d",min);
					}
			break;
	case 4:
		 
	break;
/*	case 5:
	break;
/*	case 6:
	break;
	case 7:
	break;
	case 8:
	break;
	case 9:
	break;
	case 10:
	break;
} */

}
	}while(type!=11);

	return 0;
}
