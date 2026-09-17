#include <stdio.h>
#include <stdlib.h>

void procurarPrincesa(int salaPrincesa, int *tentativas)
{
    int escolha;

    if (*tentativas == 0)
    {
        printf("\nSuas tentativas acabaram!\n");
        printf("A princesa estava na sala %d.\n", salaPrincesa);
        return;
    }

    printf("Tentativas restantes: %d\n", *tentativas);
    printf("Escolha uma sala de 1 a 10: ");
    scanf("%d", &escolha);

    if (escolha == salaPrincesa)
    {
        printf("\nPARABENS!\n");
        printf("Voce encontrou a princesa na sala %d!\n", salaPrincesa);
        return;
    }

    (*tentativas)--;

    if (escolha < salaPrincesa)
    {
        printf("procure uma sala MAIOR!\n");
    }
    else
    {
        printf("procure uma sala MENOR!\n");
    }

    procurarPrincesa(salaPrincesa, tentativas);
}

int main()
{
    int salaPrincesa;
    int tentativas = 5;

    printf("Encontre a Princesa\n");
    printf("Voce possui 5 tentativas para encontra-la!\n");

    printf("\nDigite a sala onde a princesa esta (de 1 a 10): ");
    scanf("%d", &salaPrincesa);

    procurarPrincesa(salaPrincesa, &tentativas);

    return 0;
}
