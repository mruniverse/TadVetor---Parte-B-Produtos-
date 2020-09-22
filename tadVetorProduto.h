#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ENUM é tipo de dado definido pelo usuário que define uma variável que vai receber apenas um conjunto restrito de valores.
// Representa um conjunto de valores inteiros representados por identificadores.
typedef enum boolean{false=0, true=1} Boolean;

typedef struct{
	int codigo;
	char descricao[120];
	float preco;
}Produto;

// O comando typedef é usado para criar “sinônimo” ou um “alias” para tipos de dados existentes.
// TipoElemento e int são sinônimos a partir desta definição. Quando for necessário manipular outro tipo de dado, basta alterar essa definição.
typedef Produto TipoElemento;

static const TipoElemento EmptyStruct;

typedef struct{
	TipoElemento* array;
	int tamVetor;
	int qtdeElementos;
}Vetor;

/**
 * Cria e inicializa a struct Vetor.
 * RETORNO: endereço da struct Vetor criada e inicializada na memória HEAP
 */
Vetor* vet_criar(int tamVetor);

/**
 * Insere o elemento na última posição do vetor.
 * Parâmetro v: Ponteiro para a struct Vetor em que o elemento será inserido.
 * Parâmetro elemento: Elemento a ser inserido.
 * RETORNO: true se a inserção foi realizada com sucesso e false caso contrário
 */
Boolean vet_inserirFim(Vetor* v, TipoElemento elemento);

/**
 * Insere um elemento em uma determinada posição.
 * Parâmetro v: Ponteiro para a struct Vetor em que o elemento será inserido.
 * Parâmetro elemento: Elemento a ser inserido.
 * Parâmetro posicao: Posição em que o elemento deve ser inserido.
 * RETORNO: true se a inserção foi realizada com sucesso e false caso contrário
 */
Boolean vet_inserir(Vetor* v, TipoElemento elemento, int posicao);

/**
 * Substitui o valor de uma determinada posição do Vetor.
 * Parâmetro v: Ponteiro para a struct Vetor.
 * Parâmetro posicao: Posição a ser alterada.
 * Parâmetro novoElemento: elemento a ser atribuido na posição.
 * RETORNO: true se a alteração foi realizada com sucesso e false caso contrário
 */
Boolean vet_substituir(Vetor* v, int posicao, TipoElemento novoElemento);

/**
 * USANDO A ESTRATÉGIA DO SCANF
 * Remove o elemento de uma determinada posição do vetor .
 * Parâmetro v: Ponteiro para a struct Vetor.
 * Parâmetro posicao: posição a ser removida.
 * Parâmetro endereco: endereço a ser utilizado para a copiar o valor do elemento removido.
 * RETORNO: true se a inserção foi realizada com sucesso e false caso contrário
 */
Boolean vet_removerPosicao(Vetor* v, int posicao, TipoElemento* endereco);

/**
 * Remove um determinado elemento do vetor .
 * Parâmetro v: Ponteiro para a struct Vetor.
 * Parâmetro elemento: elemento a ser removido.
 * RETORNO: posição do elemento removido
 */
int vet_removerElemento(Vetor* v, TipoElemento elemento);

/**
 * Devolve a quantidade de elementos do vetor.
 * Parâmetro v: Ponteiro para a struct Vetor.
 * RETORNO: quantidade de elementos do vetor
 */
int vet_tamanho(Vetor* v);

/**
 * USANDO A ESTRATÉGIA DO SCANF
 * Pesquisa o elemento armazenado em uma determinada posição do Vetor.
 * Parâmetro v: Ponteiro para a struct Vetor.
 * Parâmetro posicao: posicao a ser encontrada.
 * Parâmetro saida: Endereço de memória onde a função deve armazenar o elemento encontrado.
 * RETORNO: Se a posição for válida, realiza a cópia no endereço recebido por parâmetro SAIDA e devolve true.
 *          Caso contrário, devolve false
 */
Boolean vet_elemento(Vetor* v, int posicao, TipoElemento* saida);

/**
 * Pesquisa a posição de um determinado elemento no Vetor.
 * Parâmetro v: Ponteiro para a struct Vetor.
 * Parâmetro elemento: elemento a ser procurado.
 * RETORNO: Se encontrado, devolve a posição do elemento no vetor; caso contrário devolve -1
 */
int vet_posicao(Vetor* v, TipoElemento elemento);

/**
 * Imprimir os elementos do vetor
 * Parâmetro v: Ponteiro para a struct Vetor.
 */
void vet_imprimir(Vetor* v);

/**
 * Destruir/Desalocar o vetor na memória HEAP
 * Parâmetro v: Ponteiro para a struct Vetor.
 */
