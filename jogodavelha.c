
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int MensagemWins(char jog){
    if(jog == 'x'){
        printf("\n/****************|\n");
        printf("/   O X venceu   |\n");
        printf("/****************|\n");
    }else if(jog == 'o'){
        printf("\n/*************************|\n");
        printf("/ A letra O foi o vencedor|\n");
        printf("/*************************|\n");
    }

}
int main(){
	char continuar;
	char opcao, opcaopc;
	int opcao1,opcao2;
	int contX =0,contO =0;
	int linha1,coluna1;
	int linha2,coluna2;
    int next=0;
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
						MensagemWins('x');
				}else if ((lista[0][0] == lista[0][1])&& (lista[0][0]== lista[0][2])&& (lista[0][0]== 'o')){
						MensagemWins('o');
		                contO +=1;

		        }else if ((lista[1][0] == lista[1][1]) && (lista[1][0]== lista[1][2]) && (lista[1][0] == 'x')){
                    MensagemWins('x');

			            contX +=1;

		        }else if ((lista[1][0] == lista[1][1]) && (lista[1][0]== lista[1][2]) && (lista[1][0] == 'o')){
						MensagemWins('o');

		                contO++;

		        }else if ((lista[2][0] == lista[2][1]) && (lista[2][0] == lista[2][2]) && (lista[2][0]== 'x')){
						MensagemWins('x');

			            contX +=1;
		        }else if((lista[2][0] == lista[2][1]) && (lista[2][0] == lista[2][2]) && (lista[2][0] == 'o')){
						MensagemWins('o');

		                contO +=1;

		    	}else if ((lista[0][0] == lista[1][0])&&(lista[0][0] == lista[2][0])&&(lista[0][0] == 'x')){
						MensagemWins('x');

		                contX +=1;
		        }else if ((lista[0][0] == lista[1][0])&&(lista[0][0] == lista[2][0])&&(lista[0][0] == 'o')){
						MensagemWins('o');

		                contO +=1;
		        }else if ((lista[0][1] == lista[1][1])&&(lista[0][1] == lista[2][1]) && (lista[0][1] == 'x')){
						MensagemWins('x');

		                contX +=1;
		        }else if ((lista[0][1] == lista[1][1])&&(lista[0][1] == lista[2][1]) && (lista[0][1] == 'o')){
						MensagemWins('o');

		                contO +=1;

		        }else if ((lista[0][2] == lista[1][2])&&(lista[0][2] == lista[2][2])&& (lista[0][2] == 'x')){
						MensagemWins('x');

			            contX +=1;
				}else if ((lista[0][2] == lista[1][2])&&(lista[0][2] == lista[2][2])&& (lista[0][2] == 'o')){
						MensagemWins('o');

		                contO +=1;
		        }else if ((lista[0][0] == lista[1][1])&&(lista[0][0] == lista[2][2]) && (lista[0][0] == 'x')){
						MensagemWins('x');

		                contX +=1;
		        }else if ((lista[0][0] == lista[1][1])&&(lista[0][0] == lista[2][2]) && (lista[0][0] == 'o')){
						MensagemWins('o');

		                contO +=1;
		        }else if ((lista[2][0] == lista[1][1])&& (lista[2][0] == lista[0][2])&&(lista[2][0] == 'x')){
						MensagemWins('x');

		                contX +=1;
		        }else if ((lista[2][0] == lista[1][1])&& (lista[2][0] == lista[0][2])&&(lista[2][0] == 'x')){
						MensagemWins('o');

		                contO +=1;
		        }


		        if (contX > next || contO >next){
		            printf("\nQuer continuar?[s/n] ");
		            scanf("%s",&continuar);
		            int l,c;

		            for(l=0; l<=3;l++){
                        for(c=0; c<=3;c++){
                            lista[l][c] = ' ';
                        }
                    }

                    next+=1;
		            if(continuar == 'n'){
		                break;
		            }
		        }
                system("cls");
                printf("\nO Jogador X ganhou %d |||O jogador O ganhou %d\n\n ",contX,contO);

				printf("\n\n\t\t %c | %c | %c  \n",lista[0][0],lista[0][1],lista[0][2]);
				printf("\t\t------------\n");
				printf("\t\t %c | %c | %c  \n",lista[1][0],lista[1][1],lista[1][2]);
				printf("\t\t------------\n");
				printf("\t\t %c | %c | %c\n\n\n",lista[2][0],lista[2][1],lista[2][2]);


                if (turno%2 ==0){
                    printf("\tQual a linha que voce quer[1-3]? ");
                    scanf("%d",&linha1);

                    printf("\tQual coluna voce quer[1-3]? ");
                    scanf("%d",&coluna1);



                    if((1<=linha1<=3) &&(1<=coluna1<=3)){
                        if (lista[linha1-1][coluna1-1] == ' '){
                            lista[linha1-1][coluna1-1] = opcao;
                            turno+=1;
                        }else{
                            system("cls");
                                 printf("/******************************************************|\n");
                                 printf("/                                                      |\n");
                                 printf("/             Essa casa ja foi ocupada                 |\n");
                                 printf("/                                                      |\n");
                                 printf("/******************************************************/\n");
                            sleep(10);
                        }

                    }else{
                       system("cls");
						 printf("/******************************************************|\n");
                         printf("/                                                      |\n");
                         printf("/             O valor digitado e invalido              |\n");
                         printf("/     Digite valores menores que 3 e maiores que 1     |\n");
                         printf("/                                                      |\n");
                         printf("/******************************************************/\n");
						sleep(10);
                    }



                }else{

                    linhapc =rand() %2;
                    colunapc =rand() %2;

                    while(1){
                        if((1<=linha1<=3) && (1<=coluna1<=3)){

                            if(lista[linhapc][colunapc]== ' '){
                                lista[linhapc][colunapc] = opcaopc;
                                turno+=1;
                                break;

                            }else{
                                linhapc =rand() %3;
                                colunapc =rand() %3;
                            }
                        }
                    }
                }
			}


		if(continuar == 'n'){
			break;
		}

}
		break;



	 	case 2:
	 	while(1){

		continuar = 's';
		 printf("/******************************************************|\n");
	     printf("/       Grupo:Luan Victor; Murilo Henrique;            |\n");
	     printf("/               Thiago Germano; Gabriel Figueiredo     |\n");
	     printf("/                                                      |\n");
	     printf("/                   Jogo da velha                      |\n");
		 printf("/                                                      |\n");
	     printf("/                                                      |\n");
	     printf("/       Esse modo o jogador1 ficar como o X            |\n");
	     printf("/                   por tanto jogador2 fica com o O    |\n");
	     printf("/******************************************************/\n");
	     getchar();

		opcao1 = 'x';
		opcao2 = 'o';

		while(1){
			/*quem ganha e quantas vezes ganharam*/
		        if ((lista[0][0] == lista[0][1])&& (lista[0][0]== lista[0][2])&& (lista[0][0]== 'x')){
						contX +=1;
						MensagemWins('x');



				}else if ((lista[0][0] == lista[0][1])&& (lista[0][0]== lista[0][2])&& (lista[0][0]== 'o')){
						MensagemWins('o');
		                contO +=1;

		        }else if ((lista[1][0] == lista[1][1]) && (lista[1][0]== lista[1][2]) && (lista[1][0] == 'x')){
						MensagemWins('x');
			            contX +=1;

		        }else if ((lista[1][0] == lista[1][1]) && (lista[1][0]== lista[1][2]) && (lista[1][0] == 'o')){
						MensagemWins('o');
		                contO++;

		        }else if ((lista[2][0] == lista[2][1]) && (lista[2][0] == lista[2][2]) && (lista[2][0]== 'x')){
						MensagemWins('x');
			            contX +=1;
		        }else if((lista[2][0] == lista[2][1]) && (lista[2][0] == lista[2][2]) && (lista[2][0] == 'o')){
						MensagemWins('o');
		                contO +=1;

		    	}else if ((lista[0][0] == lista[1][0])&&(lista[0][0] == lista[2][0])&&(lista[0][0] == 'x')){
						MensagemWins('x');
		                contX +=1;
		        }else if ((lista[0][0] == lista[1][0])&&(lista[0][0] == lista[2][0])&&(lista[0][0] == 'o')){
						MensagemWins('o');
		                contO +=1;
		        }else if ((lista[0][1] == lista[1][1])&&(lista[0][1] == lista[2][1]) && (lista[0][1] == 'x')){
						MensagemWins('x');

		                contX +=1;
		        }else if ((lista[0][1] == lista[1][1])&&(lista[0][1] == lista[2][1]) && (lista[0][1] == 'o')){
						MensagemWins('o');
		                contO +=1;

		        }else if ((lista[0][2] == lista[1][2])&&(lista[0][2] == lista[2][2])&& (lista[0][2] == 'x')){
						MensagemWins('x');
			            contX +=1;
				}else if ((lista[0][2] == lista[1][2])&&(lista[0][2] == lista[2][2])&& (lista[0][2] == 'o')){
						MensagemWins('o');
		                contO +=1;
		        }else if ((lista[0][0] == lista[1][1])&&(lista[0][0] == lista[2][2]) && (lista[0][0] == 'x')){
						MensagemWins('x');
		                contX +=1;
		        }else if ((lista[0][0] == lista[1][1])&&(lista[0][0] == lista[2][2]) && (lista[0][0] == 'o')){
						MensagemWins('o');
		                contO +=1;
		        }else if ((lista[2][0] == lista[1][1])&& (lista[2][0] == lista[0][2])&&(lista[2][0] == 'x')){
						MensagemWins('x');
		                contX +=1;
		        }else if ((lista[2][0] == lista[1][1])&& (lista[2][0] == lista[0][2])&&(lista[2][0] == 'x')){
						MensagemWins('o');
		                contO +=1;
		        }
		        if (contX > 0 || contO >0){
		            printf("\nQuer continuar?[s/n] ");
		            scanf("%s",&continuar);

		            int l,c;

                    for(l=0; l<=3;l++){
                        for(c=0; c<=3;c++){
                            lista[l][c] = ' ';
                        }
                    }



                    if(continuar == 'n'){
		                break;
		            }
		        }

                system("cls");
				printf("\n\n\t %c | %c | %c  \n",lista[0][0],lista[0][1],lista[0][2]);
				printf("\t------------\n");
				printf("\t %c | %c | %c  \n",lista[1][0],lista[1][1],lista[1][2]);
				printf("\t------------\n");
				printf("\t %c | %c | %c\n\n\n",lista[2][0],lista[2][1],lista[2][2]);

				if ((turno % 2) == 0){
					printf("O Jogador 1 sua vez \n\n\n");

					printf("Qual a linha que voce quer[1-3]? ");
					scanf("%d",&linha1);

					printf("Qual coluna voce quer[1-3]? ");
					scanf("%d",&coluna1);

					if ((1<=linha1<=3) &&(1<=coluna1<=3)){
						if (lista[linha1-1][coluna1-1] == ' ' ){
							lista[linha1-1][coluna1-1] = opcao1;
							turno++;
						}else {
								system("cls");
                                 printf("/******************************************************|\n");
                                 printf("/                                                      |\n");
                                 printf("/                                                      |\n");
                                 printf("/             Essa casa ja foi ocupada                 |\n");
                                 printf("/                                                      |\n");
                                 printf("/                                                      |\n");
                                 printf("/******************************************************/\n");
                                 sleep(2000);



						}
					}else{
					 	    system("cls");
							     printf("/******************************************************|\n");
                                 printf("/                                                      |\n");
                                 printf("/             O valor digitado e invalido              |\n");
                                 printf("/     Digite valores menores que 3 e maiores que 1     |\n");
                                 printf("/                                                      |\n");
                                 printf("/******************************************************/\n");
                           sleep(2000);
						}
			 }else{

			 	printf("O Jogador 2 sua vez \n\n\n");

					printf("Qual a linha que voce quer[1-3]? ");
					scanf("%d",&linha2);

					printf("Qual coluna voce quer[1-3]? ");
					scanf("%d",&coluna2);


				if(((1<=linha2)&&(linha2<=3)) &&((1<=coluna2)&&(coluna2<=3))){

					if (lista[linha2-1][coluna2-1] == ' '){
						lista[linha2-1][coluna2-1] = opcao2;
						turno++;

					}else{
						system("cls");
						printf("/******************************************************|\n");
                        printf("/                                                      |\n");
                        printf("/                                                      |\n");
                        printf("/             Essa casa ja foi ocupada                 |\n");
                        printf("/                                                      |\n");
                        printf("/                                                      |\n");
                        printf("/******************************************************/\n");
                        sleep(2000);

                        }
			 	}else{
			 		system("cls");
						 printf("/******************************************************|\n");
                         printf("/                                                      |\n");
                         printf("/             O valor digitado e invalido              |\n");
                         printf("/     Digite valores menores que 3 e maiores que 1     |\n");
                         printf("/                                                      |\n");
                         printf("/******************************************************/\n");
						sleep(2000);


				}
			 }


		}


		return 0;
	}
	break;

	 	default:
        printf ("Valor invalido!\n");
	 }



}
