#include <stdio.h>
#include "ft_printf.h"

int main () 
{ 
    int i = printf("%        #      d\n",2);
    printf("%d\n", i);
}