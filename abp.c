#include <stdio.h>
#include <stdlib.h>

int contador = 0,i=0;
typedef struct no{
  int conteudo;
  struct no *esq;
  struct no *dir;
}tNo;

typedef tNo *tAbp; 



void cria (tAbp *T) {
	*T = NULL;
}


int vazia (tAbp T) {
    if (T == NULL)
        return 1;
    else
        return 0;
}


tNo *busca(tNo *T, int dado) {

	if (T == NULL)
		return NULL;  /* Arvore Vazia*/

	if(T->conteudo == dado){
		return T; /*Elem. encontrado na raiz*/
	}

	if (dado < T->conteudo){
		return busca(T->esq, dado);
    }
    else{
		return busca(T->dir, dado);
    }
}


void exibe (tAbp T){
	if (T != NULL) {
		exibe(T->esq);
		printf("%d   ", T->conteudo);
		exibe(T->dir);
	}
}

int insere(tAbp *T, int dado){

	tNo *nNo, *aux;
	aux = *T;
	if (vazia(*T)){
		nNo = malloc(sizeof(tNo));
		if (nNo == NULL)
			return 0;

		nNo->conteudo = dado;
		nNo->esq = NULL;
		nNo->dir = NULL;
		*T = nNo;
		return 1;

	}
    contador++;

    if (dado == aux->conteudo){
		return 0;
	}
	else if (dado > aux->conteudo){

		return insere(&aux->dir, dado);

	}
	else if(dado < aux->conteudo){

		return insere(&aux->esq, dado);

	}

}

int main(){
    tAbp arv, arv2;
    tAbp no;
    int num = 1, nums[100];
    cria(&arv);

    while(num != 0){
    scanf("%i",&num);
        insere(&arv,num);
        nums[i] = contador;
        i++;
    }
    printf("\n");
for(int j=0 ;j<i;j++){
    printf("%i\n",nums[j]);
}



return 0;
}
