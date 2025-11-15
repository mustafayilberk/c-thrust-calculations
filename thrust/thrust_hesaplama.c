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

}    
