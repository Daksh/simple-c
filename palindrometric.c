#include <stdio.h>
int reverse(int n);
int main(){
	
		long long int t,l,r,sum=0,rev;
    	
    	scanf("%lld",&t);
    	for(;t>0;t--){
    		
    		scanf("%lld %lld",&l,&r);

    		for(;l<=r;l++){
    			rev=reverse(l);     /*match number with its reverse*/
    			if(rev==l)
    				sum=sum+l;
    		}
    		printf("%lld",sum);
    	}
    		return 0;

}

int reverse(n){
 	int rev=0;
	while (n>0){
			rev=(10*rev)+(n%10);
	        n=n/10;
	    }
	return rev;

}

