#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	int i;
	char name[20],post[20];
	printf("Enter the name, post ");
	for(i=0;i<3;i++)
	{
		scanf("%s%s",&name[i],&post[i]);
	}
	fp=fopen("mkp.txt","r");
	fprintf(fp,"%s%s",name,post);
	fclose(fp);

	
	
}
