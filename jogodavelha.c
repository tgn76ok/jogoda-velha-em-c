
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	char continuar;
	char opcao, opcaopc; 
	int opcao1,opcao2;
	int contX =0,contO =0;
	int linha1,coluna1;
	int linhapc,colunapc;
	int opc;
	int turno;
	char lista[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '},};
        
        
        printf("/******************************************************|\n");
     printf("/       Grupo:Luan Victor; Murilo Henrique;            |\n");
     printf("/               Thiago Germano; Gabriel Figueiredo     |\n");
     printf("/                                                      |\n");
     printf("/                   Jogo da velha                      |\n");
	 printf("/                                                      |\n");
     printf("/                                                      |\n");
     printf("/       Quer jogar contra a maquina digite 1,          |\n");
     printf("/        se quer contra um amigo digite 2.             |\n");
     printf("/******************************************************/\n");
	 printf(">>>");
	 scanf("%i",&opc);
	 
	 switch(opc)
	 {
	 	case 1:
	 		while(1){
		
		continuar = 's';
		
		while(1){
			printf("voce que ser X ou O?");
			scanf("%s",&opcao);
			if(opcao != 'x' && opcao !='o'){
				printf("valor voce digitou uma letra que nao aceitamos");
			}else{
				break;
			}
		}
		
		if(opcao == 'x'){
			opcaopc ='o';
		}else{
			opcaopc ='x';
		}

		while(1){ 
			/*quem ganha e quantas vezes ganharam*/
		        if ((lista[0][0] == lista[0][1])&& (lista[0][0]== lista[0][2])&& (lista[0][0]== 'x')){
						contX +=1;
						printf("o X venceu");
				
				}else if ((lista[0][0] == lista[0][1])&& (lista[0][0]== lista[0][2])&& (lista[0][0]== 'o')){
						printf("a letra o venceu");
		                contO +=1;
		            
		        }else if ((lista[1][0] == lista[1][1]) && (lista[1][0]== lista[1][2]) && (lista[1][0] == 'x')){
			        	printf("o X venceu");
			            contX +=1;
		            
		        }else if ((lista[1][0] == lista[1][1]) && (lista[1][0]== lista[1][2]) && (lista[1][0] == 'o')){
		                printf("a letra o venceu");
		                contO++;
		        	
		        }else if ((lista[2][0] == lista[2][1]) && (lista[2][0] == lista[2][2]) && (lista[2][0]== 'x')){
			        	printf("o X venceu");
			            contX +=1;
		        }else if((lista[2][0] == lista[2][1]) && (lista[2][0] == lista[2][2]) && (lista[2][0] == 'o')){
		                printf("a letra o venceu");
		                contO +=1;
		            
		    	}else if ((lista[0][0] == lista[1][0])&&(lista[0][0] == lista[2][0])&&(lista[0][0] == 'x')){
		                printf("o X venceu");
		                contX +=1;
		        }else if ((lista[0][0] == lista[1][0])&&(lista[0][0] == lista[2][0])&&(lista[0][0] == 'o')){
		                printf("a letra o venceu");
		                contO +=1;
		        }else if ((lista[0][1] == lista[1][1])&&(lista[0][1] == lista[2][1]) && (lista[0][1] == 'x')){
		        	    printf("o X venceu");
		                contX +=1;
		        }else if ((lista[0][1] == lista[1][1])&&(lista[0][1] == lista[2][1]) && (lista[0][1] == 'o')){
		                printf("a letra o venceu");
		                contO +=1;
		            
		        }else if ((lista[0][2] == lista[1][2])&&(lista[0][2] == lista[2][2])&& (lista[0][2] == 'x')){
						printf("o X venceu");
			            contX +=1;
				}else if ((lista[0][2] == lista[1][2])&&(lista[0][2] == lista[2][2])&& (lista[0][2] == 'o')){
		                printf("a letra o venceu");
		                contO +=1;
		        }else if ((lista[0][0] == lista[1][1])&&(lista[0][0] == lista[2][2]) && (lista[0][0] == 'x')){
		                printf("o X venceu");
		                contX +=1;
		        }else if ((lista[0][0] == lista[1][1])&&(lista[0][0] == lista[2][2]) && (lista[0][0] == 'o')){
		                printf("a letra o venceu");
		                contO +=1;
		        }else if ((lista[2][0] == lista[1][1])&& (lista[2][0] == lista[0][2])&&(lista[2][0] == 'x')){
		                printf("o X venceu");
		                contX +=1;
		        }else if ((lista[2][0] == lista[1][1])&& (lista[2][0] == lista[0][2])&&(lista[2][0] == 'x')){
		                printf("a letra o venceu");
		                contO +=1;
		        }
		        if (contX > 0 || contO >0){
		            printf("\nQuer continuar?[s/n] ");
		            scanf("%s",&continuar);
		            char lista[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '},};
		            if(continuar == 'n'){
		                break;
		            }
		        }
		        printf("%d|| %d \n\n", contX,contO);
				
				system("cls");
				printf("\n\n\t %c | %c | %c  \n",lista[0][0],lista[0][1],lista[0][2]);
				printf("\t------------\n");
				printf("\t %c | %c | %c  \n",lista[1][0],lista[1][1],lista[1][2]);
				printf("\t------------\n");
				printf("\t %c | %c | %c\n\n\n",lista[2][0],lista[2][1],lista[2][2]);
				
				
				
				printf("Qual a linha que voce quer[1-3]? ");
				scanf("%d",&linha1);
				
				printf("Qual coluna voce quer[1-3]? ");
				scanf("%d",&coluna1);
				
				if (lista[linha1-1][coluna1-1] == ' '){
					lista[linha1-1][coluna1-1] = opcao;
				}else if((1>=linha1>=3) &&(1>=coluna1>=3)){
					continue;
				}else{
					printf("o valor digitado e invalido, digite valores menores que 3 e maiores que 1");
					system("cls");
					
				}
			
				linhapc =rand() %2;
				colunapc =rand() %2;
				
				while(1){
					if(lista[linhapc][colunapc]== ' '){
						lista[linhapc][colunapc] = opcaopc;
						break;
					}else if((1>=linha1>=3) && (1>=coluna1>=3)){
						continue;
					}else{
						linhapc =rand() %3;
					    colunapc =rand() %3;
					}
				}
			}
		
		
		if(continuar == 'n'){
			break;
		}
		
		
		return 0;	
	}
		break;
		
		
		
	 	case 2:
	 		while(1){
		char k;
		continuar = 's';
		 printf("/******************************************************|\n");
	     printf("/       Grupo:Luan Victor; Murilo Henrique;            |\n");
	     printf("/               Thiago Germano; Gabriel Figueiredo     |\n");
	     printf("/                                                      |\n");
	     printf("/                   Jogo da velha                      |\n");
		 printf("/                                                      |\n");
	     printf("/                                                      |\n");
	     printf("/       Esse modo o jogador1 ficar como o x            |\n");
	     printf("/                   por tanto jogador2 fica com o o    |\n");
	     printf("/******************************************************/\n");
	     printf("digite qualquer coisa:)");
		scanf("%s",&k);
		opcao1 = 'x';
		opcao2 = 'o';
		

		while(1){ 
			/*quem ganha e quantas vezes ganharam*/
		        if ((lista[0][0] == lista[0][1])&& (lista[0][0]== lista[0][2])&& (lista[0][0]== 'x')){
						contX +=1;
						printf("o jogador 1 venceu");
						char lista[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '},};
				
				}else if ((lista[0][0] == lista[0][1])&& (lista[0][0]== lista[0][2])&& (lista[0][0]== 'o')){
						printf("o jogador 2 venceu");
		                contO +=1;
		            
		        }else if ((lista[1][0] == lista[1][1]) && (lista[1][0]== lista[1][2]) && (lista[1][0] == 'x')){
			        	printf("o jogador 1 venceu");
			            contX +=1;
		            
		        }else if ((lista[1][0] == lista[1][1]) && (lista[1][0]== lista[1][2]) && (lista[1][0] == 'o')){
						printf("o jogador 2 venceu");
		                contO++;
		        	
		        }else if ((lista[2][0] == lista[2][1]) && (lista[2][0] == lista[2][2]) && (lista[2][0]== 'x')){
			        	printf("o jogador 1 venceu");
			            contX +=1;
		        }else if((lista[2][0] == lista[2][1]) && (lista[2][0] == lista[2][2]) && (lista[2][0] == 'o')){
						printf("o jogador 2 venceu");
		                contO +=1;
		            
		    	}else if ((lista[0][0] == lista[1][0])&&(lista[0][0] == lista[2][0])&&(lista[0][0] == 'x')){
		                printf("o jogador 1 venceu");
		                contX +=1;
		        }else if ((lista[0][0] == lista[1][0])&&(lista[0][0] == lista[2][0])&&(lista[0][0] == 'o')){
						printf("o jogador 2 venceu");
		                contO +=1;
		        }else if ((lista[0][1] == lista[1][1])&&(lista[0][1] == lista[2][1]) && (lista[0][1] == 'x')){
		        	    printf("o jogador 1 venceu");
		                contX +=1;
		        }else if ((lista[0][1] == lista[1][1])&&(lista[0][1] == lista[2][1]) && (lista[0][1] == 'o')){
						printf("o jogador 2 venceu");
		                contO +=1;
		            
		        }else if ((lista[0][2] == lista[1][2])&&(lista[0][2] == lista[2][2])&& (lista[0][2] == 'x')){
						printf("o jogador 1 venceu");
			            contX +=1;
				}else if ((lista[0][2] == lista[1][2])&&(lista[0][2] == lista[2][2])&& (lista[0][2] == 'o')){
						printf("o jogador 2 venceu");
		                contO +=1;
		        }else if ((lista[0][0] == lista[1][1])&&(lista[0][0] == lista[2][2]) && (lista[0][0] == 'x')){
		                printf("o jogador 1 venceu");
		                contX +=1;
		        }else if ((lista[0][0] == lista[1][1])&&(lista[0][0] == lista[2][2]) && (lista[0][0] == 'o')){
						printf("o jogador 2 venceu");
		                contO +=1;
		        }else if ((lista[2][0] == lista[1][1])&& (lista[2][0] == lista[0][2])&&(lista[2][0] == 'x')){
		                printf("o jogador 1 venceu");
		                contX +=1;
		        }else if ((lista[2][0] == lista[1][1])&& (lista[2][0] == lista[0][2])&&(lista[2][0] == 'x')){
						printf("o jogador 2 venceu");
		                contO +=1;
		        }
		        if (contX > 0 || contO >0){
		            printf("\nQuer continuar?[s/n] ");
		            scanf("%s",&continuar);
		            char lista[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '},};
		            if(continuar == 'n'){
		                break;
		            }
		        }
		        printf("%d|| %d \n\n", contX,contO);
				
				system("cls");
				printf("\n\n\t %c | %c | %c  \n",lista[0][0],lista[0][1],lista[0][2]);
				printf("\t------------\n");
				printf("\t %c | %c | %c  \n",lista[1][0],lista[1][1],lista[1][2]);
				printf("\t------------\n");
				printf("\t %c | %c | %c\n\n\n",lista[2][0],lista[2][1],lista[2][2]);
				
				if (turno % 2 == 0){
					printf("jogador 1 sua vez \n\n\n");
				
					printf("Qual a linha que voce quer[1-3]? ");
					scanf("%d",&linha1);
					
					printf("Qual coluna voce quer[1-3]? ");
					scanf("%d",&coluna1);
				
				if (lista[linha1-1][coluna1-1] == ' '){
					lista[linha1-1][coluna1-1] = opcao1;
					turno++;
				}else if((1>=linha1>=3) &&(1>=coluna1>=3)){
					continue;
				}else{
					printf("o valor digitado e invalido, digite valores menores que 3 e maiores que 1");
					system("cls");
					
				}
			 }else{	
			 	printf("jogador 2 sua vez \n\n\n");
				
					printf("Qual a linha que voce quer[1-3]? ");
					scanf("%d",&linha1);
					
					printf("Qual coluna voce quer[1-3]? ");
					scanf("%d",&coluna1);
				
				if (lista[linha1-1][coluna1-1] == ' '){
					lista[linha1-1][coluna1-1] = opcao2;
					turno++;
				}else if((1>=linha1>=3) &&(1>=coluna1>=3)){
					continue;
				}else{
					printf("o valor digitado e invalido, digite valores menores que 3 e maiores que 1");
					system("cls");
					
				}
			 	
			 }
				

			}
		
		
		return 0;	
	}
		
	 	default:
        printf ("Valor invalido!\n");	 		
	 }        
        
        
        
}
