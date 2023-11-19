#include <stdio.h>

struct Aluno{
    int nota1;
    int nota2;
    float media;
};
int lerNotas();
int main(){
    struct Aluno aluno[3];

    aluno[0].nota1 = lerNotas();
    aluno[0].nota2 = lerNotas();
    aluno[1].nota1 = lerNotas();
    aluno[1].nota2 = lerNotas();
    aluno[2].nota1 = lerNotas();
    aluno[2].nota2 = lerNotas();

    aluno[0].media = (float)(aluno[0].nota1+aluno[0].nota2)/2;
    aluno[1].media = (float)(aluno[1].nota1+aluno[1].nota2)/2;
    aluno[2].media = (float)(aluno[2].nota1+aluno[2].nota2)/2;

    printf("A média do aluno 1 é: %.2f\n", aluno[0].media);
    printf("A média do aluno 2 é: %.2f\n", aluno[1].media);
    printf("A média do aluno 3 é: %.2f\n", aluno[2].media);
    
    return 0;
    
}
int lerNotas(){
    int nota;
    printf("Digite a nota do aluno: ");
    scanf("%i", &nota);
    return nota;
}