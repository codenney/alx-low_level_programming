#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>

int _putchar(int ch);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int add(int, int);
int print_last_digit(int);
void print_to_98(int n);

void positive_or_negative(int n);
int largest_number(int a, int b, int c);

void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);

#endif