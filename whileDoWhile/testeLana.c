#include <stdio.h>
#include <string.h>

int main(){

    char i[]= "s";
    char resp[] = "n";

    do{
        printf("quer cadastrar outro usuario?(s/n)");
        scanf("%s", resp);
    } while (strcmp(i, resp) == 0); 

    return 0; 
}