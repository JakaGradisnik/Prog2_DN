#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print(int a){
    int i = a%10 + '0';
    if(a == 0)
        return;
    else{
        a /= 10;
        print(a);
        putchar(i);
    }
}

int main(int argc, char const *argv[])
{
    int a = 0;
    int st = 0, enice = 0;
    int i = getchar();
    bool zacelo = false;
    while(i != '\n'){
        if(i == '1'){
            enice++;
            zacelo = true;
            a += 1;
            a *= 10;
        }    
        else{
            a *= 10;
        }
        if(zacelo){
            st++;
        }
        i = getchar();
    }
    a /= 10;
    int b = 0;
    if(enice == 1)
    st--;
    
    if(st == 0){
        putchar('0');
        return 0;
    }
    print(st);
    return 0;
}
