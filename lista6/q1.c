#include <stdio.h>

struct Aluno{
    int nota1;
    int nota2;
    float media;
};
int lerNotas();
int main(){
    struct Aluno aluno;
    aluno.nota1 = lerNotas();
    aluno.nota2 = lerNotas();
    aluno.media = (float)(aluno.nota1+aluno.nota2)/2;
    
    printf("A média do aluno é: %.2f\n", aluno.media);

    return 0;
    
}
int lerNotas(){
    int nota;
    printf("Digite a nota do aluno: ");
    scanf("%i", &nota);
    return nota;
}