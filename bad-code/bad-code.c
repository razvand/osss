#include<stdio.h>
#include <string.h>

int check_if_prime(int n)
{
int i;
  for(i=2;i<n/2;i++)
	if(n%i==0)
		return 0;
return 1;
}

int get_sum(int n)
{ int i, sum=0;
	for (i=1; i <=n; i++)
		sum=sum+i;
return sum;
}

main(){
  int extra; char *len="prime";
int num;
     int is_prime,i;
  for(i=0;i<10;i++){printf("Introduceti numar:");
	       scanf("%d", &num);
      is_prime=check_if_prime(num);
        if(is_prime)
            printf("is %s\n",len); else printf("is not %s\n",len);
     extra=get_sum(num);
   printf("sum (1..%d) is %d\n",num,extra);
 }
}
