#include <stdio.h>
#include <conio.h>
int main()
{
	long long int t,n;
	int b,count=0;
	clrscr();
    scanf("%lld",&t);
    
    for(;t>0;t--){
	scanf("%lld",&n);

	while (n>0){
	b=n%10;
	if (b==4)
		count++;

	n=n/10;
    }

    printf("%d",count);
    count=0;
    }
    getch();
    return 0;
    }