#define _CRT_SECURE_NO_WARNINGS
#define MAX 10
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>

int main()
{
	FILE* fp;
	fp = fopen("Sunday.txt", "w");
	fputs("hello world", fp);
	fclose(fp);
}