#include <stdio.h>
#include <stdlib.h>

int main()
{

char s[6+1];
printf ("string ?");
    scanf("%s", s);
printf("%s", s); /*la s en si misma esta diciendo que empiece a leer desde el principio,
     osea lo que ser�a sustituir "S" con su direcci�n "&c[0]".
     */

    return 0;
}
