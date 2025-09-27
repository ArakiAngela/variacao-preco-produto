#include <stdio.h>
#include <string.h> // Inclusão de bibliotecas (pré-processador)
int main() { // Função principal do programa

char nome_produto[50]; // declarando variáveis 
float preco_anterior;
float preco_atual;
float variacao;
char situacao[50];


  printf("Informe o nome do produto:\n"); // Informando os dados
  scanf("%s", nome_produto); // Recebendo os dados informados

  printf("Informe o preço do produto no mês anterior:\n");
  scanf("%f", &preco_anterior);
  
  printf("Informe o preço do produto no mês atual:\n");
  scanf("%f", &preco_atual);

  variacao = ((preco_atual - preco_anterior) / preco_anterior) * 100; // Calculo para resultado

  if(variacao > 0){ // Definindo as condições para que a situação saia correta 
    strcpy(situacao, "AUMENTO"); // informando que na variável ai ficar guardado esse texto se a condição for um sucesso 
} else if (variacao < 0){
	strcpy(situacao, "QUEDA");
} else if (variacao == 0){
	strcpy(situacao, "ESTÁVEL");
}

printf("Nome do Produto: %s \n Preço anterior: %.2f \n Preço atual: %.2f \n Variação: %.2f \n Situação: %s \n", nome_produto, preco_anterior, preco_atual, variacao, situacao);

  return 0;// Retorno ao sistema operacional
}


/* pseudocódigo

INÍCIO

    // Declaração de variáveis
    CARACTERE nome_produto
    REAL preco_anterior
    REAL preco_atual
    REAL variacao
    CARACTERE situacao

    ESCREVA "Informe o nome do produto:"
    LEIA nome_produto

    ESCREVA "Informe o preço do produto no mês anterior:"
    LEIA preco_anterior

    ESCREVA "Informe o preço do produto no mês atual:"
    LEIA preco_atual

    variacao ← ((preco_atual - preco_anterior) / preco_anterior) * 100

    SE variacao > 0 ENTÃO
        situacao ← "AUMENTO"
        SE variacao > 10 ENTÃO
            // A situação já é "AUMENTO", podemos adicionar mais detalhes
            // ou criar uma nova variável para "abuso"
        FIM SE
    SENÃO SE variacao < 0 ENTÃO
        situacao ← "QUEDA"
    SENÃO
        situacao ← "ESTÁVEL"
    FIM SE

    ESCREVA "" // Linha em branco para organizar a saída
    ESCREVA "Nome do Produto: ", nome_produto
    ESCREVA "Preço anterior: ", preco_anterior
    ESCREVA "Preço atual: ", preco_atual
    ESCREVA "Variação: ", variacao, "%"
    ESCREVA "Situação: ", situacao

FIM
