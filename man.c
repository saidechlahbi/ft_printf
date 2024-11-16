# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int min(int count, ...)
{
    va_list p;
    int s = 0;
    int i = 1;
    va_start(p, count);
    while (i)
    {
        i =  va_arg(p,int);
        s += i;
    }
    va_end(p);
    return (s);
}

int main ()
{
     int i = min(3,5,7,45,32,7,54,23,6,78,0);
     printf("%d",i);
}