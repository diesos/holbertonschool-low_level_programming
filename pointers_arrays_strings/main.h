#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(int c);
void print_alphabet(void);
void print_alphabet_x10(void);
int main(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int r);
int print_last_digit(int j);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int n);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
#endif
