#include <stdio.h>

float fun (float a, float b, float c) {
    float d;
    d=(a*b)/c;
    return d;
}

int main (){
    
    float i, j, k, m, s;
    k=1;
    s=0;
    
    for (i=38;i>=2;i--) {
        j = i - 1;
        m = fun (j, i, k);
        s = s + m;
        k++;
        }
        
    printf ("%f\n\n", s);
    system ("PAUSE");
}
