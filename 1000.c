#include <stdio.h>
#include <locale.h> //biblioteca para adicionar acento

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Hello World! \n");
    printf("Ol� mundo \n");

    return 0;
}