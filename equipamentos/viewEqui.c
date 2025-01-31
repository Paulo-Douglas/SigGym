#include <stdio.h>
#include <stdlib.h>
#include "modelEqui.h"
#include "../libs/utils.h"


char menuEqui(void){
    limparTela();
    char opcao;
    printf("----------------------------------------------\n");
    printf("|                 Equipamentos               |\n");
    printf("----------------------------------------------\n");
    printf("|             1 - Cadastre - se              |\n");
    printf("|             2 - Exibir Dados               |\n");
    printf("|             3 - Alterar Dados              |\n");
    printf("|             4 - Excluir Equipamento        |\n");
    printf("|             5 - Relatórios                 |\n");
    printf("|             0 - Retornar ao Menu Principal |\n");
    printf("----------------------------------------------\n");
    printf("> Selecione uma opção: ");
    scanf(" %c", &opcao);
    return opcao;
}

void cadastrarEqui(void){
    limparTela();
    printf("----------------------------------------------\n");
    printf("|           Cadastro de Equipamento          |\n");
    printf("----------------------------------------------\n");
}

void exibirDadosEqui(void){
    limparTela();
    printf("----------------------------------------------\n");
    printf("|                 Exibir Dados               |\n");
    printf("----------------------------------------------\n");
}

void alterarDadosEqui(void){
    limparTela();
    printf("----------------------------------------------\n");
    printf("|                 Alterar Dados              |\n");
    printf("----------------------------------------------\n");
}

void excluiEquipamento(void){
    limparTela();
    printf("----------------------------------------------\n");
    printf("|              Excluir Equipamento           |\n");
    printf("----------------------------------------------\n");
}

void numDadosEqui(void) {
    printf("----------------------------------------------------------------------------------------------------\n");
    printf("| %-5s | 1 - %-26s | 2 - %-20s | 3 - %-12s | 4 - %-6s |\n", "ID", "Nome", "Marca", "Qtd.", "Preço");
    printf("----------------------------------------------------------------------------------------------------\n");
}

void dadosEquipamentos(Equipamento* equipamento){
    limparTela();
    printf("----------------------------------------------------------------------------------------------------\n");
    printf("| ID: %d \n", equipamento->ID);
    printf("| Nome: %s \n", equipamento->nome);
    printf("| Marca: %s \n", equipamento->marca);
    printf("| Quantidade: %d\n", equipamento->quantidade);
    printf("| Preço: %.2f \n", equipamento->preco);
    printf("----------------------------------------------------------------------------------------------------\n");
}

char relatorioEquipamentos(void){
    limparTela();
    char opcao;
    printf("----------------------------------------------\n");
    printf("|                  Relatório                 |\n");
    printf("----------------------------------------------\n");
    printf("|         1 - Status dos equipamentos        |\n");
    printf("|         2 - Equipamentos por ordem alf.    |\n");
    printf("|         0 - Retornar ao Menu Principal     |\n");
    printf("----------------------------------------------\n");
    printf("> Selecione uma opção: ");
    scanf(" %c", &opcao);
    return opcao;
}

char statusEquipamentos(void){
    limparTela();
    char opcao;
    printf("-------------------------------------------------------\n");
    printf("|                   Relatório - Status                |\n");
    printf("-------------------------------------------------------\n");
    printf("|              1 - Equipamentos ativos                |\n");
    printf("|              2 - Equipamentos inativos              |\n");
    printf("|              3 - Todos os equipamentos              |\n");
    printf("|              0 - Retornar ao Menu Principal         |\n");
    printf("-------------------------------------------------------\n");
    printf("> Selecione uma opção: ");
    scanf(" %c", &opcao);
    return opcao;
}