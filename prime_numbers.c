#include <stdio.h>

int main()
{
    int no, x_min, x_max, j;
    for(j = 1; j <= 100; j++) {
        prime(j);
    }
}

prime(int num) {
    int i, flag = 0;
    if(num <= 3)
        printf("\n %d", num);
    else {
        for(i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                flag = 0;
                break;
            }
            else {
                flag = 1;
            }
        }
        if(flag == 1) {
            printf("\n %d", num);
        }
    }
}