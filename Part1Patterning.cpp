#include<stdio.h>
#include<graphics.h>
#include"func.h"
void initpaint() {
	initgraph(640,427, SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	paintmenu();
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
	