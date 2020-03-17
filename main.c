#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"

int main(int argc, char *argv[]) {
        int tarefa = atoi(argv[1]);
        switch(tarefa) {
            case 1: soma_elemento(); break;
            case 2: roda_esq(); break;
            case 3: remove_menores(); break;
            default: printf("Erro! Tarefa desconhecida: %d\n", tarefa);
        }

    return 0;
}
