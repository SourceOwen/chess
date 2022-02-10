#include<stdio.h>
#include<graphics.h>
#include<windows.h>
#include"func.h"
int main() {

	initpaint();

	while(1) {
//	paintmenu();
		Sleep(0.35);
		paintgpalce();
	}
	return 0;
}
