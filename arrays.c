#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void soma_elemento();
void roda_esq();
int remove_menores();
void mem(int *arr, int dim, int valor);
void arrcpy(int dest[], int orig[],int dim);

void soma_elemento(){
    int d,id;
    printf("Insira a dimensao do array\n");
    scanf("%d",&d);
    int a[d];
    printf("Insira os elementos do array\n");
    for(int i=0;i<d;i++){
        scanf("%d",&a[i]);
    }
    printf("Insira o Indice\n");
    scanf("%d",&id);
    id--;
    id=a[id];
    for(int u=0;u<d;u++){
        a[u]=a[u]+id;
    }
    putchar('[');
    for(int i=0;i<d;i++){
        if (i<(d-1))
            printf("%d,",a[i]);
        else printf("%d",a[i]);
    }
    putchar(']'); putchar('\n');
}


void roda_esq(){
    int dim,shifter;
    printf("Insira a dimensao do array\n");
    scanf("%d",&dim);
    int a[dim],b[dim];
    printf("Insira os elementos do array\n");
    for(int i=0;i<dim;i++){
        scanf("%d",&a[i]);
    }
    printf("Insira o valor a rodar\n");
    scanf("%d",&shifter);
    arrcpy(b,a,dim);
    while (shifter>dim) {
        shifter = shifter - dim;
    }
    while (shifter<0){
        shifter = shifter + dim;
    }
    int x;
    for(int i=0;i<dim;i++){
        x=i-shifter;
        if (x<0)
            b[dim+x]=a[i];
        else b[x]=a[i];
    }
    putchar('[');
    for(int i=0;i<dim;i++){
        if (i<(dim-1))
            printf("%d,",b[i]);
        else printf("%d",b[i]);
    }
    putchar(']'); putchar('\n');
}

int remove_menores(){
    int dim,valor;
    printf("Insira a dimensao do array\n");
    scanf("%d",&dim);
    int arr[dim];
    printf("Insira os elementos do array\n");
    for(int i=0;i<dim;i++){
        scanf("%d",&arr[i]);
    }
    printf("Insira o valor mínimo\n");
    scanf("%d",&valor);
    mem(arr,dim,valor);
    return 0;
}

void mem(int *arr, int dim, int valor){
    int j=0,a[dim];
    for(int i=0;i<dim;i++){
        if (arr[i]>=valor) {
            a[j]=arr[i];j++;
        }
    }
    for(int i=0;i<dim;i++){
        if (arr[i]<valor){
            a[j]=arr[i]; j++;
        }
    }
    putchar('[');
    for(int i=0;i<dim;i++){
        if (i<(dim-1))
            printf("%d,",a[i]);
        else printf("%d",a[i]);
    }
    putchar(']'); putchar('\n');
}


void arrcpy(int dest[], int orig[],int dim){
    for(int i=0;i<dim;i++){
        dest[i]=orig[i];
    }
}
//
// Created by alexandre on 25/02/20.
//

#include "arrays.h"
