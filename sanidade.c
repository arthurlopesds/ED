#include <stdlib.h>
#include <stdio.h>

typedef struct leDado{
    unsigned long long ptrant,ptr,ptrprox;

}tLe;

typedef struct no{
    tLe dado;
    struct no *ant;
    struct no *prox;
}tNo;

typedef struct lista{
    int tamanho;
    struct no *inicio;
    struct no *fim;
} tLista;

void cria_lista(tLista *lista){
    lista->inicio=NULL;
    lista->fim = NULL;
    lista->tamanho=0;
}

int lista_vazia(tLista lista){
    if(lista.tamanho==0){
        return 1;
    }else{
        return 0;
     }
}
int insere(tLista *lista,tLe dado){

    tNo *nno,*p;

    nno = malloc(sizeof(tNo));
    if(nno==NULL){
        return 0;
    }
    nno->dado=dado;

    if((lista_vazia(*lista))){

        nno->prox=NULL;
        nno->ant=NULL;
        lista->inicio=nno;
        lista->fim=nno;


        }else{


        nno->prox=NULL;
        nno->ant=lista->fim;
        lista->fim->prox=nno;
        lista->fim=nno;


        }
        lista->tamanho++;
        return 1;

}

int posicao(tLista lista, tLe *valorcp, unsigned long long dado){

    tNo *p;
    p = lista.inicio;
    int n=1;
    if(!lista_vazia(lista)){
    while(p!=NULL){
        if(p->dado.ptr==dado){
            *valorcp=p->dado;
            break;
        }
        p= p->prox;
        n++;
    }
    }
    return 0;

}

tLe elemento (tLista lista, int pos){

tNo *p;
tLe element;

p = lista.inicio;

int n=1;

while((p!=NULL)&& (n<pos)){
    p=p->prox;
    n++;
}

element = p->dado;

return element;



}


int main(){

tLista lista;
tLe pt1,pt2,cp,info,buf;
int insana=1,sana=1;
cria_lista(&lista);

while(scanf("%llx %llx %llx", &info.ptr,&info.ptrant, &info.ptrprox) == 3){
    insere(&lista,info);
    }

pt1= elemento(lista,1);
pt2= elemento(lista,2);
buf= pt1;
while (buf.ptr != pt2.ptr){
    posicao(lista,&cp,buf.ptrprox);
    if (buf.ptr==cp.ptrant){
        buf=cp;
        sana = 1;
    } else{
        insana = 0;
        printf("insana\n");
        break;
    }

}
 if(sana == 1 && insana ==1){
 printf("sana\n");
 }
return 0;



}

