#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Desc: The prototypes of all the functions and the
 * prototype of the function _putchar used in
 * directory 0x06-pointers_arrays_strings
 */

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *);

#endif
