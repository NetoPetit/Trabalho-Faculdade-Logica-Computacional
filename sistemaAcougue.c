#include <stdio.h> //biblioteca de entrada e saída
#include <stdlib.h> //biblioteca de funções

int main(void)//função que inicia o programa
{
    //declarações de variáveis e seus tipos
    int tipoCarne; //variável tipo int
    float estoque, quilos, custoProduto, vendaProduto, valorVenda, imposto, valorLiquido, // variaveis que serao ultilizadas no sistema
    lucro, estoqueAtual, valorCusto, taxa; //variáveis tipo float                                              
    
    printf("======================================================\n");
    printf("||SISTEMA DE CONSULTA DE VENDAS E ESTOQUE DE ACOUGUE|| \n"); // print principal do sistema aonde o usuario selecionara o tipo de carne
    printf("======================================================\n");// que ele deseja consomuir dando 3 opcoes
    printf("\n");//pula linha
    printf("TIPOS DE CARNES: \n\n 1 - Bovina \n 2 - Suina \n 3 - Ave \n");//opções a serem escolhidas
    printf("\n");//pula linha
    printf("Escolha o numero do tipo de carne que deseja consultar: ");//pergunta ao usuário
    scanf("%d", &tipoCarne); // inicia a prompt para o usuario final selecionar o tipo de carne e seta o valor na variavel
    printf("\n");//pula linha
    
        if (tipoCarne == 1) // se o usuario selecionar 1 o mesmo e direcionado para a seguinte coluna, aonde e iniciado a producao
        {
            printf("==============================\n"); 
            printf("||VOCE ESCOLHEU CARNE BOVINA||\n"); // Mensagem apos a selecao e set da variavel
            printf("==============================\n");
            printf("\n");//pula linha
            printf("Quantos quilos o seu estoque de carne Bovina tinha ?\n");//pergunta para o usuário
            scanf("%f", &estoque);// Prompt aonde o usuario final vai setar o valor do estoque
            printf("Quantos quilos de carne Bovina voce vendeu ?\n");//pergunta para o usuário
            scanf("%f", &quilos);// prompt que aonde o usuario final seta o valor  vendido de carne bovina

                if (quilos > estoque)//se inserir mais quilos que o disponivel no estoque o sistema se encerra, caso esteja tudo certo o programa continua
                {
                    printf("\n");//pula linha
                    printf("Operacao invalida! Valor maior que o estoque! Reinicie o sitema!\n");//aviso para o usuário que ele inseriu dados inválidos
                    system ("PAUSE");//para o programa
                }

            printf("Qual foi o valor de custo do quilo do seu produto ?\n");//Mensagem de solicitacao para o prompt
            scanf("%f", &custoProduto);// set da varavel custoProduto
            printf("Qual foi o valor de venda do quilo do seu produto ?\n");//Mensagem de solicitacao para o prompt
            scanf("%f", &vendaProduto);// set da variavel vendaproduto
            printf("Qual foi a Taxa paga de imposto?\n");//
            scanf("%f", &taxa);//set da variavel taxas
            printf("\n");//pula linha

        }
// segue a mesma logica no codigo abaixo, mesmos sets de variaveis do bloco acima
        if (tipoCarne == 2)
        {
            printf("=============================\n");
            printf("||VOCE ESCOLHEU CARNE SUINA||\n");
            printf("=============================\n");
            printf("\n");
            printf("Quantos quilos o seu estoque de carne Suina tinha ?\n");
            scanf("%f", &estoque);
            printf("Quantos quilos de carne Suina voce vendeu ?\n");
            scanf("%f", &quilos);

                if (quilos > estoque)//se inserir mais quilos que o disponivel no estoque o sistema se encerra
                {
                    printf("\n");
                    printf("Operacao invalida! Valor maior que o estoque! Reinicie o sitema!\n");
                    system("PAUSE");
                }

            printf("Qual foi o valor de custo do quilo do seu produto ?\n");
            scanf("%f", &custoProduto);
            printf("Qual foi o valor de venda do quilo do seu produto ?\n");
            scanf("%f", &vendaProduto);
            printf("Qual foi a Taxa paga de imposto?\n");
            scanf("%f", &taxa);
            printf("\n");


        }
// segue a mesma logica no codigo abaixo, mesmos sets de variaveis do bloco acima
        if (tipoCarne == 3)
        {
            printf("==============================\n");
            printf("||VOCE ESCOLHEU CARNE DE AVE||\n");
            printf("==============================\n");
            printf("\n");
            printf("Quantos quilos o seu estoque de carne de Ave tinha ?\n");
            scanf("%f", &estoque);
            printf("Quantos quilos de carne de Ave voce vendeu ?\n");
            scanf("%f", &quilos);
            
                if (quilos > estoque)//se inserir mais quilos que o disponivel no estoque o sistema se encerra
                {
                    printf("\n");
                    printf("Operacao invalida! Valor maior que o estoque! Reinicie o sitema!\n");
                    system("PAUSE");
                }

            printf("Qual foi o valor de custo do quilo do seu produto ?\n");
            scanf("%f", &custoProduto);
            printf("Qual foi o valor de venda do quilo do seu produto ?\n");
            scanf("%f", &vendaProduto);
            printf("Qual foi a Taxa paga de imposto?\n");
            scanf("%f", &taxa);
            printf("\n");

        }
    // Resultado final da coleta de informacoes e suas saídas

    printf("=========================\n");
    printf("||RESULTADO DA CONSULTA||\n");//imprime na tela que são os dados da consulta
    printf("=========================\n");
    printf("\n");

    valorCusto = (custoProduto * quilos);// realiza a multiplicacao para chegar no valor de custo totals
    valorVenda = (vendaProduto * quilos);  //  realiza a multiplicacao para chegar no valor de venda
    imposto = (valorVenda / 100) * taxa;// tras o resultado do valor da taxa 
    valorLiquido = (valorVenda - imposto);// mostra o valor valor de venda - o imposto colocado
    lucro = (valorLiquido - valorCusto);//tras o lucro obtido 
    estoqueAtual = (estoque - quilos);// tras o valor atual do estoqu
    
    printf("Seu imposto e de %2.2f%%\n", taxa);//imprime a variavel taxa
    printf("Seu valor de custo foi R$%2.2f\n", valorCusto);// imprime o valor de custo
    printf("O valor da sua venda bruta foi de R$%2.2f\n", valorVenda);//Imprime o valor bruto de venda
    printf("Voce pagou de imposto R$%2.2f\n", imposto);//imprime o valor do imposto liquidado
    printf("Valor da receita liquida com descontos R$%2.2f\n", valorLiquido);//valor recebido ja com descontos
    printf("Seu lucro e de R$%2.2f\n", lucro);// lucroo obtido pelo empreendedor
    printf("Seu estoque era de %2.2fKG\n", estoque);// faz a conta e tras o estoque atual
    printf("Voce retirou do seu estoque %2.2fKG\n", quilos);// valor removido do estoque
    printf("Seu estoque atual e: %2.2fKG\n", estoqueAtual);// Tras a quantidade de produto atual
    printf("\n");

        if (tipoCarne < 1 || tipoCarne > 3) // caso o valor selecionado for inexistente ele encerra a consulta
        {
        printf("Codigo inexistente! Reinicie o sitema!\n");//aviso para o usuário
        printf("\n");//pula linha
        }

    printf("======================\n");
    printf("||FIM DA CONSULTA!!!||\n");//indica o fim da consulta
    printf("======================\n");

    system("PAUSE");//para o programa
}