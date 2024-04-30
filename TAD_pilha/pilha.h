typedef struct Pilha Pilha;
typedef struct No No;

Pilha* cria_pilha(void);
int pilha_pop(Pilha *p);
void pilha_push(Pilha *p, int x);
void imprime_no(No *no);
void imprime(Pilha* pilha);
