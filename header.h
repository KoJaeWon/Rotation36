#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

double time1;
double time2;
double time3;
double time4;
int gendata();
void trivial(char*tri, int d, int n);
void juggle(char *jug, int d, int n);
void swap(char *str1, int i1, int i2, int d);
void blockswap(char *str, int d, int n);
void reverse(char *str1, int a, int b);
void reversal(char *str1,int d,int n);
void printhead();
void printresult(int, int);
