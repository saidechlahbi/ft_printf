/* CELEBV01                                      

   This example passes a variable number of arguments to a function,            
   stores each argument in an array, and prints each argument.                  

 */                                                                             
#include <stdio.h>                                                              
#include <stdarg.h>                                                             
                                                                                
int vout(int max, ...)                                                         
{            
    int i = 0,c;                                                                   
    va_list p;
    va_start(p, max);
    while (i++ < max)
        c += va_arg(p, int);
    va_end(p);
    return (c);                                    
}
                                                                                
int main(void)                                                                  
{                                                                               
   printf("%d\n",vout(1,3,2,4));                                                                
}                                                                               
                                                                                