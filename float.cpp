#include <stdio.h>

int main()
{
    double test = 37.30;
    double test2 = 10.20;
    
    int i = 100;
    for(; i < 1000000; i*=10) {
        printf("%.2f * %d =  %d\n", test, i, (int)(round(test * i)));
        printf("%.2f * %d = %d\n", test2, i, (int)(round(test2 * i)));
    }   
    return 0;
}
