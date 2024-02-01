//entry controlled loop (pre test)
// entry controled loop
#include<stdio.h>
 int main()
{
	int n,a;
	printf("ENTER NUMBER OF PRINT TABLE: ");
	scanf("%d",&n);
	printf("%d:\n",n);
  a=1;
  // while(a<=10) // i am entry contolled loop and my friend for loop also entry contolled loop
  //   {
	// 	printf("%d*%d=%d\n",n,a,n*a);
  //   a++;
	// }
  do{ //i am exit contolled loop
    printf("%d*%d=%d\n",n,a,n*a);
    a++;
  }
  while(a<=10);
}


