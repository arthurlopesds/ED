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

    preoI = arr[0][0]; //atribui o primeiro nó do pré-ordem
    preoF = arr[0][num-1]; //atribui o ultimo nó do pré-ordem
    posF = arr[1][num-1]; //atribui o ultimo nó do pós-ordem
    ioF = arr[2][num-1]; //atribui o último nó do in-ordem


    if(preoI == posF){ //se o Primeiro nó do pré-ordem for igual ao ultimo nó do pós-ordem
       cont++;
      }
     if(preoF == ioF){ //se o ultimo nó do pré-ordem for igual ao ultimo nó do in-ordem
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
