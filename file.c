#include<stdlib.h>
#include<stdio.h>
int main()
{
	int num=0;
	FILE *fp=NULL;
    fp=	fopen("C:\\Users\\tiger10\\Documents\\input1.txt","r");
    if(fp==NULL)
    {
    	printf("Not created");
    	exit(1);
	}
	else
	{
	printf("created");
    }
    do{
    	num=	fgetc(fp);
	printf("%d\n",num);	
	}
    while(num!=EOF);

	return 0;
}
