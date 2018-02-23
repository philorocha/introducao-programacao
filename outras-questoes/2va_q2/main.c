#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

//q2a
typedef struct {
    char logradouro[100];
    int numero;
    char bairro[100];
    char cep[10];
    char cidade[100];
    char estado[50];
} Endereco;

typedef struct {
    char nome[150];
    float num_h_trab;
    char turno;
    char categoria;
    float valor_h_trab;
    Endereco end;
} Funcionario;

//q2b

int cadastra_func(Funcionario func, Funcionario funcionarios[], int tam, int pos) {
    if (pos < 0 || pos > tam - 1) {
        return 0;
    }
    if (func.categoria == 'G') {
        if (func.turno == 'N') {
            func.valor_h_trab = 900 * 0.18;
        } else {
            func.valor_h_trab = 900 * 0.15;
        }
    } else {
        if (func.turno == 'N') {
            func.valor_h_trab = 900 * 0.13;
        } else {
            func.valor_h_trab = 900 * 0.10;
        }
    }

    funcionarios[pos] = func;
    return 1;
}

//q2c

void folha(Funcionario func) {
    printf("NOME FUNCIONÁRIO: %s\n", func.nome);
    printf("NUMERO HORAS TRAB.: %.2f\n", func.num_h_trab);
    printf("VALOR HORA TRAB.: %.2f\n", func.valor_h_trab);
    float sal_ini = func.valor_h_trab * func.num_h_trab;
    printf("SALARIO INICIAL: %.2f\n", sal_ini);
    float aux_alimentacao;
    if (sal_ini <= 500) {
        aux_alimentacao = sal_ini * 0.2;
    } else if (sal_ini < 800) {
        aux_alimentacao = sal_ini * 0.15;
    } else {
        aux_alimentacao = sal_ini * 0.05;
    }
    printf("AUXILIO ALIMENTAÇÃO: %.2f\n", aux_alimentacao);
    printf("SALÁRIO FINAL: %.2f\n", sal_ini + aux_alimentacao);
}

//q2d

int main()
{
    Funcionario lista_func[50], funcionario;
    int i;

    setlocale(LC_ALL, "Portuguese");

    for (i = 0; i < 50; i++) {
        //vai continuar a solicitar o nome caso não seja informado
        do {
            printf("INFORME SEU NOME: ");
            fflush(stdin);
            gets(funcionario.nome);
        } while (strlen(funcionario.nome) < 1);
        //vai continuar solicitando numero de horas trab caso seja informado valor <= 0
        do {
            printf("NUMERO DE HORAS TRAB.: ");
            scanf("%f", &funcionario.num_h_trab);
        } while (funcionario.num_h_trab <= 0);
        //vai continuar solicitando turno de trab caso seja algo diferente de N, M ou V
        do {
            printf("TURNO DE TRAB.: ");
            fflush(stdin);
            scanf("%c", &funcionario.turno);
        } while (funcionario.turno != 'N' && funcionario.turno != 'M' && funcionario.turno != 'V');
        //vai continuar solicitando categoria caso seja algo diferente de O ou G
        do {
            printf("CATEGORIA (O - OPERARIO, G - GERENTE): ");
            fflush(stdin);
            scanf("%c", &funcionario.categoria);
        } while (funcionario.categoria != 'O' && funcionario.categoria != 'G');
        //vai continuar solicitando valor da hora trab caso seja um valor <= 0
        do {
            printf("VALOR HORA TRAB.: ");
            scanf("%f", &funcionario.valor_h_trab);
        } while (funcionario.valor_h_trab <= 0);

        printf("LOGRADOURO: ");
        fflush(stdin);
        gets(funcionario.end.logradouro);
        printf("NÚMERO: ");
        scanf("%d", &funcionario.end.numero);
        printf("BAIRRO: ");
        fflush(stdin);
        gets(funcionario.end.bairro);
        printf("CEP: ");
        fflush(stdin);
        gets(funcionario.end.cep);
        printf("CIDADE: ");
        fflush(stdin);
        gets(funcionario.end.cidade);
        printf("ESTADO: ");
        fflush(stdin);
        gets(funcionario.end.estado);
        //caso a funcao cadastra_func retorne 1 entao cadastrou o funcionario com sucesso
        if (cadastra_func(funcionario, lista_func, 50, i)) {
            printf("FUNCIONARIO CADASTRADO!\n");
        } else {
            printf("ERRO AO TENTAR CADASTRAR!\n");
        }
    }

    for (i = 0; i < 50; i++) {
        folha(lista_func[i]);
    }
    return 0;
}
