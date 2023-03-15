#include <stdio.h>
#include <stdbool.h>

void avtomat(){
    int stanje = 0;
    int novoStanje = 0;
    int a = getchar();
    while(a != '\n'){
        if(a == ' '){
            if(stanje == 2 || stanje == 3){
                putchar('1');
                stanje = 0;
            }
            else{
                putchar('0');
                stanje = 0;
            }
            a = getchar();
        }
        if(stanje == 0){
            switch (a)
            {
            case '0': novoStanje = 2;break;
            case '1': novoStanje = 3;break;
            case '2': novoStanje = 3;break;
            case '3': novoStanje = 3;break;
            case '4': novoStanje = 3;break;
            case '5': novoStanje = 3;break;
            case '6': novoStanje = 3;break;
            case '7': novoStanje = 3;break;
            case '8': novoStanje = 3;break;
            case '9': novoStanje = 3;break;
            case '+': novoStanje = 1;break;
            case '-': novoStanje = 1;break;
            default:  novoStanje = 5;break;
            }
        }
        if(stanje == 1){
            switch (a)
            {
            case '0': novoStanje = 2;break;
            case '1': novoStanje = 3;break;
            case '2': novoStanje = 3;break;
            case '3': novoStanje = 3;break;
            case '4': novoStanje = 3;break;
            case '5': novoStanje = 3;break;
            case '6': novoStanje = 3;break;
            case '7': novoStanje = 3;break;
            case '8': novoStanje = 3;break;
            case '9': novoStanje = 3;break;
            default:  novoStanje = 5;break;
            }
        }
        if(stanje == 2){
            switch(a){
                default:  novoStanje = 5;break;
            }
        }
        if(stanje == 3){
            switch(a){
                case '0': novoStanje = 3;break;
                case '1': novoStanje = 3;break;
                case '2': novoStanje = 3;break;
                case '3': novoStanje = 3;break;
                case '4': novoStanje = 3;break;
                case '5': novoStanje = 3;break;
                case '6': novoStanje = 3;break;
                case '7': novoStanje = 3;break;
                case '8': novoStanje = 3;break;
                case '9': novoStanje = 3;break;
                default:  novoStanje = 5;break;
            }
        }
        stanje = novoStanje;
        a = getchar();
    }
    if(stanje == 2 || stanje == 3){
        putchar('1');
    }else putchar('0');
}

int main(int argc, char const *argv[])
{
    avtomat();
    return 0;
}
