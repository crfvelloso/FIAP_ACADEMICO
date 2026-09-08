# Data Structures and Algorythms Global Solution
## Lógica do sistema
o sistema foi construído utilizando uma estrutura chamada Registro para agrupar as três informações fundamentais de cada leitura: temperatura, energia e comunicação. Um vetor chamado historico é utilizado para armazenar todas as leituras, assim, ele consegue manter um registro dos dados.
## Como funciona
a função principal controla o fluxo do programa através de uma estrutura de repetição que o mantém rodando continuamente até que o usuário escolha a opção de encerrar o sistema. Dentro desse laço, um menu direciona as ações para funções específicas com base na opção digitada utilizando o switch-case.
## Dados
As funções de inserção de dados possuem laços de validação que garantem que o usuário digite apenas valores aceitáveis, bloqueando porcentagens de energia menores que zero ou maiores que cem, além de restringir a comunicação apenas aos valores zero e um.
## Analise dos dados
A função executarAnalise pega a última leitura salva no histórico e aplica as regras da missão espacial. Se a temperatura for superior a oitenta, ela imprime um alerta de superaquecimento. Se a energia estiver abaixo de vinte, avisa sobre a economia de energia. E se o valor da comunicação for zero, acusa uma falha de comunicação. Essas três verificações são feitas de forma independente, permitindo que o painel mostre mais de um alerta ao mesmo tempo caso existam múltiplos problemas.
## Animação
Por fim, o sistema inclui uma função de espera que paralisa a execução por uma fração de segundo durante a análise, criando o efeito visual de uma animação de carregamento no terminal antes de exibir o resultado dos sensores.
## Membros
Guilherme Figueira Velloso - RM 568827

José Augusto Ribeiro Freire Mandrinato - RM 571151
