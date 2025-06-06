#include "iGraphics.h"
#include "bitmap_loader.h"
#define screenWidth 1024
#define screenHeight 1024
#define projectName "Underground Racing 2D"

/*
 function iDraw() is called again and again by the system.

 */

struct  cordinate
{
	int x;
	int y;
}cordinate[6];
struct roadCordinate
{
	int x;
	int y;
}rc[2];
char mn[20] = "images\\MAIN MENU FINAL.bmp";
char weapon[10]="";
char car[30] = "images\\Cars\\Car_1_01.png";
char maps="";
char carsmenu[20]=" ";
char optionsmenu=" ";
char road[50] = "images\\roads\\road1600.png";
char track[60] = {"images\\roads\\fRoad.png", "images\\roads\\fRoad2.png" ,"images\\roads\\fRoad3.png" };
int gamestate = 0;
int roadX = 0;
int roadY = 0;
int carX=500;
int carY=200;
int carIndex=0;
bool standPosition = true;
int standCounter = 0;

void iDraw()
{
	iClear();
	char carImg[40];
	
	
	if (gamestate==0)
	{
		iShowBMP(0, 0, mn);
		
	}
	else if (gamestate == 1)
	{
		int img = iLoadImage(road);
		iShowImage(0, 0, 1024, 1024, img);
		int img2 = iLoadImage(car);
		if (!standPosition)
		{
			iShowImage(carX, carY, 46, 96, img2);
		}
		else
		{
			//int img = iLoadImage(play);
			iShowImage(carX, carY, 46, 96, img2);
		}
	}
	else if (gamestate == 2)
	{
		iShowBMP(0, 0, carsmenu);
	}
	else if (gamestate == 3)
	{
		iShowBMP(0, 0, optionsmenu);
	}
	else if (gamestate == 4)
	{
		iShowBMP(0, 0, maps);
	}
	else if (gamestate == 5)
	{
		iShowBMP(0, 0, weapon);
	}
	else if (gamestate == 6)
	{
		exit(0);
	}
}

void iPassiveMouse(int x, int y)
{
	;
}


/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouse(int button, int state, int mx, int my)
{
	printf("%d %d\n", mx, my);
	if (i == 0){
		if (mx >= 330 && mx <= 496 && my >= 479 && my <= 627)
		{
// play code
			i+=1;
			
		}

		if (mx >= 545 && mx <= 703 && my >= 516 && my <= 595)
		{
			//cars
			i+=2;
		}

		if (mx >= 333 && mx <= 485&& my >= 284 && my <= 431)
		{
			//option
			i+=3;
		}

		if (mx >= 540 && mx <= 703 && my >= 332 && my <= 402)
		{
//maps	
			i+=4;
			
		}
		if (mx >= 379 && mx <= 660 && my >= 104 && my <= 248)
		{
			//weapons
			i+=5;
		}
		if (mx >= 888 && mx <= 998 && my >= 31 && my <= 108)
		{	
			i+=6;
			exit(0);
		}
	}

		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{


		}


		if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{

		}
	
}
	


/*
 function iKeyboard() is called whenever the user hits a key in keyboard.
 key- holds the ASCII value of the key pressed.
 */
void iKeyboard(unsigned char key)
{
	if (key == 8)
	{
		gamestate = 0;
	}
	//place your codes for other keys here

}

/*
 function iSpecialKeyboard() is called whenver user hits special keys like-
 function keys, home, end, pg up, pg down, arraows etc. you have to use
 appropriate constants to detect them. A list is:
 GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
 GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
 GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
 GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
 */
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		
	}
	else if (key == GLUT_KEY_RIGHT )
	{
		carX += 15;
	}
	else if (key == GLUT_KEY_LEFT)
	{
		carX -= 15;
	}
	else if (key == GLUT_KEY_UP)
	{
		carY += 15;
	}
	else if (key == GLUT_KEY_DOWN)
	{
		carY -= 15;
	}
	//place your codes for other keys here
}
void change()
{

}
int main()
{
	//place your own initialization codes here.
	int sum = 200;
	for (int i = 4; i >= 0; i--)
	{
		cordinate[i].x = 600;
		cordinate[i].y = sum;
		sum += 80;
	}
	iInitialize(screenWidth,screenHeight, projectName);
	iStart(); // it will start drawing

	return 0;
}