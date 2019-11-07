#include <stdio.h> 
#include <stdlib.h>

void soma()
    float num1;
    float num2;
    float resultado;

    printf("Escolha o primeiro numero:");
    scanf("%f", &num1);
    printf("Escolha o segundo numero:");
    scanf("%f", &num2);
    resultado = num1 + num2;
    printf("resultado = %f", resultado);
    system ("pause"); 
    system("cls"); 
    menu(); 
}

void subtrai()
{
        float num1;
        float num2;
        float resultado;

        printf("Escolha o primeiro numero:");
        scanf("%f", &num1);
        printf("Escolha o segundo numero:");
        scanf("%f", &num2);
        resultado = num1 - num2;
        printf("resultado = %f", resultado);
        system ("pause");
        system("cls"); 
        menu();
}

void divide()
{
    float num1;
    float num2;
    float resultado;

    printf("Escolha o primeiro numero:");
    scanf("%f", &num1);
    printf("Escolha o segundo numero:");
    scanf("%f", &num2);
    resultado = num1 / num2;
    printf("resultado = %f", resultado);
    system ("pause");
    system("cls");
    menu();
}

void multiplica()
{
    float num1;
    float num2;
    float resultado;

    printf("Escolha o primeiro numero:");
    scanf("%f", &num1);
    printf("Escolha o segundo numero:");
    scanf("%f", &num2);
    resultado = num1 * num2;
    printf("resultado = %f", resultado);
    system ("pause"); 
    system("cls"); 
    menu(); 
}

void menu()
{ 
    int escolha;

    printf("\t\tBem vindo a calculadora em C\n\n");

    printf("Selecione uma operacao matematica:\n");
    printf("\t1- Adicao\n");
    printf("\t2- Subtracao\n");
    printf("\t3- Divisao\n");
    printf("\t4- Multiplicacao\n");
    printf("\t5- Sair\n");
    printf("Operacao: ");
    scanf ("%d", &escolha);

    switch (escolha)
    {
        case 1: 
            soma(); 
        break; 

        case 2:
            subtrai();
        break;

        case 3:
            divide();
        break;

        case 4:
            multiplica();
            break;

        case 5:
            system("exit");
            printf("\nFim...\n\n");
        break;

        default: 
            printf("\nComando invalido, tente novamente!\n\n");
            system ("pause");
            system ("cls");
            menu(); 
            break;
    }
}


int main() 
{
    menu();
    system("pause");
    return 0;
}
