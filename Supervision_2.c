#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	p=fopen("Kavita.txt","w");
	if(p=NULL)
	{
		printf("File not open");
	}
	else
	{
		printf("enter data:-");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
    	printf("File open successfully");	
	}
	
	fclose(p);
	
}

