#include <stdio.h>
#include <stdlib.h>

#include "selector.h"

int main ()
{
    Lang n = 0;
    void (*hello)();

    do
    {
        printf ("Escolha a sua língua:\n");
        printf ("[0] Português;\n"); 
        printf ("[1] Inglês;\n");  
        printf ("[2] Espanhol.\n");
            scanf ("%d", &n);
        if (n < 0 || n > 2)
            fprintf (stderr, "Opção inválida.\n");
        else
            break; 
    
    } while (1);

    hello = selector(n);
    hello();
    
    return 0;
}
