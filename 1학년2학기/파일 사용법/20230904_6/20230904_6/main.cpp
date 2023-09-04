#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>

int main()
{
	int year = 2023;
	int old = 20;
	FILE* fp;
	fp = fopen("Sunday.txt", "w");
	fprintf(fp,"This year is %d\nMy old is : %d", year, old);
	fclose(fp);
}