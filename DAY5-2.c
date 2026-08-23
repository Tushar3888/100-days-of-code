#include <stdio.h>
int main()
{
    float ts,hrs,min,sec;
    printf("Enter time in seconds");
    scanf("%f", &ts);
     
    hrs = ts/3600;
    min = ts/60;
    sec = ts;  
    
    printf("Time in hours : minutes : seconds=%.2f : %.2f : %.2f", hrs, min, sec);
    return 0;
}