void vet_destruir(Vetor* v);

/**
 * Escreve no endereço recebido por parâmetro uma versão string do vetor
 * Parâmetro v: Ponteiro para a struct Vetor.
 * Parâmetro endereco: endereço da região de memória onde a função deverá copiar os caracteres.
 * RETORNO: true se a cópia foi realizada com sucesso e false caso contrário
 */

Boolean vet_toString(Vetor* v, char* enderecoString);

/**
* Verifica e aumenta a capacidade de armazenamento de acordo com a quantidade de elementos
*/
void verifica_aumenta(Vetor* v);

/**
* Verifica e diminui a capacidade de armazenamento de acordo com a quantidade de elementos
*/
void verifica_diminui(Vetor* v);

/**
 * Cria um clone do vetor passado por parâmetro
 * Parâmetro v: Endereço da struct Vetor a ser clonado.
 * RETORNO: endereço da cópia da struct Vetor
 */
Vetor* vet_clone(Vetor* v);

/**
 * Ordena o vetor com o algoritmos bubble sort.
 * Parâmetro v: Ponteiro para a struct Vetor.
 */
void vet_ordenarBuble(Vetor* v);

/**
 * Ordena o vetor com o algoritmos selection sort.
 * Parâmetro v: Ponteiro para a struct Vetor.
 */
void vet_ordenarSelection(Vetor* v);

/**
 * Ordena o vetor com o algoritmos selection sort de forma decrescente.
 * Parâmetro v: Ponteiro para a struct Vetor.
 */
void vet_ordenarSelectionDesc(Vetor* v);

void vet_ordenarSelection_parcial(Vetor* v, int percentual);

/**
 * Ordena o vetor com o algoritmos insertion sort.
 * Parâmetro v: Ponteiro para a struct Vetor.
 */
void vet_ordenarInsertion(Vetor* v);

/**
 * Pesquisa a posicao do elemento n no vetor usando a estratégia de busca binária.
 * Parâmetro v: Ponteiro para a struct Vetor.
 * Parâmetro elemento: elemento a ser procurado.
 * RETORNO: Se encontrado, devolve a posição do elemento no vetor e -1 caso contrário
 */
int vet_buscaBinaria(Vetor* v, TipoElemento elemento);

/**
 * Faz a leitura do arquivo, criando e preenchendo o TAD vetor com o conteúdo contido no arquivo.
 * Parâmetro nomeArquivo: nome do arquivo
 * RETORNO: endereço da struct Vetor criada, caso não seja possível realizar a importação, devolve NULL
 */
Vetor* vet_importar(char* nomeArquivo);

/**
 * Faz a cópia dos elementos do vetor para um arquivo texto.
 * Parâmetro v: Ponteiro para a struct Vetor.
 * Parâmetro nomeArquivo: nome do arquivo a ser criado.
 * RETORNO: Se encontrado, devolve a posição do elemento no vetor e -1 caso contrário
 */
Boolean vet_exportar(Vetor* v, char* nomeArquivo);

/**
 * Cria o TAD com um tamanho específico e inicializa a estrutura preenchendo todas as posições com valores aleatórios.
 * Parâmetro tam: Tamanho do vetor / quantidade de elementos.
 * RETORNO: endereço da struct Vetor criada e inicializada
 */
Vetor* vet_criarAleatorio(int tam);

/**
 * Cria o TAD com um tamanho específico e inicializa a estrutura preenchendo todas as posições com valores ordenados de forma ascendente.
 * Parâmetro tam: Tamanho do vetor / quantidade de elementos.
 * RETORNO: endereço da struct Vetor criada e inicializada
 */
Vetor* vet_criarAscendente(int tam);

/**
 * Cria o TAD com um tamanho específico e inicializa a estrutura preenchendo todas as posições com valores ordenados de forma descendente.
 * Parâmetro tam: Tamanho do vetor / quantidade de elementos.
 * RETORNO: endereço da struct Vetor criada e inicializada
 */
Vetor* vet_criarDescendente(int tam);

/**
 * Cria e inicializa a struct Vetor com valores parcialmente ordenados.
 * Parâmetro tam: Tamanho do vetor / quantidade de elementos.
 * Parâmetro percentual: Percentual do vetor que deve estar ordenado.
 * RETORNO: endereço da struct Vetor criada e inicializada
 */
Vetor* vet_criarAscendenteParcial(int tam, int percentual);

//Converte a posicao negativa para uma inversa positiva
int negativeToPositive(Vetor* v, int posicao);

//Converte um numero inteiro para string ou char
char* itoa(int val, int base);

void shiftLeft(Vetor* v, int posicao);
