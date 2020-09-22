#include "tadVetorProduto.h"

int main(int argc, char const *argv[]) {
    Vetor *vet, *clone;
    int i = 0;
    char s[100];

    Produto produto;
    Produto produto1 = {2030, "Teste produto", 1236.30};
    Produto produto2 = {6548, "Teste produto 2", 546.30};
    Produto produto3 = {8756, "Teste produto 3", 987.98};
    Produto produto4 = {356, "Teste produto 4", 951.15};

    // vet_importar ======================================================
    vet = vet_importar("lista_produtos.txt");

    // vet_criar =======================================================
    // vet = vet_criar(10);
    // printf("Tamanho do vetor: %d \n", vet->tamVetor);
    // printf("Quantidade de elementos: %d \n", vet->qtdeElementos);
    // puts("\n");

    // vet_inserirFim ==================================================
    printf("Resultado vet_inserirFim: %d \n", vet_inserirFim(vet, produto1));

    // vet_inserirFim ==================================================
    printf("Resultado vet_inserirFim: %d \n", vet_inserirFim(vet, produto2));

    // vet_inserir ======================================================
    printf("Resultado vet_inserir: %d\n", vet_inserir(vet, produto3, -3));

    // vet_substituir ======================================================
    printf("Resultado vet_substituir: %d\n", vet_substituir(vet, -2, produto4));

    // vet_removerPosicao ======================================================
    printf("Resultado vet_removerPosicao: %d\n", vet_removerPosicao(vet, -2, &produto));

    // vet_removerElemento ======================================================
    printf("Resultado vet_removerElemento: %d\n", vet_removerElemento(vet, produto2));

    // vet_tamanho ======================================================
    printf("Quantidade de elementos: %d\n", vet_tamanho(vet));

    // vet_elemento ======================================================
    printf("Resultado vet_elemento: %d\n", vet_elemento(vet, 9, &produto));

    // vet_posicao ======================================================
    printf("Resultado vet_posicao: %d\n", vet_posicao(vet, produto3));

    // // vet_toString ======================================================
    // printf("Resultado vet_toString: %d\n", vet_toString(vet, s));
    // printf("Array to string: %s\n\n", s);

    // // verifica_diminui ======================================================
    // verifica_diminui(vet);
    // vet_imprimir(vet);

    // vet_clone ======================================================
    clone = vet_clone(vet);
    // printf("Clone: \n");
    // vet_imprimir(clone);

    // vet_ordenarBuble ======================================================
    vet_ordenarBuble(vet);

    // vet_ordenarBuble ======================================================
    vet_ordenarInsertion(vet);

    // vet_buscaBinaria ======================================================
    printf("vet_buscaBinaria: %d\n", vet_buscaBinaria(clone, produto));

    // vet_exportar ======================================================
    vet_exportar(vet, "teste_novo.txt");

    // vet_criarAleatorio ======================================================
    // Vetor* vet_aleatorio = vet_criarAleatorio(10);
    // vet_imprimir(vet_aleatorio);

    // vet_criarAscendente ======================================================
    // Vetor* vet_ascendente = vet_criarAscendente(10);
    // vet_imprimir(vet_ascendente);

    // vet_criarDescendente ======================================================
    // Vetor* vet_descendente = vet_criarDescendente(10);
    // vet_imprimir(vet_descendente);

    // vet_criarAscendenteParcial ======================================================
    // Vetor* vet_parcial = vet_criarAscendenteParcial(10, 50);
    // vet_imprimir(vet_parcial);

    vet_imprimir(vet);

    // vet_destruir ======================================================
    vet_destruir(vet);


    return 0;
}
