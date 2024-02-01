#include<stdio.h>
 int main()
{
	int arr[10],a,se,mi,li,fi=0;
	printf("ENTER ARRAY ELEMENTS:");
	for(a=0;a<10;a++)
	scanf("%d",&arr[a]);
	printf("ENTER ELEMENT TO SEARCH:");
	scanf("%d",&se);
	printf("\nNOW BINARY SEARCH EXECUTES: ");
	for(a=0;a<10;a++)
	{
		mi=(fi+li)/2;
	if(arr[mi]==se)
	{
		printf("\n%d IS AT INDEX: %d",arr[mi],mi);
		break;
		}	
		else if(arr[mi]>se)
		
		     li=mi-1;
		else
		    fi=mi+1;
	}
}
//deletion operation     
//sorting 
//
//               