#include <stdio.h>
int main()
{
    int rpm;
    printf ("Rpm degerini giriniz:");
    scanf("%d", &rpm);
    
    float k;
    printf("Motor Sabiti k degerini giriniz:");
    scanf("%f", &k);
    

    float thrust= k*rpm*rpm;
    printf("Hesaplama Thrust:%.2f\n",thrust);

    if (thrust<2.0) {
        printf("Motor sinifi: ZAYIF\n");
    } else if (thrust<5.0) {
        printf("Motor sinifi: ORTA\n");
    } else {
        printf("Motor sinifi: GUCLU\n");
    }            
    
    
    return 0;    
}    
