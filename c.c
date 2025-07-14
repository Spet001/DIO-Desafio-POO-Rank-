#include <stdio.h>  
#include <string.h> 
#include <stdlib.h>

// Definindo uma estrutura para representar o Herói
// Isso é o mais próximo de uma "classe" em C ele agrupa dados
typedef struct {
    char nome[50]; // Array de caracteres para o nome (string)
    int idade;
    char tipo[20]; // Array de caracteres para o tipo (guerreiro, mago, etc.)
} Heroi;

// Função para simular o método "atacar"
// Recebe um ponteiro para a estrutura Heroi
void atacar(Heroi *heroi) {
    char ataque[50]; 

    
    if (strcmp(heroi->tipo, "mago") == 0) {
        strcpy(ataque, "magia"); 
    } else if (strcmp(heroi->tipo, "guerreiro") == 0) {
        strcpy(ataque, "espada");
    } else if (strcmp(heroi->tipo, "monge") == 0) {
        strcpy(ataque, "artes marciais");
    } else if (strcmp(heroi->tipo, "ninja") == 0) {
        strcpy(ataque, "shuriken");
    } else {
        strcpy(ataque, "um ataque indefinido");
    }

    
    printf("O %s atacou usando %s\n", heroi->tipo, ataque);
}

int main() {
    Heroi meuHeroi; // Declara uma variável do tipo Heroi finge ser "um objeto"

    // --- Seletor de Classes com scanf ---

    printf("Digite o nome do heroi: ");
    scanf("%49s", meuHeroi.nome); 

    printf("Digite a idade do heroi: ");
    scanf("%d", &meuHeroi.idade);

    printf("Escolha o tipo do heroi (mago, guerreiro, monge, ninja): ");
    scanf("%19s", meuHeroi.tipo); 




    printf("\n--- Informacoes do Heroi ---\n");
    printf("Nome: %s\n", meuHeroi.nome);
    printf("Idade: %d\n", meuHeroi.idade);
    printf("Tipo: %s\n", meuHeroi.tipo);

   
    printf("\n--- Acao do Heroi ---\n");
    atacar(&meuHeroi);

    
     system("pause"); 
    printf("\nPressione Enter para sair...");
    getchar(); 
    getchar(); 

    
}