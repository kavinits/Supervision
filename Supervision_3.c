#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	p=fopen("kavita.txt","a");
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
		fclose(p);	
	}
	
	
	printf("\n-------------------\n");
    p=fopen("kavita.txt","r");
    if(p=NULL)
    {
    	printf(" File not open");
    
	}
	else 
	{
		while(fgets(data,50,p)!=NULL)
		{
			printf("%s",data);
		}
		fclose(p);
		
	}
}
