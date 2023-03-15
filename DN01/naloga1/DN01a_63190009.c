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
    long int a = 0,b = 0;
    bool prvo,drugo,negativno;
    prvo = true;
    int i;
    i = getchar();
    while(i != '\n'){
        if(i == '-' && prvo){
            negativno = true;
        }
        else if(i == '-' && drugo){
            negativno = true;
        }
        else if(i == ' '){
            if(negativno){
                a *= -1;
                negativno = false;
            }
            prvo = false;
            a /= 10;
            drugo = true;
        }
        else if(prvo){
            a += i - '0';
            a*= 10;
        }
        else{
            b += i-'0';
            b *= 10;
        }
        i = getchar();
    }
    if(negativno){
        b *= -1;
        negativno = false;
    }
    b /= 10;

    int result = a + b;
    if(result < 0){
        putchar('-');
        result *= -1;
    }
    if(result == 0){
        putchar('0');
        return 0;
    }
    print(result);
    putchar('\n');

    return 0;
}
