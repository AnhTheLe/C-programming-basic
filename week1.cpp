#include <stdio.h>
const int ALPHABET_LEN = 26;


void nhapMang(int n, int numbers[])
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &numbers[i]);
		fflush(stdin);
	}
}

void reverse()
{
	int i, A[10];
	printf("please enter 10 numbers: ");
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &A[i]);
		fflush(stdin);
	}
	
	printf("numbers in reversed order: \n");
	for(int i = 9; i >= 0; i--)
	{
		printf("%d\n", A[i]);
	}
}

void xoaPhanTuTrung()
{
	int n = 0;
	int numbers[1000];
	
	printf("Nhap so phan tu cua mang: ");
	fflush(stdin);
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &numbers[i]);
	}
	
	for (int i = 0; i < n - 1; i++)
	{
    	int j = i + 1;
    	while (j < n)
    	if (numbers[i] == numbers[j])
		{
        	for (int k = j; k < n - 1; k++) 
				numbers[k] = numbers[k + 1];
    		n--;
    	}
    	else 
			j++;
    }
    
    n--;
    
	printf("\nMang sau khi xoa la:\n");
	for (int i = 0; i < n + 1; i++) 
	{
		printf(" %d ", numbers[i]);
	}
	
}

bool soSanh2Mang()
{
	int n = 0;
	int numbers1[1000];
	int numbers2[1000];
	printf("Nhap so phan tu cua mang: ");
	fflush(stdin);
	scanf("%d", &n);
	
	printf("Nhap mang thu 1: \n");
	nhapMang(n, numbers1);
	
	printf("Nhap mang thu 2: \n");
	nhapMang(n, numbers2);
	
	for(int i = 0; i < n; i++)
	{
		if(numbers1[i] != numbers2[i])
		{
			return false;
		}
	}
	
	return true;
}

void lettersTime()
{
	int i = 0;
	int count[ALPHABET_LEN] = {0};
	char c = '\0';
	printf("Input a line of text: \n");
	c = getchar();
	while(c != '\n' && c >= 0)
	{
		if(c <= 'z' && c >= 'a')
			++count[c - 'a'];
		
		if(c <= 'Z' && c >= 'A')
			++count[c - 'A'];
		
		c = getchar();
	}
	
	for(int i = 0; i < ALPHABET_LEN; i++)
	{
		if(count[i] > 0)
		{
			printf("The letter '%c' appears %d times(s). \n", 'a' + i, count[i]);
		}
	}
}

int compare_arrays()
{
	int n = 0;
	int numbers[1000];
	printf("Nhap so phan tu cua mang: ");
	fflush(stdin);
	scanf("%d", &n);
	
	printf("Nhap mang thu: \n");
	nhapMang(n, numbers);
	
	for(int i = 0; i < n - 1; i++)
	{
		if(numbers[i] != numbers[i +1])
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	printf("Ket qua so sanh: %d", compare_arrays());
	return 0;
}