#include <stdio.h>
int main()
{
	int n;
	int i=1;
	int j=1;
	scanf("%d",&n);
	for(j=1;j<=n;j++){                
		for(i=1;i<=j;i++){                  
		printf("%d*%d=%d\t",i,j,i*j);        
		if(i<j){                                                     
	    continue;                                  
		}                                        
	    if(i=j){                                  
	    	break;                              
		}
	  }
	printf("\n");
	i=1;
	}
	return 0;
}
