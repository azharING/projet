
#include <stdio.h>

void MENU() {
    printf("1/ Addition ***\n");
    printf("2/ Soustraction ***\n");
    printf("3/ Multiplication ***\n");
    printf("4/ Division ***\n");
    printf("5/ Quitter ***\n");
    printf("Faites votre choix : ");
}

int main() {
    int a, b, choix;
    
    printf("Entrez deux nombres entiers : ");
    scanf("%d %d", &a, &b);
    
    while (1) {
        MENU();
        scanf("%d", &choix);
        
        switch (choix) {
            case 1:
                printf("Resultat : %d\n", a + b);
                break;
            case 2:
                printf("Resultat : %d\n", a - b);
                break;
            case 3:
                printf("Resultat : %d\n", a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("Resultat : %d\n", a / b);
                } else {
                    printf("Division par zéro impossible.\n");
                }
                break;
            case 5:
                printf("Au revoir !\n");
                return 0;
            default:
                printf("Choix invalide.\n");
                break;
        }
    }
    
    return 0;
}