#include "iGraphics.h"

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


int i = 0;
void iDraw()
{
	
	iClear();
	
	
	if (i == 0){
		iShowBMP(0, 0, "MAIN MENU FINAL.bmp");
		
	}
	if (i == 1){
		 
		
		
	}
	

}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/

void iMouseMove(int mx, int my)
{
	
}
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	printf("%d %d\n", mx, my);
	if (i == 0){
		if (mx >= 330 && mx <= 496 && my >= 479 && my <= 627)
		{
// play code
			
			
		}

		if (mx >= 545 && mx <= 703 && my >= 516 && my <= 595)
		{
			//cars
			
		}

		if (mx >= 333 && mx <= 485&& my >= 284 && my <= 431)
		{
			//option
			
		}

		if (mx >= 540 && mx <= 703 && my >= 332 && my <= 402)
		{
//maps
			
		}
		if (mx >= 379 && mx <= 660 && my >= 104 && my <= 248)
		{
			//weapons
			
		}
		if (mx >= 888 && mx <= 998 && my >= 31 && my <= 108)
		{
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
	if (key == '\r')
	{
		
	}
	
	
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

	
	if (key == GLUT_KEY_RIGHT)
	{
					
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}


int main()
{
	///srand((unsigned)time(NULL));
	
	iInitialize(1024, 1000, "UnderGround Racing 2d");
	
	///updated see the documentations
	iStart();
	return 0;
}