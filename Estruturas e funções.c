#include<stdio.h>
#define max 100
#include<stdlib.h>
#include<locale.h>

typedef struct
{
    int codigo;
    char nome[40], cargo[40];
}Funcionario;



int inserir_funcionario(Funcionario vet_func[], int *cont)
{
    if (*cont<max) // verifica se ainda tem espaço no vetor
    {
        printf("Entre com o código do funcionário: ");
        scanf("%d", &vet_func[*cont].codigo);
        fflush(stdin);
        printf("Entre com o nome do funcionário: ");
        scanf("%s", &vet_func[*cont].nome);
        printf("Entre com o cargo do funcionário: ");
        scanf("%s", &vet_func[*cont].cargo);
        (*cont)++;
        return 1;
    }
    else
        return 0;
    
}

int buscar_func(Funcionario vet_func[40], int cont)
{
    printf("Digite o código do funcionário: ");
    int codigo_func;
    scanf("%d", &codigo_func);
    int achou = 0, indice;
    for(int i = 0; i < cont; i++)
    {
        if (codigo_func==vet_func[i].codigo)
        {
            achou = 1;
            indice = i;
        }
    }
    if (achou == 0)
    {
        return 0;
    }
    else
        return indice;
}

int alterar_funcionario(Funcionario vet_func[40], int i){
    fflush(stdin);
    printf("Entre com o nome do funcionário: ");
    scanf("%s", &vet_func[i].nome);
    printf("Entre com o cargo do funcionário: ");
    scanf("%s", &vet_func[i].cargo);
    
}

int excluir_funcionario(Funcionario vet_func[40], int i, int *cont)
{

    for (int indice = i; indice < *cont; indice++)
    {
        vet_func[indice] = vet_func[indice+1];
    }
    *cont = *cont - 1;
    return 1;
}

void imprimir_funcionarios(Funcionario vet_func[40], int cont)
{
    int i;
    system("cls");
    for (i = 0; i < cont; i++)
        printf("Código: %d | Nome: %s | Cargo: %s\n", vet_func[i].codigo, vet_func[i].nome, vet_func[i].cargo);
    system("pause");
}

int menu(){
    int op;
    printf("Menu de opções:\n");
    printf("1. Inserir funcionário\n2. Imprimir funcionários\n");
    printf("3. Excluir funcionário\n4. Alterar funcionário\n5. Sair\n");
    scanf("%d",&op);
    return op;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Funcionario funcs[max]; //declara um vetor de registros de funcionarios
    int result, cont = 0, op;
    do
    {
        op = menu();
        switch (op)
        {
        case 1: printf("Inserindo um funcionário...\n");
            result = inserir_funcionario(funcs,&cont);
            if (result)
            {
                printf("Funcionário inserido com sucesso!\n");
            }
            else
                printf("Falha ao inserir funcionário\n");
            break;
        case 2: printf("Imprimindo funcionário...\n");
            imprimir_funcionarios(funcs,cont); //cont é enviada como valor por que nao será alterada
            break;
        case 3: printf("Excluindo um funcionário...\n");
            int i = buscar_func(funcs, cont);
            int out = excluir_funcionario(funcs, i, &cont);
            if (out == 1)
                printf("Funcionário excluído com sucesso!");
            else printf("Não foi possível excluir o funcionário!");
            break;
            break;
        case 4: printf("Alterando um funcionário...\n");
            int k = buscar_func(funcs, cont);
            int out2 = alterar_funcionario(funcs, k);
            if (out2 == 1)
                printf("Funcionário alterado com sucesso!");
            else printf("Não foi possível alterar o funcionário!");
            break;
        case 5: printf("Encerrando o programa...");
            break;
        default: printf("opção inválida\n");
        }
        
    } while (op != 5);
    
}
