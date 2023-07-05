#ifndef MAIN_H
#define MAIN_H
char *_memcpy(char *dest, char *src, unsigned int n);
char* _memset(char *dest, char b, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
void print_chessboard(char (*a)[8]);
char *_strpbrk(char *s, char *accept);
int _putchar(char c);
char *_strstr(char *haystack, char *needle);
void print_diagsums(int *a, int size);
#endif
