#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	p=fopen("Kavita.txt","r");
	if(p=NULL)
	{
		printf("File not open");
	}
	else
	{
    	printf("File open successfully");	
	}
	while(fgets(data,50,p)!=NULL)
	{
		printf("%s,data");
	}
	fclose(p);
	
}

