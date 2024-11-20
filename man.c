# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int min(int count, ...)
{
    va_list p;
    double s =  count;
    int i = 0;
    double a = 0;
    va_start(p, count);
    printf("gp_offset: %d\n",p->gp_offset);
    printf("fp_offset: %d\n",p->fp_offset);
    printf("overflow_arg_area: %p\n",p->overflow_arg_area);
    printf("r0x7ffc5652e2c8g_save_area: %p\n",p->reg_save_area);

    printf("\\\\\\\\\\\\ 1 \\\\\\\\\\\\ \n");
  //  s =  va_arg(p,int);

    while (i < count + 1)
    {
        a =  va_arg(p,double);
        printf("%f\n",a);
        printf("gp_offset: %d\n",p->gp_offset);
        printf("fp_offset: %d\n",p->fp_offset);
        printf("overflow_arg_area: %p\n",p->overflow_arg_area);
        printf("reg_save_area: %p\n",p->reg_save_area);
        printf("\\\\\\\\\\\\  \\\\\\\\\\\\ \n");
        s += a;
        i++;
    }
    char *str = NULL;
    str = va_arg(p,char *);
    printf("%p \n",str);    
        printf("gp_offset: %d\n",p->gp_offset);
        printf("fp_offset: %d\n",p->fp_offset);
        printf("overflow_arg_area: %p\n",p->overflow_arg_area);
        printf("reg_save_area: %p\n",p->reg_save_area);

    va_end(p);
    return (s);
}

int main ()
{
     double i = min(15,7,5,7,4,4,7,43,4.5,4,65,3.7,7.6,"sss");
        printf("\\\\\\\\\\\\ finale resule \\\\\\\\\\\\ \n");

     printf("%f\n",i);
     printf("\n %d\n%d\n",sizeof(float),sizeof(double));
}