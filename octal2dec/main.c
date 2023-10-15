#include <stdio.h>

int main()
{
    int a, b, c = 0, d = 1, e;
    printf("input number: ");
    scanf("%o", &a);

    e = a;

    if (e > 0 ){
        while (e > 0){
            if ((e%10) > 7){
                printf("error, try again.");
                return 0;
            }
            else {
                e = e%10;
                e = e/10;
                if (e>7){
                    printf("error, try again.");
                    return 0;
                }
            }

        }
    }

    else {
        while (e > 0){
                b = e % 10;
                c += b * d;
                e /= 10;
                d *= 8;
                printf("result: %o", d);
                return 0;
        }
    }
}
