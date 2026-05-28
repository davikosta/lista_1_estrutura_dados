#include <stdio.h>
#include <locale.h>

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
    //printf("Digite o tamanho da lista:\n");
    scanf("%d", &n);
    if(n < MAX) {
        return n;
    }
    
}

int obtemP() {
    int p;
    //printf("Digite a posição que deseja inserir:\n");
    scanf("%d", &p);
    return p;
}

int obtemX() {
    int x;
    //printf("Digite o valor a ser inserido:\n");
    scanf("%d", &x);
    return x;
}

void inicializaLista(TipoLista *lista, int n) {
    lista->tamanho = n;

    //printf("Insira a lista de N:\n");
    for (int i = 0; i < lista->tamanho; i++)
    {
        scanf("%d", &lista->Item[i].chave);
    }
    
}

void insereLista(TipoLista *lista, int p, int x) {

    if(p <= lista->tamanho && p > 0) {
        for(int i = lista->tamanho; i >= p; i--) {
            lista->Item[i].chave = lista->Item[i-1].chave;
        }
        lista->Item[p-1].chave = x;
        lista->tamanho++;

        for(int i = 0; i < lista->tamanho; i++) {
            printf("%d\n", lista->Item[i].chave);
        }
    } else {
        printf("Lista esta cheia ou posicao inválida\n");
    }
}

void exibeLista(TipoLista *lista) {
    
}



int main() {
    setlocale(LC_ALL, "Portuguese");
    
    TipoLista lista;

    inicializaLista(&lista, obtemN());

    insereLista(&lista, obtemP(), obtemX());

    return 0;
}