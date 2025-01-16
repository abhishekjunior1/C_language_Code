#include<stdio.h>
main()
{
	int rn[5], x;
	FILE *fp;
	fp=fopen("qqq.txt","r");
	for(x=0; x<3;x++)
	{
	fread(&rn[x],sizeof(rn[x]),3,fp);
	printf("\nTHE %d STUDENT REG. NO. : ",x+1);
	printf("%d",rn[x]);
	}
	fclose(fp);
}
