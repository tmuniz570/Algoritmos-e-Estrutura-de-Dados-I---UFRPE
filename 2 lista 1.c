#include <stdio.h>

int fun (int v1, int v2) {
    int v3;
    v3 = v1 + v2;
    return v3;
        }
        
        
int main () {
    
    int v1[10], v2[10], v3[10], i, j;
    
    for (i=1;i<=10;i++) {
        system ("CLS");
        printf ("Digite o %d termo de v1: ", i);
        scanf ("%d", &v1[i]);
        }
        
        for (i=1;i<=10;i++) {
        system ("CLS");
        printf ("Digite o %d termo de v2: ", i);
        scanf ("%d", &v2[i]);
        }
    
    j = 10;
    for (i=1;i<=10;i++) {
        v3[i] = v1[i] + v2[j];
        j--;
        }
    
    system ("CLS");
    for (i=1;i<=10;i++) {
        printf ("%d", v3[i]);
        while (i<10) {printf (", ");break;}
        }
     
    printf (".\n\n");    
    system ("PAUSE");
}
