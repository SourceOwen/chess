#include<stdio.h>
#include<graphics.h>
#include"func.h"
#include"def.h"

struct chess
{
	int x;
	int y;
	kd kind;
}red[17], black[17];
void initpaint() {
	initgraph(640,427, SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	
}
void gchess() {		//棋子初始化
	black[1] = { x五,y1,jiang };
	black[2] = { x四,y1,shi };	  black[3] = { x六,y1,shi };
	black[4] = { x三,y1,xiang };   black[5] = { x七,y1,xiang };
	black[6] = { x二,y1,ma };	  black[7] = { x八,y1,ma };
	black[8] = { x一,y1,jv };	  black[9] = { x九,y1,jv };
	black[10] = { x二,y3,pao };	  black[11] = { x八,y3,pao };
	black[12] = { x一,y4,bing };	  black[13] = { x九,y4,bing };
	black[14] = { x三,y4,bing };	  black[15] = { x七,y4,bing };
	black[16] = { x五,y4,bing };

	red[1] = { x5,y10,jiang };
	red[2] = { x4,y10,shi };	 red[3] = { x6,y10,shi };
	red[4] = { x3,y10,xiang };	 red[5] = { x7,y10,xiang };
	red[6] = { x2,y10,ma };	 red[7] = { x8,y10,ma };
	red[8] = { x1,y10,jv };	 red[9] = { x9,y10,jv };
	red[10] = { x2,y8,pao };	 red[11] = { x8,y8,pao };
	red[12] = { x1,y7,bing };	 red[13] = { x9,y7,bing };
	red[14] = { x3,y7,bing };	 red[15] = { x7,y7,bing };
	red[16] = { x5,y7,bing };



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
	loadimage(&fmenu0a, L"D:\\code\\VS\\Project1\\a象棋.jpg", 264, 268);
	loadimage(&fmenu0a, L"D:\\code\\VS\\Project1\\a象棋.jpg", 264, 268);
	loadimage(&fmenu1a, L"D:\\code\\VS\\Project1\\a开始游戏.jpg",193, 44);
	loadimage(&fmenu2a, L"D:\\code\\VS\\Project1\\a棋盘复盘.jpg",193, 44);
	loadimage(&fmenu3a, L"D:\\code\\VS\\Project1\\a设置.jpg",193, 44);
	loadimage(&fmenu4a, L"D:\\code\\VS\\Project1\\a退出游戏.jpg",193, 44);
	
	putimage(105, 84, &fmenu0a);	
	putimage(401, 85, &fmenu1a);	putimage(401, 146, &fmenu2a);	
	putimage(401, 217, &fmenu3a);	putimage(401, 290, &fmenu4a);

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
void pcw(int x, int y) {
	line(x - 3, y - 3, x - 3, y - 10);
	line(x - 3, y - 3, x - 10, y - 3);
	line(x + 3, y - 3, x + 3, y - 10);
	line(x + 3, y - 3, x + 10, y - 3);
	line(x - 3, y + 3, x - 10, y + 3);
	line(x - 3, y + 3, x - 3, y + 10);
	line(x + 3, y + 3, x + 10, y + 3);
	line(x + 3, y + 3, x + 3, y + 10);

}

void paintchess() {
	//加载图片
	IMAGE BL11;	IMAGE BL12;
	IMAGE BL13;	IMAGE BL14;
	IMAGE BL15;	IMAGE BL16;
	IMAGE BL17;
	loadimage(&BL11, L"D:\\code\\VS\\Project1\\11.jpg", 30, 30);
	loadimage(&BL12, L"D:\\code\\VS\\Project1\\12.jpg", 30, 30);
	loadimage(&BL13, L"D:\\code\\VS\\Project1\\13.jpg", 30, 30);
	loadimage(&BL14, L"D:\\code\\VS\\Project1\\14.jpg", 30, 30);
	loadimage(&BL15, L"D:\\code\\VS\\Project1\\15.jpg", 30, 30);
	loadimage(&BL16, L"D:\\code\\VS\\Project1\\16.jpg", 30, 30);
	loadimage(&BL17, L"D:\\code\\VS\\Project1\\17.jpg", 30, 30);

	IMAGE RD21;	IMAGE RD22;
	IMAGE RD23;	IMAGE RD24;
	IMAGE RD25;	IMAGE RD26;
	IMAGE RD27;
	loadimage(&RD21, L"D:\\code\\VS\\Project1\\21.jpg", 30, 30);
	loadimage(&RD22, L"D:\\code\\VS\\Project1\\22.jpg", 30, 30);
	loadimage(&RD23, L"D:\\code\\VS\\Project1\\23.jpg", 30, 30);
	loadimage(&RD24, L"D:\\code\\VS\\Project1\\24.jpg", 30, 30);
	loadimage(&RD25, L"D:\\code\\VS\\Project1\\25.jpg", 30, 30);
	loadimage(&RD26, L"D:\\code\\VS\\Project1\\26.jpg", 30, 30);
	loadimage(&RD27, L"D:\\code\\VS\\Project1\\27.jpg", 30, 30);
	
	//输出黑棋
	putimage(black[1].x - 15, black[1].y - 15, &BL11);

	putimage(black[2].x - 15, black[2].y - 15, &BL12);
	putimage(black[3].x - 15, black[3].y - 15, &BL12);

	putimage(black[4].x - 15, black[4].y - 15, &BL13);
	putimage(black[5].x - 15, black[5].y - 15, &BL13);

	putimage(black[6].x - 15, black[6].y - 15, &BL14);
	putimage(black[7].x - 15, black[7].y - 15, &BL14);

	putimage(black[8].x - 15, black[8].y - 15, &BL15);
	putimage(black[9].x - 15, black[9].y - 15, &BL15);

	putimage(black[10].x - 15, black[10].y - 15, &BL16);
	putimage(black[11].x - 15, black[11].y - 15, &BL16);

	putimage(black[12].x - 15, black[12].y - 15, &BL17);
	putimage(black[13].x - 15, black[13].y - 15, &BL17);
	putimage(black[14].x - 15, black[14].y - 15, &BL17);
	putimage(black[15].x - 15, black[15].y - 15, &BL17);
	putimage(black[16].x - 15, black[16].y - 15, &BL17);


	//输出红棋
	putimage(red[1].x - 15, red[1].y - 15, &RD21);

	putimage(red[2].x - 15, red[2].y - 15, &RD22);
	putimage(red[3].x - 15, red[3].y - 15, &RD22);

	putimage(red[4].x - 15, red[4].y - 15, &RD23);
	putimage(red[5].x - 15, red[5].y - 15, &RD23);

	putimage(red[6].x - 15, red[6].y - 15, &RD24);
	putimage(red[7].x - 15, red[7].y - 15, &RD24);

	putimage(red[8].x - 15, red[8].y - 15, &RD25);
	putimage(red[9].x - 15, red[9].y - 15, &RD25);

	putimage(red[10].x - 15, red[10].y - 15, &RD26);
	putimage(red[11].x - 15, red[11].y - 15, &RD26);

	putimage(red[12].x - 15, red[12].y - 15, &RD27);
	putimage(red[13].x - 15, red[13].y - 15, &RD27);
	putimage(red[14].x - 15, red[14].y - 15, &RD27);
	putimage(red[15].x - 15, red[15].y - 15, &RD27);
	putimage(red[16].x - 15, red[16].y - 15, &RD27);

}
void paintgpalce() {
	BeginBatchDraw();
	//图形绘制
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
	pcw(80, 100);
	//右上炮位
	pcw(320, 100);
	//左下炮位
	pcw(80, 300);
	//右上炮位
	pcw(320,300);
	//兵位
	pcw(120,140);
	pcw(200, 140);
	pcw(280, 140);
	pcw(120, 260);
	pcw(200, 260);
	pcw(280, 260);
	line(40 + 3, 140 - 3, 40 + 3, 140 - 10);
	line(40 + 3, 140 - 3, 40 + 10, 140 - 3);
	line(40 + 3, 140 + 3, 40 + 10, 140 + 3);
	line(40 + 3, 140 + 3, 40 + 3, 140 + 10);
	line(360 - 3, 140 - 3, 360 - 3, 140 - 10);
	line(360 - 3, 140 - 3, 360 - 10, 140 - 3);
	line(360 - 3, 140 + 3, 360 - 10, 140 + 3);
	line(360 - 3, 140 + 3, 360 - 3, 140 + 10);
	line(40 + 3, 260 - 3, 40 + 3, 260 - 10);
	line(40 + 3, 260 - 3, 40 + 10, 260 - 3);
	line(40 + 3, 260 + 3, 40 + 10, 260 + 3);
	line(40 + 3, 260 + 3, 40 + 3, 260 + 10);
	line(360 - 3, 260 - 3, 360 - 3, 260 - 10);
	line(360 - 3, 260 - 3, 360 - 10, 260 - 3);
	line(360 - 3, 260 + 3, 360 - 10, 260 + 3);
	line(360 - 3, 260 + 3, 360 - 3, 260 + 10);
	rectangle(40, 20, 40+40*8, 20+40*9);					//内轮廓
	rectangle(40-3, 20-3, 40+3 + 40 * 8, 20+3 + 40 * 9);	//外轮廓
	
	paintchess();
	for (int m = 1; m++;m<17) {
		chesschoose(red[m].x, red[m].y);
	}
	FlushBatchDraw();

}
