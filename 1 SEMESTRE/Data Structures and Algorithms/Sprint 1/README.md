# Data Structure And Algorythms
Professor: Erick Toshio Yamamoto

Sprint 01

Problema:
Construir um programa em C que simule:

Início e fim de sessão de recarga
Controle básico de energia
Registro de dados da sessão
Aplicação de regras simples de cobrança

# EXPLICAÇÃO DA LÓGICA
O nosso código em C é um simulador interativo de uma estação de recarga para veículos elétricos. Ele coleta informações do usuário e do veículo, simula o processo de carregamento da bateria e calcula custos e tempo de recarga com base em regras tarifárias pré-definidas.

## Inicialização e Variáveis Globais:

Todas as variáveis importantes (nome, capacidade da bateria, tarifa, tempo, etc.) são declaradas no escopo global. Isso significa que elas mantêm seus valores durante toda a execução do programa e podem ser acessadas e modificadas por qualquer parte do código. A tarifa de carregamento é fixada em R$ 0.50 por kWh, um valor médio com base em estações reais.

O programa começa limpando a tela (visualmente através de formatação de texto), pede o nome do usuário e o recebe utilizando o scanf.

## Sistema de Menu e Navegação
A estrutura principal do programa não utiliza um laço convencional (como while ou do-while) para manter o menu ativo. Em vez disso, a lógica de repetição e navegação é construída através de labels (marcadores) e do comando goto.

menu: Marca o início da exibição das opções.

Sempre que o usuário termina de ler as informações de uma opção, o sistema pergunta se deseja voltar. Se a resposta for 1, o comando goto menu; redireciona a execução de volta para a tela inicial.

A função fflush(stdin) é utilizada antes de exibir o menu para limpar o buffer do teclado e evitar que o programa pule a leitura de dados e entre em loops infinitos.

## Lógica das Opções do Menu
Opção 1: Início da Recarga
Verificação de Bateria: Checa se a capacidade da bateria já foi inserida (bateria == 0). Se não, pede o valor em kWh.
Validação de Entrada: Pergunta a porcentagem desejada de carga (0 a 100). Utiliza o goto desejo; para forçar o usuário a digitar novamente caso insira um valor inválido.
Simulação de Carga: Usa um laço do-while aliado à função Sleep(100) da biblioteca <windows.h>. Ele pausa a execução por 100 milissegundos a cada iteração, simulando uma carga real, sem exibir do 0 - 100% de uma vez, incrementando visualmente a variável carga no console até atingir o percentual desejado.

Opção 2: Regras de Tarifação
Mostra ao usuário as taxas fixas: R$ 0.50 por kWh e 2,44 minutos para carregar 1 kWh (considerando um carregador de 22kW da GoodWe).
Se a capacidade da bateria ainda não foi informada, o programa exige essa informação usando o loop goto colocou:.
Cálculos:
Custo Máximo = Bateria Total * Tarifa (0.50).
Tempo Máximo = Bateria Total * 2.44 minutos.
Se o tempo total ultrapassar 60 minutos, a lógica divide o valor por 60 para exibir a estimativa em horas. Deixando o programa mais limpo.

Opção 3: Informações da Sessão
Esta seção serve como um recibo ou painel de status do usuário. A lógica verifica a variável desejado (que começa em -1) para determinar se uma recarga já ocorreu ou não.
Se o carro não foi carregado (desejado == -1): Informa que o status é 0%, o custo é R$ 0 e o tempo é 0.
Se o carro foi carregado:
Calcula os kWh consumidos: (bateria * desejado) / 100.
Calcula o valor gasto multiplicando os kWh consumidos pela tarifa.
Calcula o tempo exato consumido utilizando a taxa de 2,44 minutos por kWh e converte para horas se o tempo passar de 60 minutos.

Opção 4: Encerrar Sessão

Exibe uma mensagem de despedida utilizando o nome inserido no início.
O comando return 0; é chamado para finalizar imediatamente a execução do programa e fechar o console.
# MEMBROS
Guilherme Figueira Velloso - RM 568827

José Augusto Ribeiro Freire Manfrinato - RM 571151

Lais da Silva Dias - RM 569943

João Augusto Poloniato Telles - RM 571443

Thiago Soalheiro Diamantino - RM 569316

Kauan Damasceno de Lima - RM 573727
