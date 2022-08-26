#include <stdio.h>
#include <stdlib.h>

int main(){
	char continuar;
	char opcao; 
	bool passar; 
	passar = true;
	while(passar){
		
		printf("quer continuar? [s/n]");
		scanf("%s",&continuar );
		
		while(true){
			printf("voce que ser X ou O?")	;
			scanf("%s",&opcao);
			if(opcao != 'x' && opcao !='o'){
				printf("valor voce digitou uma letra que nao aceitamos");
			}else{
				break;
			}
		}
		/*print(" %s   |   %s   | %s  ",a11,a12,a13);
		#print("------------");
		#print(" %s   |  %s    | %s  ",a21,a22,a23);
		#print("------------");
		#print(" %s   |  %s    | %s  ",a31,a32,a33);
		*/
		
		
		
		
		if(continuar == 'n'){
			passar =false;
		}
		
		return 0;
	}
	
}

