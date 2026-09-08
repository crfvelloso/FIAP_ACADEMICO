#include <stdio.h>
#include <windows.h>

int opcao;
char nome[50];
float carga = 0.0;
int volta;
float desejado = -1;
float bateria = 0;
float tarifa = 0.5;
float batarifa;
float tempo;
float tempoh;
float cargausada;
float valorpago;
float tempor;
float temporh;

int main(){
    printf("=========================================\n");
    printf("          - INICIO DA SESSAO -           \n");
    printf("=========================================\n");
    printf("Qual o seu nome?\n");
    scanf("%s", &nome);
    printf("\nseja bem vindo, %s", nome);
    menu:
    fflush(stdin);
    printf("\n        - MENU -    \n");
    printf("1 - INICIO DA RECARGA\n");
    printf("2 - REGRAS DE TARIFACAO\n");
    printf("3 - INFORMACOES DE SESSAO\n");
    printf("4 - ENCERRAR SESSAO\n");
    scanf("%d", &opcao);
    if (opcao == 1){
        printf("Opcao selecionada: 1\n\n");
        if (bateria == 0){
            printf("Qual a capacidade da bateria do seu carro?\n");
            scanf("%f", &bateria);
        }else{
            printf("valor da bateria ja definido, continuando.");
        }
        desejo:
        printf("gostaria de recarregar ate quantos %%? \n");
        scanf("%f", &desejado);
        if (desejado > 100 || desejado < 0){
            printf("Erro! Insira um valor valido! (0 - 100)\n");
            goto desejo;
        }
        printf("- INICIANDO RECARGA\n");

        do {
            printf("STATUS DA CARGA:%.2f%%\n", carga);
            Sleep(100);
            carga++;
        }while (carga < (desejado + 1));
        printf("CARGA COMPLETA!\n");
        printf("\ngostaria de retornar ao menu?\n");
        printf("1 - voltar ao menu\n");
        scanf("%d", &volta);
        switch(volta){
            case 1: goto menu;
            default: break;
        }
    }else if (opcao == 2){
        printf("opcao selecionada: 2\n\n");
        printf("REGRAS DA TARIFACAO: 0.50 CENTAVOS POR kWH\n");
        // Estamos levando em conta o carregador de potencia 22kWH!
        printf("TEMPO DE RECARGA: 2 minutos e 44 segundos para cada 1kWH\n");
        colocou:
        if (bateria != 0){
            printf("Bateria do seu carro = %.2fkWH\n", bateria);
            printf("Tarifa = R$ 0.50\n");
            printf("2.44 minutos para cada 1kWH\n");
            batarifa = bateria * tarifa;
            tempo = 2.44 * bateria;
            if (tempo < 60){
                printf("Valor maximo pela carga completa = R$ %.2f\n", batarifa);
                printf("Tempo maximo para a carga completa = %.2f minutos.\n", tempo);
            }else{
                tempoh = tempo / 60;
                printf("Valor maximo pela carga completa = R$ %.2f\n", batarifa);
                printf("Tempo maximo para a carga completa = %.2f horas.\n", tempoh);

            }
        }else{
            printf("o valor da bateria do seu carro ainda nao foi definido!\n");
            printf("Insira a capacidade da sua bateria: \n");
            scanf("%f", &bateria);
            goto colocou;
        }
        printf("\ngostaria de retornar ao menu?\n");
        printf("1 - voltar ao menu\n");
        scanf("%d", &volta);
        switch(volta){
            case 1: goto menu;
            default: break;
        }

    }else if (opcao == 3){
        printf("opcao selecionada: 3\n\n");
        printf("=========================================\n");
        printf("        - INFORMACOES DE SESSAO -        \n");
        printf("=========================================\n");
        printf("Nome: %s.\n", nome);
        if (bateria == 0){
            printf("Capacidade da bateria: nao definida.\n");
        }else{
            printf("Capacidade da bateria: %.2f.\n", bateria);
        }
        if (desejado == -1){
            printf("Status da carga: 0%% (o carro nao foi carregado)\n");
        }else{
            printf("Status da carga: %.2f%%.\n", desejado);
        }
        if (desejado == 100){
            printf("kWH carregado: %.2f.\n", bateria);
        }else{
            cargausada = (bateria * desejado) / 100;
            printf("kWH carregado: %.2f\n", cargausada);
        }
        if (desejado == -1){
            printf("Valor pago: R$ 0 (carro nao foi carregado)\n");
        }else{
            cargausada = (bateria * desejado) / 100;
            valorpago = cargausada * tarifa;
            printf("Valor pago: R$ %.2f.\n", valorpago);
        }
        if (desejado == -1){
            printf("Tempo para a carga: 0 (o carro nao foi carregado)\n");
        }else{
            tempo = 2.44 * bateria;
            tempor = (tempo * desejado) / 100;
            if (tempor < 60){
                printf("Tempo para a carga: %.2f minutos.\n", tempor);
            }else{
                temporh = tempor / 60;
                printf("Tempo para a carga: %.2f horas.\n", temporh);
            }
        }
        printf("\ngostaria de retornar ao menu?\n");
        printf("1 - voltar ao menu\n");
        scanf("%d", &volta);
        switch(volta){
            case 1: goto menu;
            default: break;

        }
    }else if (opcao == 4){
        printf("opcao selecionada: 4 \n\n");
        printf("Encerrando sua sessao.\n");
        printf("Ate logo, %s!\n\n", nome);
        printf("GoodWe - Smart Energy Innovator\n");
        printf("===============================\n");
        return 0;
    }else{
        printf("ERRO - OPCAO SELECIONADA INVALIDA");
        printf("\ngostaria de retornar ao menu?\n");
        printf("1 - voltar ao menu\n");
        fflush(stdin);
        scanf("%d", &volta);
        switch(volta){
            case 1: goto menu;
            default: break;
        }  
    }
    return 0;
}
