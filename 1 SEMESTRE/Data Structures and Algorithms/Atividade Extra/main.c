//exercicio 1

int x = (2 + 3) * 4;

/* OPERACIONAL:
(2 + 3) = 5
5 * 4 = 20

RESULTADO:
x = 20

LOGICO:
Damos prioridade ao conteudo que está dentro do parenteses.
*/

//exercicio 2

int x = (2 + 3) * 4;

/* OPERACIONAL:
(2 + 3) = 5
5 * 4 = 20

RESULTADO:
x = 20

LOGICO:
Damos prioridade ao conteudo que está dentro do parenteses.
*/

//exercicio 3

float x = 10 / 3;

/*OPERACIONAL:
10/3 = 3.33

RESULTADO:
float x = 3.33

LOGICO:
10/3 dá um numero quebrado, por isso é utilizado float.
*/

//exercicio 4

float x = 10 / 3.0;

/*OPERACIONAL:
10/3.0 = 3.33

RESULTADO:
float x = 3.33

LOGICO:
Embora nesta conta o "3" esteja exibindo uma casa decimal "3.0",
o resultado continua o mesmo, porque 3 = 3.0
*/

//exercicio 5

float x = 10 / 3.0;

/*OPERACIONAL:
10/3.0 = 3.33

RESULTADO:
float x = 3.33

LOGICO:
Embora nesta conta o "3" esteja exibindo uma casa decimal "3.0",
o resultado continua o mesmo, porque 3 = 3.0
*/

//exercicio 6

int x = 5 + 7 / 2;

/*OPERACIONAL
7/2 = 3.5
5+3.5 = 8.5

RESULTADO:
8.5

LOGICO:
A divisão vem antes da soma, POREM, o tipo da variavel está errado,
foi declarado como int, e o resultado deu um numero quebrado, então, o
codigo não exibiria um resultado, apenas se for declarado como float.
*/

//exercicio 7

int x = 10>5;

/*OPERACIONAL:
10>5

RESULTADO:
Positivo

LOGICA:
o numero "10" é maior que o numero "5"
*/

//exercicio 8

int x = 10 == 5;

/*OPERACIONAL:
10 != 5

RESULTADO:
negativo

LOGICA:
10 é diferente de 5, porem, embora isso, a maquina vai salvar que a variavel
"x" significa 10 == 5.
*/

//exercicio 9

int x = (2 + 3) > (4 * 2);

/*OPERACIONAL:
(4 * 2) = 8
(2 + 3) = 5
5 > 8

RESULTADO:
incorreto

LOGICA:
quando há dois parenteses, damos prioridade à aquele que possui uma conta com
prioridade (multiplicação vem antes da soma)
*/

//exercicio 10

int x = 10 / 2 + (3 > 1);

 /*OPERACIONAL:
 (3 > 1)
 10/2 = 5
 
 RESULTADO:
 5 + (3 > 1)
 
 LOGICA:
 10/2 = 5, porem como não tem como fazer uma conta com o conteudo do parenteses,
a resposta final fica com ele por inteiro.
 */

 //exercicio 11

 int x = (5 > 3) * 10;

 /*OPERACIONAL:
 (5>3) *10
 
 RESULTADO:
 positivo
 
 LOGICA:
 como o (5>3) está dentro de um parenteses, não há conta a ser feita. por
 outro lado, se não existisse o parenteses, existiria conta e daria negativo,
 pois o resultado final seria 5>30.
  */

//exercicio 12

int x = (8 + 2) / (3 + 2);

/*OPERACIONAL:
(8+2) = 10
(3+2) = 5
10/5 = 2

RESULTADO:
2

LOGICA:
quando há dois parenteses com operações de valores correspondentes (no exercicio,
soma e soma) fazemos eles na ordem da conta (esquerda para direita).
*/

//exercicio 13 (não existe)

//exercicio 14

int x = (8 + 2) / 3 + 2;

/*OPERACIONAL:
(8+2) = 10
10/3 = 3.33
3.33 + 2 = 5.33

RESULTADO:
5.33

LOGICA:
damos prioridade ao parenteses, e depois, damos prioridade a divisão.
novamente o programa não exibiria nada pois a variavel foi declarada como
int, e o resultado foi um numero quebrado, sendo necessario ser declarado 
como float.
*/

//exercicio 15

int x = 5 / 2 * 2;

/*OPERACIONAL:
5/2 = 2.5
2.5 * 2 = 5

RESULTADO
5
LOGICA:
quando há duas operações de prioridades iguais (nesse caso, divisão e
multiplicação), fazemos na ordem da conta (esquerda para direita)
porem, a variavel é int, e tem um numero quebrado no meio da conta, então,
o valor final estaria incorreto.
*/

//exercicio 16

int x = (10 > 5) + (3 * 2);

/*OPERACIONAL:
3*2 = 6

RESULTADO:
(10>5) + 6

LOGICA:
prioridade ao parenteses, até a conta ficar irredutivel
*/

//exercicio 17

#include <stdio.h>
int a, b;
scanf("%d %d", &a, &b);
int x = a + b * 2;

/*OPERACIONAL:
O usuario tem que digitar o valor de A e B.
Considerando que A = 3 e B = 4:
4*2 = 8
3 + 8 = 11

RESULTADO:
11

LOGICA:
a multiplicação vem antes da soma.
*/

//exercicio 18

int idade;
scanf("%d", &idade);
int maior = idade >= 18

/*PERGUNTA:
se idade = 20 -> resultado?
maior, pois 20 >= 18

se idade = 15 -> resultado?
negativo, pois 15 > 18
*/
