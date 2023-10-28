#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char str_1[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char none[100];
    char get;
    int i = 0, a, b, print_on = 0;
    printf("Write a string:\n");
    while ((get = getchar()) != '\n' && i < 99) {
        none[i] = get;
        i++;
    }

    for (a = 0; a <= 25; a++){
        for (b = 0; b < i; b++){

            //условие для вывода первой буквы в строке
            if ( ((b == 0) && none[b] == str[a]) || ((b != 0) && (none[b-1] == ' ') && (none[b] == str[a])) ){
                    print_on = 1;
            }

            if (print_on){
                printf("%c", none[b]);
                }

            // условие конца символа
                if (( (none[b+1] == ' ') || (b == i-1)) && (print_on == 1)){
                    print_on = 0;
                    printf(" ");
                    }


            }

        }
    }
