#include <stdio.h>
#include <stdbool.h>

void avtomat(){
    int stanje = 0;
    int NovoStanje = 0;
    int a = getchar();
    while(a != '\n'){
        if(a == ' '){
            if(stanje == 1 || stanje == 2 || stanje == 4 || stanje == 6 || stanje == 7){
                putchar('1');
                stanje = 0;
            }else{
                putchar('0');
                stanje = 0;
            }
            a = getchar();
        }
        if(stanje == 0){
            switch(a){
                case '0': NovoStanje = 2;break;
                case '1': NovoStanje = 1;break;
                case '2': NovoStanje = 1;break;
                case '3': NovoStanje = 1;break;
                case '4': NovoStanje = 1;break;
                case '5': NovoStanje = 1;break;
                case '6': NovoStanje = 1;break;
                case '7': NovoStanje = 1;break;
                case '8': NovoStanje = 1;break;
                case '9': NovoStanje = 1;break;
                default: NovoStanje = -1;break;
            }
        }
        if(stanje == 1){
            switch(a){
                case '0': NovoStanje = 1;break;
                case '1': NovoStanje = 1;break;
                case '2': NovoStanje = 1;break;
                case '3': NovoStanje = 1;break;
                case '4': NovoStanje = 1;break;
                case '5': NovoStanje = 1;break;
                case '6': NovoStanje = 1;break;
                case '7': NovoStanje = 1;break;
                case '8': NovoStanje = 1;break;
                case '9': NovoStanje = 1;break;
                default: NovoStanje = -1;break;
            }
        }
        if(stanje == 2){
            switch(a){
                case '0': NovoStanje = 7;break;
                case '1': NovoStanje = 7;break;
                case '2': NovoStanje = 7;break;
                case '3': NovoStanje = 7;break;
                case '4': NovoStanje = 7;break;
                case '5': NovoStanje = 7;break;
                case '6': NovoStanje = 7;break;
                case '7': NovoStanje = 7;break;
                case 'x': NovoStanje = 3;break;
                case 'b': NovoStanje = 5;break;
                default: NovoStanje = -1;break;
            }
        }
        if(stanje == 3){
            switch(a){
                case '0': NovoStanje = 4;break;
                case '1': NovoStanje = 4;break;
                case '2': NovoStanje = 4;break;
                case '3': NovoStanje = 4;break;
                case '4': NovoStanje = 4;break;
                case '5': NovoStanje = 4;break;
                case '6': NovoStanje = 4;break;
                case '7': NovoStanje = 4;break;
                case '8': NovoStanje = 4;break;
                case '9': NovoStanje = 4;break;
                case 'A': NovoStanje = 4;break;
                case 'B': NovoStanje = 4;break;
                case 'C': NovoStanje = 4;break;
                case 'D': NovoStanje = 4;break;
                case 'E': NovoStanje = 4;break;
                case 'F': NovoStanje = 4;break;
                default: NovoStanje = -1;break;
            }
        }
        if(stanje == 4){
            switch(a){
                case '0': NovoStanje = 4;break;
                case '1': NovoStanje = 4;break;
                case '2': NovoStanje = 4;break;
                case '3': NovoStanje = 4;break;
                case '4': NovoStanje = 4;break;
                case '5': NovoStanje = 4;break;
                case '6': NovoStanje = 4;break;
                case '7': NovoStanje = 4;break;
                case '8': NovoStanje = 4;break;
                case '9': NovoStanje = 4;break;
                case 'A': NovoStanje = 4;break;
                case 'B': NovoStanje = 4;break;
                case 'C': NovoStanje = 4;break;
                case 'D': NovoStanje = 4;break;
                case 'E': NovoStanje = 4;break;
                case 'F': NovoStanje = 4;break;
                default: NovoStanje = -1;break;
            }
        }
        if(stanje == 5){
            switch(a){
                case '0': NovoStanje = 6;break;
                case '1': NovoStanje = 6;break;
                default: NovoStanje = -1;break;
            }
        }
        if(stanje == 6){
            switch(a){
                case '0': NovoStanje = 6;break;
                case '1': NovoStanje = 6;break;
                default: NovoStanje = -1;break;
            }
        }
        if(stanje == 7){
            switch(a){
                case '0': NovoStanje = 7;break;
                case '1': NovoStanje = 7;break;
                case '2': NovoStanje = 7;break;
                case '3': NovoStanje = 7;break;
                case '4': NovoStanje = 7;break;
                case '5': NovoStanje = 7;break;
                case '6': NovoStanje = 7;break;
                case '7': NovoStanje = 7;break;
                default :NovoStanje = -1;break;
            }
        }
        a = getchar();
        stanje = NovoStanje;
    }
    if(stanje == 1 || stanje == 2 || stanje == 4 || stanje == 6){
                putchar('1');
                stanje = 0;
            }else{
                putchar('0');
                stanje = 0;
            }
}

int main(int argc, char const *argv[])
{
    avtomat();
    return 0;
}
