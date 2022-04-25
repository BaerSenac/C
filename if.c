#include <stdio.h>

int main(){

    int idade;
    printf("\n Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18)
    {
        printf("\n Voce ja pode tirar sua carteira de habilitaçao!");
    }
    return 0;
    
}

//#include <stdio.h>

int main(){

    int eleitor1 = 18;
    int eleitor2 = 60;
    
    if (eleitor1 && eleitor2 >= 18){
        printf("\n Eleitores:");
    }else {
        printf("\n Nao eleitores: ");
    }
    
    return 0;
}