#include<stdio.h>
#include<graphics.h>
#include"func.h"
#include"def.h"
MOUSEMSG cm;
void chesschoose(int ax,int ay) {

	cm = GetMouseMsg();
		for (int i=1; i++; i < 17) {
		if (cm.x >= ax - 30 && cm.x <= ax + 30
			&& cm.y >= ay - 30 && cm.y <= ay + 30) {

			if (cm.uMsg == WM_LBUTTONDOWN) {		//如果按下鼠标左键实现相应功能.
				setlinecolor(RED);
				rectangle(ax - 2 - 30, ay - 2 - 30, ax + 2 + 30, ay + 2 + 30);					//内轮廓
				printf("选中红色棋子\n");
			}
			else {}
		}
	}

}
	