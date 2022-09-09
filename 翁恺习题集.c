#include <stdio.h>
int main()
{
	int i=1;
	int j=1;
	int n;
    scanf("%d",&n);
	while(j<=n){               
		while(i<=j){             
		printf("%d*%d=%d\t",i,j,i*j);     
	    if(i<j){                          
	    i++;                            
	    continue;                       
		}                              
	    if(i=j){                       
	    	break;                        
		}
	  }
	printf("\n");
	j++;
	i=1;
	}
	
	return 0;
}













