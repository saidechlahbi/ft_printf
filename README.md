/* int this files we expline each line and each question */


typedef struct {
    unsigned int gp_offset;
    unsigned int fp_offset;
    void *overflow_arg_area;
    void *reg_save_area;
} va_list[1];

va_start(ap, last_arg):

This macro initializes a va_list object ap to point to the first argument in the variable argument list.
last_arg is the name of the last named parameter in the function declaration.
This must be called before using va_arg to access the variable arguments.

va_arg(ap, type):

This macro retrieves the next argument from the variable argument list that ap points to.
type is the C data type of the argument you want to retrieve.
Each call to va_arg advances the ap pointer to the next argument.

va_copy(dest, src):

This macro makes a copy of the va_list object src and stores it in dest.
This is useful if you need to process the variable arguments multiple times without advancing the original ap pointer.

va_end(ap):

This macro must be called after you've finished processing the variable arguments.
It performs any necessary cleanup of the va_list object ap.




/// cases of error -1
Key error handling points:

Always check for NULL input
Handle NULL strings for %s
Check for incomplete format specifiers
Return -1 on error
Always call va_end before returning on error
Check write() return values
Handle buffer overflow situations in helper functions

These checks make your printf implementation more robust and safer to use.

ft_void_hexadecimal.c:15:8: error: conflicting types for ‘ft_void_hexadecimal’; have ‘int(intptr_t)’ {aka ‘int(long int)’}
   15 | int    ft_void_hexadecimal(intptr_t     ptr)
      |        ^~~~~~~~~~~~~~~~~~~
In file included from ft_void_hexadecimal.c:13:
printf.h:27:8: note: previous declaration of ‘ft_void_hexadecimal’ with type ‘int(uintptr_t)’ {aka ‘int(long unsigned int)’}
   27 | int    ft_void_hexadecimal(uintptr_t p);
      |        ^~~~~~~~~~~~~~~~~~~
make: *** [<builtin>: ft_void_hexadecimal.o] Error 1



## if after % is deferent to cspdiuxX% ,-1  is returned

## if str is NULL ,-1 is returned

## if the argument of %p is null ,(nil) is returned 

## if the argument of %s is null, (null) is returned


The fixed parameter helps va_start() know where the variable arguments begin in memory
Without a fixed parameter, there would be no way to reliably determine how many arguments were passed