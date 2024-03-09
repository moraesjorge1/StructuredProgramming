#include <stdio.h>

int main()
{
    int j, k, l, contador, soma;
    char frasea[51];
    char fraseb[51];
    
    
gets(frasea);
gets(fraseb);

    contador = 0;
    soma = 0;
    
    for(k = 0; frasea[k] != '\0'; k++)
    {
        for(l = 0; fraseb[l] != '\0'; l++)
        {
        	if(frasea[k] == fraseb[l])
        		{
        			soma = 1;
        			if(frasea[k+1] == fraseb[l+1])
        				{
        				soma = 2;
        				
	        			if(frasea[k+2] == fraseb[l+2])
	        				{
	        				soma = 3;
	        				
		        			if(frasea[k+3] == fraseb[l+3])
		        				{
		        				soma = 4;
		        				
			        			if(frasea[k+4] == fraseb[l+4])
			        				{
			        				soma = 5;
			        				
				        			if(frasea[k+5] == fraseb[l+5])
				        				{
				        				soma = 6;
				        				
					        			if(frasea[k+6] == fraseb[l+6])
					        				{
					        				soma = 7;
					        				
						        			if(frasea[k+7] == fraseb[l+7])
						        				{
						        				soma = 8;
						        				
							        			if(frasea[k+8] == fraseb[l+8])
							        				{
							        				soma = 9;		
							        				}}}}}}}}
        		}
            if(soma > contador)
           		{
            		contador = soma;
            	}
        }
    }
    printf("%d\n", contador);

    
    return 0;
}