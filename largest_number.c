#include <stdio.h>

int main()
{
    int num, max = 0;
    printf("\n Enter any three numbers \n");
    for(int i = 0; i < 3; i++) {
        scanf("%d", &num);
        if(num > max) {
            max = num;
        }
    }
    printf("\n highest %d ", max);
}