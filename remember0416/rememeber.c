#include <stdio.h>
#include<windows.h>

#define ANSI_COLOR_YELLOW  "\x1b[33m"


void gotoxy(int x, int y) { //gotoxy�Լ� 
    COORD pos = { 2 * x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    int x = 20;
    int y = 4;

    int i = 0;

    gotoxy(x, y + i);  printf(ANSI_COLOR_YELLOW "  ������  "); i++;
    gotoxy(x, y + i);  printf("��������"); i++;
    gotoxy(x, y + i);  printf("���      ���"); i++;
    gotoxy(x, y + i);  printf("���      ���"); i++;
    gotoxy(x, y + i);  printf("���      ���"); i++;
    gotoxy(x, y + i);  printf("  ���  ���  "); i++;
    gotoxy(x, y + i);  printf("  ���  ���  "); i++;
    gotoxy(x, y + i);  printf("    ����   "); i++;
    gotoxy(x, y + i);  printf("    ����   "); i++;
    gotoxy(x, y + i);  printf("  ���  ���  "); i++;
    gotoxy(x, y + i);  printf("  ���  ���  "); i++;
    gotoxy(x, y + i);  printf("���      ���"); i++;
    gotoxy(x, y + i);  printf("���      ���"); i++;

    gotoxy(x, y + i+4);  printf(" Remember 0416"); i++;

    gotoxy(x, y +  8 + i);

}