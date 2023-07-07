Static Library

#	Task 1
*	Create Object File for the files
```
$ gcc -c 0-isupper.c 0-strcat.c 1-isdigit.c 1-strncat.c 2-strlen.c 3-islower.c 3-strcmp.c 4-isalpha.c 5-strstr.c 9-strcpy.c _putchar.c 0-memset.c 100-atoi.c 1-memcpy.c 2-strchr.c 2-strncpy.c 3-puts.c 3-strspn.c 4-strpbrk.c 6-abs.c
```
*	Create the archive file
	We use the ar command to create a static library. The 'cr' stands for create or recreate, so if the library doesnt exist it will be created, if it does it'll overwrite it. By convention library starts with 'lib'. It is also necessary to create header files that define the prototype for library functions. The header is included in any source code that links to the library
```
$ ar cr libmy.a *.o
```
