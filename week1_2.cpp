#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void nhapMang(int n, int numbers[])
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &numbers[i]);
		fflush(stdin);
	}
}


int main(int argc, char * argv[])
{
	double width, height;
	
	if(argc != 3)
	{
		printf("So luong tham so khong hop le\n");
		return 1;
	}
	
	width = atof(argv[1]);
	height = atof(argv[2]);
	
	printf("Dien tich cua HCN la: %lf\n", width*height);
	printf("Chu vi cua HCN la: %lf\n", 2*(width + height));
	return 0;
}