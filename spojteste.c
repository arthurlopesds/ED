    #include <stdio.h>
    #include <stdlib.h>


    int main(){

    int num, preoI,preoF,posF,ioF,cont = 0;

    scanf("%i",&num);
    int arr[3][num];


    for(int i=0; i<3;i++){
     for(int j=0;j<num;j++){
       scanf("%i",&arr[i][j]);
       }
     }

    preoI = arr[0][0]; //atribui o primeiro n� do pr�-ordem
    preoF = arr[0][num-1]; //atribui o ultimo n� do pr�-ordem
    posF = arr[1][num-1]; //atribui o ultimo n� do p�s-ordem
    ioF = arr[2][num-1]; //atribui o �ltimo n� do in-ordem


    if(preoI == posF){ //se o Primeiro n� do pr�-ordem for igual ao ultimo n� do p�s-ordem
       cont++;
      }
     if(preoF == ioF){ //se o ultimo n� do pr�-ordem for igual ao ultimo n� do in-ordem
       cont++;
      }

     if(cont == 2){
       printf("yes\n");
            }
     else{
       printf("no\n");
        }

     return 0;

     }
