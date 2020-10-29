#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int tamanhoH=10000;

typedef struct rodada{
	int chave,ponts;
}atual;

atual rodadas[1001];

typedef struct pessoas{
	char nomes[33];
	int pontos,ganhador;
}jogadores;
jogadores eu[10001];

int chaves(char *nome){
	int i;
	long long int chave=0;
	for(i=0;i<strlen(nome);i++){
		chave+= nome[i]+i*4+i;
	}
	return chave%tamanhoH;
}

int main(){
	int i,j,x,p,chavee;
	char gente[33];
	scanf("%d", &x);
	for(j=0;j<tamanhoH;j++){
		eu[j].ganhador=-1;
	}

	for(i=0;i<x;i++){
		scanf(" %s %d",gente,&p);

		chavee =chaves(gente);

		while(1){
			if(eu[chavee].ganhador==-1){
				strcpy(eu[chavee].nomes, gente);
				eu[chavee].ganhador=0;
				eu[chavee].pontos=p;
				break;
			}
			else if(strcmp(eu[chavee].nomes, gente)!=0){
				chavee=(chavee+1)%tamanhoH;
			}
			else{
				eu[chavee].pontos+=p;
				break;
			}
		}

		rodadas[i].ponts = eu[chavee].pontos;
		rodadas[i].chave = chavee;


	}

	int maior=-1000000;

	for(i=0;i<tamanhoH;i++){
		if(eu[i].ganhador!=-1){
			if(eu[i].pontos>maior) maior=eu[i].pontos;
		}
	}

	for(i=0;i<tamanhoH;i++){
		if(eu[i].ganhador!=-1){
			if(eu[i].pontos == maior) eu[i].ganhador=1;
		}
	}

	for(i=0;i<x;i++){
		if(rodadas[i].ponts>=maior && eu[rodadas[i].chave].ganhador==1){
			printf("%s",eu[rodadas[i].chave].nomes);
			return 0;
		}
	}
	return 0;
}