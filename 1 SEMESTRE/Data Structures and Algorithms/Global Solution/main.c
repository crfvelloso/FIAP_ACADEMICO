#include <stdio.h>
#include <stdlib.h>

#define MAX_HISTORICO 100

typedef struct {
    float temperatura;
    float energia;
    int comunicacao;
} Registro;

Registro historico[MAX_HISTORICO];
int quantidade_historico = 0;

void esperar() {
    for (volatile int i = 0; i < 90000000; i++);
}

void inserirDados() {
    if (quantidade_historico >= MAX_HISTORICO) return;
    
    printf("\n--- Inserir Dados ---\n");
    
    printf("Temperatura: ");
    scanf("%f", &historico[quantidade_historico].temperatura);
    
    do {
        printf("Energia (0 a 100%%): ");
        scanf("%f", &historico[quantidade_historico].energia);
        if (historico[quantidade_historico].energia < 0 || historico[quantidade_historico].energia > 100) {
            printf("Entrada invalida. A energia deve estar entre 0 e 100.\n");
        }
    } while (historico[quantidade_historico].energia < 0 || historico[quantidade_historico].energia > 100);
    
    do {
        printf("Comunicacao (1 para OK, 0 para Falha): ");
        scanf("%d", &historico[quantidade_historico].comunicacao);
        if (historico[quantidade_historico].comunicacao != 0 && historico[quantidade_historico].comunicacao != 1) {
            printf("Entrada invalida. Digite 1 ou 0.\n");
        }
    } while (historico[quantidade_historico].comunicacao != 0 && historico[quantidade_historico].comunicacao != 1);
    
    quantidade_historico++;
    printf("Dados registrados com sucesso!\n");
}

void visualizarStatus() {
    if (quantidade_historico == 0) {
        printf("\nNenhum dado registrado no sistema.\n");
        return;
    }
    
    Registro ultimo = historico[quantidade_historico - 1];
    printf("\n--- Status Operacional Atual ---\n");
    printf("Temperatura: %.2f C\n", ultimo.temperatura);
    printf("Energia: %.2f%%\n", ultimo.energia);
    printf("Comunicacao: %d\n", ultimo.comunicacao);
}

void executarAnalise() {
    if (quantidade_historico == 0) {
        printf("\nSem dados para analisar.\n");
        return;
    }
    
    Registro ultimo = historico[quantidade_historico - 1];
    
    printf("\nExecutando analise de sistemas");
    for(int i = 0; i < 4; i++) {
        printf(".");
        esperar();
    }
    printf("\n");

    int alertas = 0;

    if (ultimo.temperatura > 80.0) {
        printf("[!] Alerta de superaquecimento\n");
        alertas++;
    }
    if (ultimo.energia < 20.0) {
        printf("[!] Economia de energia\n");
        alertas++;
    }
    if (ultimo.comunicacao == 0) {
        printf("[!] Falha de comunicacao\n");
        alertas++;
    }
    
    if (alertas == 0) {
        printf("Todos os sistemas operando dentro da normalidade.\n");
    }
}

void exibirHistorico() {
    if (quantidade_historico == 0) {
        printf("\nHistorico vazio.\n");
        return;
    }
    
    printf("\n--- Historico de Leituras ---\n");
    for (int i = 0; i < quantidade_historico; i++) {
        printf("Registro [%d] -> Temp: %.2f C | Energia: %.2f%% | Com: %d\n", 
               i + 1, historico[i].temperatura, historico[i].energia, historico[i].comunicacao);
    }
}

int main() {
    int opcao;
    
    do {
        printf("\n=== PAINEL DE CONTROLE DA MISSAO ===\n");
        printf("1. Inserir dados\n");
        printf("2. Visualizar status\n");
        printf("3. Executar analise\n");
        printf("4. Exibir historico\n");
        printf("5. Encerrar sistema\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
                inserirDados(); 
                break;
            case 2: 
                visualizarStatus(); 
                break;
            case 3: 
                executarAnalise(); 
                break;
            case 4: 
                exibirHistorico(); 
                break;
            case 5: 
                printf("\nEncerrando o sistema de monitoramento...\n"); 
                break;
            default: 
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 5);
    
    return 0;
}
