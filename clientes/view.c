#include <stdio.h>
#include <stdlib.h>
#include "view.h"
#include "model.h"
#include <string.h>
#include "model.h"
#include "../libs/utils.h"

char menuClientes(void){
    limparTela();
    char opcao;
    printf("----------------------------------------------\n");
    printf("|                  Clientes                  |\n");
    printf("----------------------------------------------\n");
    printf("|             1 - Cadastre - se              |\n");
    printf("|             2 - Exibir Dados               |\n");
    printf("|             3 - Alterar Dados              |\n");
    printf("|             4 - Excluir Cliente            |\n");
    printf("|             0 - Retornar ao Menu Principal |\n");
    printf("----------------------------------------------\n");
    printf("> Selecione uma opção: ");
    scanf(" %c", &opcao);
    return opcao;
}

void cadastrarClientes(void){
    limparTela();
    printf("----------------------------------------------\n");
    printf("|             Cadastro de Clientes           |\n");
    printf("----------------------------------------------\n");
}

void exibirDados(void){
    limparTela();
    printf("----------------------------------------------\n");
    printf("|                 Exibir Dados               |\n");
    printf("----------------------------------------------\n");
}

void alterarDados(void){
    limparTela();
    printf("----------------------------------------------\n");
    printf("|                 Alterar Dados              |\n");
    printf("----------------------------------------------\n");
}

void numDados(void) {
    limparTela();
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("|                                           Alterar Dados                                       |\n");
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("| 1 - Nome | 2 - CPF | 3 - Telefone | 4 - Email | 5 - Data de Nascimento | 6 - Sexo | 7 - Plano |\n");
    printf("-------------------------------------------------------------------------------------------------\n");
}

void excluiClientes(void){
    limparTela();
    printf("----------------------------------------------\n");
    printf("|               Excluir Cliente              |\n");
    printf("----------------------------------------------\n");
}

void dadosClientes(Cliente* cliente){
    limparTela();
    printf("----------------------------------------------------------------------------------------------------\n");
    printf("| Nome: %s \n", cliente->nome);
    printf("| CPF: %s \n", cliente->cpf);
    printf("| Telefone: %s \n", cliente->telefone);
    printf("| Email: %s \n", cliente->email);
    printf("| Data de Nascimento: %s\n", cliente->dataNasc);
    printf("| Sexo: %s \n", nomeSexo(cliente->sexo));
    printf("| Plano: %s \n", nomePlano(cliente->plano));
    printf("----------------------------------------------------------------------------------------------------\n");
}
