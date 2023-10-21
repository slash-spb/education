#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char str_1[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char none[100];
    char get;
    int i = 0, a, b;
    printf("Write a string:\n");
    while ((get = getchar()) != '\n' && i < 99) {
        none[i] = get;
        i++;
    }
    for (a = 0; a <= 25; a++){
        for (b = 0; b < i; b++){
            if (str[a] == none[b]){
                printf("%c", str[a]);
            }
        }
    }



}
