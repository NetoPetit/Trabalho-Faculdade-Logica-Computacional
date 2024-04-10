#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>

int main(void)
{
    int tipoCarne;
    float estoque, quilos, custoProduto, vendaProduto, valorVenda, imposto, valorLiquido,
    lucro, estoqueAtual, valorCusto, taxa;
    
    //setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("======================================================\n");
    printf("||SISTEMA DE CONTROLE DE VENDAS E ESTOQUE DE ACOUGUE|| \n");
    printf("======================================================\n");
    printf("\n");
    printf("TIPOS DE CARNES: \n\n 1 - Bovina \n 2 - Suina \n 3 - Ave \n");
    printf("\n");
    printf("Escolha o numero do tipo de carne que deseja consultar: ");
    scanf("%d", &tipoCarne);
    printf("\n");
    
        if (tipoCarne == 1)
        {
            printf("==============================\n");
            printf("||VOCE ESCOLHEU CARNE BOVINA||\n");
            printf("==============================\n");
            printf("\n");
            printf("Quantos quilos o seu estoque de carne Bovina tinha ?\n");
            scanf("%f", &estoque);
            printf("Quantos quilos de carne Bovina voce vendeu ?\n");
            scanf("%f", &quilos);

                if (quilos > estoque)//se inserir mais quilos que o disponivel no estoque o sistema se encerra
                {
                    printf("\n");
                    printf("Operacao invalida! Valor maior que o estoque! Reinicie o sitema!\n");
                    return 0;
                }

            printf("Qual foi o valor de custo do quilo do seu produto ?\n");
            scanf("%f", &custoProduto);
            printf("Qual foi o valor de venda do quilo do seu produto ?\n");
            scanf("%f", &vendaProduto);
            printf("Qual foi a Taxa paga de imposto?");
            scanf("%f", &taxa);
            printf("\n");

            printf("=========================\n");
            printf("||RESULTADO DA CONSULTA||\n");
            printf("=========================\n");
            printf("\n");

            valorCusto = (custoProduto * quilos);
            valorVenda = (vendaProduto * quilos);
            imposto = (valorVenda / 100) * taxa;
            valorLiquido = (valorVenda - imposto);
            lucro = (valorLiquido - valorCusto);
            estoqueAtual = (estoque - quilos);

            printf("Seu imposto e de %2.2f%%\n", imposto);
            printf("Seu valor de custo foi R$%2.2f\n", valorCusto);
            printf("O valor da sua venda bruta foi de R$%2.2f\n", valorVenda);
            printf("Voce pagou de imposto R$%2.2f\n", imposto);
            printf("Valor da receita liquida com descontos R$%2.2f\n", valorLiquido);
            printf("Seu lucro e de R$%2.2f\n", lucro);
            printf("Seu estoque era de %2.2fKG\n", estoque);
            printf("Voce retirou do seu estoque %2.2fKG\n", quilos);
            printf("Seu estoque atual e: %2.2fKG\n", estoqueAtual);
            printf("\n");
        }

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
                    return 0;
                }

            printf("Qual foi o valor de custo do quilo do seu produto ?\n");
            scanf("%f", &custoProduto);
            printf("Qual foi o valor de venda do quilo do seu produto ?\n");
            scanf("%f", &vendaProduto);
            printf("Qual foi a Taxa paga de imposto?");
            scanf("%f", &taxa);
            printf("\n");

            printf("=========================\n");
            printf("||RESULTADO DA CONSULTA||\n");
            printf("=========================\n");
            printf("\n");

            valorCusto = (custoProduto * quilos);
            valorVenda = (vendaProduto * quilos);
            imposto = (valorVenda / 100) * taxa;
            valorLiquido = (valorVenda - imposto);
            lucro = (valorLiquido - valorCusto);
            estoqueAtual = (estoque - quilos);

            printf("Seu imposto e de %2.2f%%\n", imposto);
            printf("Seu valor de custo foi R$%2.2f\n", valorCusto);
            printf("O valor da sua venda bruta foi de R$%2.2f\n", valorVenda);
            printf("Voce pagou de imposto R$%2.2f\n", imposto);
            printf("Valor da receita liquida com descontos R$%2.2f\n", valorLiquido);
            printf("Seu lucro e de R$%2.2f\n", lucro);
            printf("Seu estoque era de %2.2fKG\n", estoque);
            printf("Voce retirou do seu estoque %2.2fKG\n", quilos);
            printf("Seu estoque atual e: %2.2fKG\n", estoqueAtual);
            printf("\n");
        }

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
                    return 0;
                }

            printf("Qual foi o valor de custo do quilo do seu produto ?\n");
            scanf("%f", &custoProduto);
            printf("Qual foi o valor de venda do quilo do seu produto ?\n");
            scanf("%f", &vendaProduto);
            printf("Qual foi a Taxa paga de imposto?");
            scanf("%f", &taxa);
            printf("\n");

            printf("=========================\n");
            printf("||RESULTADO DA CONSULTA||\n");
            printf("=========================\n");
            printf("\n");

            valorCusto = (custoProduto * quilos);
            valorVenda = (vendaProduto * quilos);
            imposto = (valorVenda / 100) * taxa;
            valorLiquido = (valorVenda - imposto);
            lucro = (valorLiquido - valorCusto);
            estoqueAtual = (estoque - quilos);

            printf("Seu imposto e de %2.2f%%\n", imposto);
            printf("Seu valor de custo foi R$%2.2f\n", valorCusto);
            printf("O valor da sua venda bruta foi de R$%2.2f\n", valorVenda);
            printf("Voce pagou de imposto R$%2.2f\n", imposto);
            printf("Valor da receita liquida com descontos R$%2.2f\n", valorLiquido);
            printf("Seu lucro e de R$%2.2f\n", lucro);
            printf("Seu estoque era de %2.2fKG\n", estoque);
            printf("Voce retirou do seu estoque %2.2fKG\n", quilos);
            printf("Seu estoque atual e: %2.2fKG\n", estoqueAtual);
            printf("\n");
        }

    else if (tipoCarne < 1 || tipoCarne > 3)
    {
        printf("Codigo inexistente! Reinicie o sitema!\n");
        printf("\n");
    }

    printf("======================\n");
    printf("||FIM DA CONSULTA!!!||\n");
    printf("======================\n");

    system("PAUSE");
}
