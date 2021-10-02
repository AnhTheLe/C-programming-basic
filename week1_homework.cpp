#include <stdio.h>


int main(int argc, char * argv[])
{
	if(argc != 2)
	{
		printf("Du lieu dau vao khong chinh xac");
		return 0;
	}
	
	FILE * input = NULL;
	input = fopen(argv[1], "r+");
	
	if(input == NULL)
	{
		printf("Loi mo file %s \n", argv[1]);
		return 0;
	}
	
	int i = 1;
	char text[256];
	while(!feof(input))
	{
		fgets(text, 255, input);
		printf("%d %s", i, text);
		i++;
	}
	 
	return 0;
}