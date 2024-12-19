#include<stdio.h>
#include<stdlib.h>
void menu();
void nhap(int *arr , int *length);
void hien(int *arr , int length);
void dodai(int *arr , int length);
int total(int *arr , int length);
void solon(int *arr , int length);
int main()
{
	int length , arr[100];
	int traloi;
	int tong = 0 ;
	do
	{
		menu();
		printf("Lua chon cua ban :");
		scanf("%d",&traloi);
		switch(traloi)
		{
			case 1 :
				nhap(arr , &length);
				printf("\n");
				break;
			case 2 :
					
				//Hiển thị các phần tử trong mảng
				hien(arr , length);
				printf("\n");
				break ; 
			case 3 : 
				//Tính độ dài mảng
				
				dodai(arr , length);
				printf("\n");
				break ; 
			case 4 :
				//Tính tổng các phần tử trong mảng
				tong = total(arr , length);
				printf("Tong cac so trong mang : %d",tong);
				printf("\n");
				break ; 
			case 5 : 
				//Hiển thị phần tử lớn nhất
				solon(arr,length);
				printf("\n");
				break ; 
			case 6 :
				printf("Thoat.");
				break ; 
			default : 
				printf("Khong co lua chon nay ...");
		}
	}while(traloi!=6);


	
	
	
	return 0 ; 
}
void menu()
{
	printf("--------MENU--------\n");
	printf("1.Nhap so luong phan tu va gia tri phan tu .\n");
	printf("2.Hien thi mang. \n");
	printf("3.Do dai mang.\n");
	printf("4.tong cac phan tu trong mang.\n");
	printf("5.Hien thi phan tu lon nhat.\n");
	printf("6.Thoat.\n");	
}
void nhap(int *arr , int *length)
{
		printf("Moi ban nhap so luong phan tu : ");
		scanf("%d", length);
		printf("Moi ban nhap gia tri cac phan tu : \n");
		for(int i = 0 ; i < *length ; i++)
		{
			printf("arr[%d] = ",i);
			scanf("%d",&arr[i]);
		}
}
void hien(int *arr , int length)
{
	printf("In ra \n");
	for(int i = 0 ; i< length ; i++)
	{
		printf("%d ",arr[i]);
	}
}
void dodai(int *arr , int length)
{
	printf("Do dai cua chuoi la :");
	printf("%d",length);
}
int total(int *arr , int length)
{
	int tong = 0 ; 
	for(int i = 0 ; i < length ; i++)
	{
		tong += arr[i];
	}
	return tong ; 
}
void solon(int *arr , int length)
{
	printf("Phan tu lon nhat :");
	for(int i = 0 ; i < length ; i++)
	{
		for(int j = 1; j < length-1-i ; j++)
			{
				if(arr[j]>arr[j+1])
					{
						int temp = arr[j];
						arr[j] = arr[j+1];
						arr[j+1] = temp;
					}
			}
	}
	printf("%d",arr[length-1]);
}