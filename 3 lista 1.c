#include <stdio.h>

int main () {
    
    float medveicid, peacidentes, idacd, maidacd, meidacd, cidade, estado, veiculos, acidentes, pe, mecidade, macidade;
    
    medveicid = 0;
    pe = 0;
    peacidentes = 0;
    maidacd = 0;
    meidacd = 101;
    
    for (cidade=1;cidade<=50;cidade++) {
        system ("CLS");
        printf ("Qual o estado da cidade %.0f? (1-PE, 2-PB, 3-RN, 4-CE) ", cidade);
        scanf ("%f", &estado);
        
        printf ("\nQual o numero de veículos de passeio em 2010? ");
        scanf ("%f", &veiculos);
        
        printf ("\nQual o numero de acidentes de trânsito com vítimas em 2010? ");
        scanf ("%f", &acidentes);
        
        idacd = (acidentes/veiculos)*100;
        
        medveicid = medveicid + veiculos;
        
        if (estado == 1) {
                   pe++;
                   peacidentes = peacidentes + acidentes;
                   }
                   
        if (idacd>maidacd) {
                           maidacd = idacd;
                           macidade = cidade;
                           }
                           
        if (idacd<meidacd) {
                           meidacd = idacd;
                           mecidade = cidade;
                           }
        }
        
        medveicid = medveicid / 50;
        peacidentes = peacidentes / pe;
        
        system ("CLS");                           
        printf ("O maior indice de acidentes com vitimas foi de %.2f%% na cidade %.0f\nO menor indice de acidentes com vitimas foi de %.2f%% na cidade %.0f\nA media de veiculos nas cidades e de %.1f veiculos/cidade\nA media de acidentes com vitimas nas cidades de Pernambuco foi de %.1f acidentes/cidade\n\n", maidacd, macidade, meidacd, mecidade, medveicid, peacidentes);
        system ("PAUSE");
        }
