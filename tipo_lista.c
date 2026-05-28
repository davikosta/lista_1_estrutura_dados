#include <stdio.h>

#define MAX 100

typedef struct {
    int chave;
} TipoItem;

typedef struct {
    TipoItem Item[MAX];
    int tamanho;
} TipoLista;

int obtemN() {
    int n;
    printf("Insira o tamanho da lista");
    scanf("%d", &n);
    return n;
}

void inicializaLista(TipoLista *lista) {
    lista->tamanho = obtemN();

    printf("Insira a lista de N");
    for (int i = 0; i < lista->tamanho; i++)
    {
        scanf("%d", &lista->Item[i].chave);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d", lista->Item[i].chave);
    }
    
}



int main() {
    
    TipoLista lista;

    inicializaLista(&lista);

    return 0;
}