#include<stdio.h>
#include<graphics.h>
#include"func.h"
void initpaint() {
	initgraph(640,427, SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	
}

void paintmenu() {
	BeginBatchDraw();
	cleardevice();
	IMAGE fmenu0a;
	IMAGE fmenu1a;	IMAGE fmenu1b;
	IMAGE fmenu2a;	IMAGE fmenu2b;
	IMAGE fmenu3a;	IMAGE fmenu3b;
	IMAGE fmenu4a;	IMAGE fmenu4b;
	MOUSEMSG m;
	int temp1=0;
	loadimage(&fmenu0a, L"D:\\code\\VS\\Project1\\a象棋.jpg", 264, 268);
	loadimage(&fmenu1a, L"D:\\code\\VS\\Project1\\a开始游戏.jpg",193, 44);
	loadimage(&fmenu2a, L"D:\\code\\VS\\Project1\\a棋盘复盘.jpg",193, 44);
	loadimage(&fmenu3a, L"D:\\code\\VS\\Project1\\a设置.jpg",193, 44);
	loadimage(&fmenu4a, L"D:\\code\\VS\\Project1\\a退出游戏.jpg",193, 44);

	loadimage(&fmenu1b, L"D:\\code\\VS\\Project1\\b开始游戏.jpg", 195, 46);
	loadimage(&fmenu2b, L"D:\\code\\VS\\Project1\\b棋盘复盘.jpg", 195, 46);
	loadimage(&fmenu3b, L"D:\\code\\VS\\Project1\\b设置.jpg", 195, 46);
	loadimage(&fmenu4b, L"D:\\code\\VS\\Project1\\b退出游戏.jpg", 195, 46);
	
	putimage(105, 84, &fmenu0a);
	putimage(401, 85, &fmenu1a);
	putimage(401, 146, &fmenu2a);
	putimage(401, 217, &fmenu3a);
	putimage(401, 290, &fmenu4a);


	setlinecolor(BLACK);
		m = GetMouseMsg();
		printf("%d,%d\n", m.x, m.y);
		if (m.x > 400&&m.x<595) {
			if (m.y >= 84  && m.y <= 84 + 46)  { printf("输出图像1\n");
			rectangle(400, 84, 594, 129);
			}
			if (m.y >= 145 && m.y <= 145 + 46) { printf("输出图像2\n");
			rectangle(400, 146, 594, 191);

			}
			if (m.y >= 216 && m.y <= 216 + 46) { printf("输出图像3\n");
			rectangle(400, 217, 594, 262);
			}
			if (m.y >= 289 && m.y <= 289 + 46) { printf("输出图像4\n"); 
			rectangle(400, 290, 594, 335);
			}
		}
		FlushBatchDraw();
	}
	void paintgpalce() {
	setlinecolor(BLACK);

	line(40,40,40,40);			//水平线
	for (int ix = 1; ix < 9; ix++) {
		line(40, 20 + ix * 40, 40 + 40 * 8, 20 + ix * 40);
	}
	line(40,40,40,40);			//竖直线
	for (int iy = 1; iy < 8; iy++) {
		line(40 + iy * 40, 20, 40 + iy * 40, 20 + 40 * 4);			//竖直线
	}
	for (int iy = 1; iy < 8; iy++) {
		line(40 + iy * 40, 20+40*9, 40 + iy * 40, 20 + 40 * 5);			//竖直线
	}
	//左上炮位
	line(80 - 3, 100 - 3, 80 - 3 , 100 - 10);
	line(80 - 3, 100 - 3, 80 - 10, 100 - 3 );
	line(80 + 3, 100 - 3, 80 + 3 , 100 - 10);
	line(80 + 3, 100 - 3, 80 + 10, 100 - 3 );
	line(80 - 3, 100 + 3, 80 - 10, 100 + 3);
	line(80 - 3, 100 + 3, 80 - 3 , 100 + 10);
	line(80 + 3, 100 + 3, 80 + 10, 100 + 3 );
	line(80 + 3, 100 + 3, 80 + 3 , 100 + 10);
	//右上炮位
	line(320 - 3, 100 - 3, 320 - 3, 100 - 10);
	line(320 - 3, 100 - 3, 320 - 10, 100 - 3);
	line(320 + 3, 100 - 3, 320 + 3, 100 - 10);
	line(320 + 3, 100 - 3, 320 + 10, 100 - 3);
	line(320 - 3, 100 + 3, 320 - 10, 100 + 3);
	line(320 - 3, 100 + 3, 320 - 3, 100 + 10);
	line(320 + 3, 100 + 3, 320 + 10, 100 + 3);
	line(320 + 3, 100 + 3, 320 + 3, 100 + 10);
	//左下炮位
	line(80 - 3, 300 - 3, 80 - 3, 300 - 10);
	line(80 - 3, 300 - 3, 80 - 10, 300 - 3);
	line(80 + 3, 300 - 3, 80 + 3, 300 - 10);
	line(80 + 3, 300 - 3, 80 + 10, 300 - 3);
	line(80 - 3, 300 + 3, 80 - 10, 300 + 3);
	line(80 - 3, 300 + 3, 80 - 3, 300 + 10);
	line(80 + 3, 300 + 3, 80 + 10, 300 + 3);
	line(80 + 3, 300 + 3, 80 + 3, 300 + 10);
	//右上炮位
	line(320 - 3, 300 - 3, 320 - 3, 300 - 10);
	line(320 - 3, 300 - 3, 320 - 10, 300 - 3);
	line(320 + 3, 300 - 3, 320 + 3, 300 - 10);
	line(320 + 3, 300 - 3, 320 + 10, 300 - 3);
	line(320 - 3, 300 + 3, 320 - 10, 300 + 3);
	line(320 - 3, 300 + 3, 320 - 3, 300 + 10);
	line(320 + 3, 300 + 3, 320 + 10, 300 + 3);
	line(320 + 3, 300 + 3, 320 + 3, 300 + 10);



	rectangle(40, 20, 40+40*8, 20+40*9);
	rectangle(40-3, 20-3, 40+3 + 40 * 8, 20+3 + 40 * 9);


	
}
