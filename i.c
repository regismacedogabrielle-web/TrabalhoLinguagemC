#include <stdio.h>
#include <locale.h>


int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8"); //TRADUÇÃO DA PAGINA EM PORTUGUÊS
    //char nome[10] = "fernanda"; 
    //float altura = 1.60;
    //int idade = 30; //ATRIBUIR VALORES AS VARIÁVEIS
    

    //printf("Seu é nome: %s\n", nome);
    //printf("Sua é altura: %.2f\n", altura);   
    //printf("Sua é idade: %d\n", idade); // DEPOIS VOU EXIBIR OS VALORES DAS VARIAVEIS

    //------------------------------------------------------------------------------------------
    
    //int num1, num2, resul; //DECLARAR AS VARIÁVEIS

    //printf("Escolha um numero inteiro:\n", num1);//PEDE PARA O USUARIO ESCOLHER UM NÚMERO INTEIRO
    //scanf("%d", &num1); //O PROGRAMA LÊ O NÚMERO DIGITADO PELO USUÁRIO E ARMAZENA NA VARIÁVEL num1

    //printf("Escolha outro numero inteiro:\n", num2);
    //scanf("%d", &num2);//O PROGRAMA LÊ O NÚMERO DIGITADO PELO USUÁRIO E ARMAZENA NA VARIÁVEL num2

    //resul = num1 + num2; //SOMA OS DOIS NÚMEROS
    //printf("O resultado da soma entre %d e %d é: %d\n", num1, num2, resul); //EXIBE O RESULTADO

    //resul= num1 % num2; //RESTO DA DIVISÃO ENTRE OS DOIS NÚMEROS 
    //resul = num2 / num1; // DIVIÇÃO INTEIRA
    //printf("O resultado da divisão entre %d e %d é: %d\n", num2, num1, resul); //EXIBE O RESULTADO

    //float resulDec= (float)num2 / num1; // DIVIÇÃO COM NÚMEROS DECIMAIS
    //printf("O resultado da divisão decimal entre %d e %d é: %.2f\n", num2, num1, resulDec); //EXIBE O RESULTADO

   //----------------------------------------------------------------------------------------

    //int numero1, numero2, resultado; //DECLARAR AS VARIÁVEIS

    //printf("Escolha um numero inteiro:\n", numero1);//PEDE PARA O USUARIO ESCOLHER UM NÚMERO INTEIRO
    //scanf("%d", &numero1); //O PROGRAMA LÊ O NÚMERO DIGITADO PELO USUÁRIO E ARMAZENA NA VARIÁVEL numero1

    //printf("Escolha outro numero inteiro:\n", numero2);
    //scanf("%d", &numero2);//O PROGRAMA LÊ O NÚMERO DIGITADO PELO USUÁRIO E ARMAZENA NA VARIÁVEL numero2

    //resultado = numero1 + numero2; //SOMA OS DOIS NÚMEROS
    //printf("O resultado da soma entre %d e %d é: %d\n", numero1, numero2, resultado); //EXIBE O RESULTADO

    //resultado = numero1 - numero2; //SUBTRAI OS DOIS NÚMEROS
    //printf("O resultado da subtração entre %d e %d é: %d\n", numero1, numero2, resultado); //EXIBE O RESULTADO

    //resultado = numero1 * numero2; //MULTIPLICA OS DOIS NÚMEROS
    //printf("O resultado da multiplicação entre %d e %d é: %d\n", numero1, numero2, resultado); //EXIBE O RESULTADO

    //resultado = numero1 / numero2; //DIVIDE OS DOIS NÚMEROS
    //printf("O resultado da divisão entre %d e %d é: %d\n", numero1, numero2, resultado); //EXIBE O RESULTADO

    //------------------------------------------------------------------------------------------

   
   
    //------------------------------------------------------------------------  

    float nota1, nota2, nota3, nota4, media; //DECLARAR AS VARIÁVEIS
    char aluno1[10], aluno2[10]; //DECLARAR AS VARIÁVEIS

    printf("nome do aluno(a):\n"); //PEDE PARA O USUÁRIO DIGITAR O NOME DO ALUNO
    scanf("%s", aluno1); //O PROGRAMA LÊ O NOME DIGITADO PELO USUÁRIO E ARMAZENA NA VARIÁVEL aluno1

    printf("Notas do aluno(a) %s:\n", aluno1); //PEDE PARA O USUÁRIO DIGITAR AS NOTAS DO ALUNO
    scanf("%f %f", &nota1, &nota2); //O PROGRAMA LÊ AS NOTAS DIGITADAS PELO USUÁRIO E ARMAZENA NAS VARIÁVEIS nota1 E nota2

    media = (nota1 + nota2) / 2; //CALCULA A MÉDIA DAS DUAS NOTAS

    printf("A média do aluno(a) %s é: %.2f\n", aluno1, media); //EXIBE A MÉDIA DO ALUNO


    if(media >= 7 ){
      printf("O aluno(a) %s está aprovado\n", aluno1); // SE A MÉDIA FOR MAIOR OU IGUAL A 7  O PROGRAMA EXIBE A MENSAGEM ABAIXO
    } else if (media > 5 && media <= 6.9 ){ // SE A MÉDIA FOR MAIOR QUE 5 E MENOR OU IGUAL A 6.9  ESTA EM RECUPERAÇÃO
        printf("O aluno(a) %s está em recuperação\n", aluno1);
    } else {
      printf("O aluno(a) %s esta reprovado\n", aluno1); // SE A MÉDIA FOR MENOR QUE 7  O PROGRAMA EXIBE A MENSAGEM ABAIXO
    }


    printf("nome do segundo aluno(a):\n"); //PEDE PARA O USUÁRIO DIGITAR O NOME DO SEGUNDO ALUNO
    scanf("%s", aluno2); //O PROGRAMA LÊ O NOME DIGITADO PELO USUÁRIO E ARMAZENA NA VARIÁVEL aluno2
    
    printf("Notas do aluno(a) %s:\n", aluno2); //PEDE PARA O USUÁRIO DIGITAR AS NOTAS DO SEGUNDO ALUNO
    scanf("%f %f", &nota3, &nota4); //O PROGRAMA LÊ AS NOTAS DIGITADAS PELO USUÁRIO E ARMAZENA NAS VARIÁVEIS nota3 E nota4
    
    media = (nota3 + nota4) / 2; //CALCULA A MÉDIA DAS DUAS NOTAS

    printf("A média do aluno(a) %s é: %.2f\n", aluno2, media); //EXIBE A MÉDIA DO SEGUNDO ALUNO


    if(media >= 7 ){
      printf("O aluno(a) %s está aprovado\n", aluno2); // SE A MÉDIA FOR MAIOR OU IGUAL A 7  O PROGRAMA EXIBE A MENSAGEM ABAIXO
    } else if (media > 5 && media <= 6.9){ // SE A MÉDIA FOR MAIOR QUE 5 E MENOR OU IGUAL A 6.9  ESTA EM RECUPERAÇÃO
        printf("O aluno(a) %s está em recuperação\n", aluno2);
    } else {
      printf("O aluno(a) %s esta reprovado\n", aluno2); // SE A MÉDIA FOR MENOR QUE 7  O PROGRAMA EXIBE A MENSAGEM ABAIXO
    }


    return 0;
}