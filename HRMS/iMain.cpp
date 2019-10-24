/*
    Original Author: S. M. Shahriar Nirjon
    Last Modified by: Mohammad Saifur Rahman
    last modified: October 13, 2015
    Version: 2.0
*/

# include "iGraphics.h"
# include <time.h>
int page_number=1, image[13], errorcheck[7],payment;
int mposx,  mposy, stringvaluecheck=-1, i[4], flag=0,  checkflag=0, len=0,counter=0,counters=0,showimage;
int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14;
int pcheckin,pcheckout;
int procyear,procmonth,procday;
char str[500], strcheck[500], str1[500],c[20],invalidglobal[10000],timedisplay[26],delnid[20];
char cname[500], occup[500], imageloc[500], imgdisplay[500], checkin[500], checkout[500], contact[30], email[100], nid[20];
char inpn[5], insnpn[5], insdpn[5], indnpn[5], inddpn[5];
bool musicOn = true;
# include "Structure.h"
# include "FileManagement.h"
# include "Allpages.h"
# include "InputControl.h"
# include "PageControl.h"

/*
	function iDraw() is called again and again by the system.
*/

void iDraw()
{
	//place your drawing codes here
	iClear();
	if(page_number!=1)
	{
		imagedisplay(page_number);
		iShowBMP(40,520, "pic//download.bmp");
		iShowBMP(95,525, "pic//Capture.bmp");
	}
	else
		iShowBMP(0,0,"pic//hotelintro.bmp");
	
	time_t timer = time(NULL);
	iSetColor(255,0,0);
	strcpy(timedisplay,ctime(&timer));
	timedisplay[24]='\0';
	iText(720,580,timedisplay,GLUT_BITMAP_TIMES_ROMAN_24);
	procyear=1000*(timedisplay[20]-48)+100*(timedisplay[21]-48)+10*(timedisplay[22]-48)+(timedisplay[23]-48);
	procday=10*(timedisplay[8]-48)+(timedisplay[9]-48);
	char curmonth[4];
	for(int m=0;m<3;m++)
		curmonth[m]=timedisplay[4+m];
	curmonth[3]='\0';
	if(strcmp(curmonth,"Jan")==0)
		procmonth=1;
	else if(strcmp(curmonth,"Feb")==0)
		procmonth=2;
	else if(strcmp(curmonth,"Mar")==0)
		procmonth=3;
	else if(strcmp(curmonth,"Apr")==0)
		procmonth=4;
	else if(strcmp(curmonth,"May")==0)
		procmonth=5;
	else if(strcmp(curmonth,"Jun")==0)
		procmonth=6;
	else if(strcmp(curmonth,"Jul")==0)
		procmonth=7;
	else if(strcmp(curmonth,"Aug")==0)
		procmonth=8;
	else if(strcmp(curmonth,"Sep")==0)
		procmonth=9;
	else if(strcmp(curmonth,"Oct")==0)
		procmonth=10;
	else if(strcmp(curmonth,"Nov")==0)
		procmonth=11;
	else if(strcmp(curmonth,"Dec")==0)
		procmonth=12;
	pagecall(page_number);
	displayinput();
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
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		page_number=page_number_checker(mx,my,page_number);
		inputmanager(mx,my,page_number);
		if(page_number==8 && mx>=850 && mx<=950 && my>=18 && my<=55)
			page_number=14;
		if(page_number==15&&mx>=308 && mx<=641 && my>=301 && my<=340)
			counters=1;
		if(page_number==13&&mx>=240 && mx<=470 && my>=460 && my<=500)
			counter=1;
		if(page_number==13&&mx>=45 && mx<=205 && my>=340 && my<=380)
			p1=1;
		if(page_number==13&&mx>=455 && mx<=615 && my>=340 && my<=380)
			p3=1;
		if(page_number==13&&mx>=250 && mx<=410 && my>=340 && my<=380)
			p2=1;
		if(page_number==13&&mx>=653 && mx<=813 && my>=340 && my<=380)
			p4=1;
		if(page_number==13&&mx>=45 && mx<=205 && my>=280 && my<=320)
			p5=1;
		if(page_number==13&&mx>=250 && mx<=410 && my>=280 && my<=320)
			p6=1;
		if(page_number==13&&mx>=455 && mx<=615 && my>=280 && my<=320)
			p7=1;
		if(page_number==13&&mx>=313 && mx<=528 && my>=177 && my<=214)
			p8=1;
		if(page_number==13&&mx>=310 && mx<=530 && my>=175 && my<=215)
			p9=1;
		if(page_number==13&&mx>=310 && mx<=530 && my>=125 && my<=165)
			p10=1;
		if(page_number==13&&mx>=310 && mx<=530 && my>=25 && my<=65)
			p11=1;
		if(page_number==13&&mx>=310 && mx<=530 && my>=75 && my<=105)
			p12=1;
		if(page_number==13&&mx>=851 && mx<=949 && my>=19 && my<=55)
			p13=1;
		if(page_number==13&&mx>=653 && mx<=815 && my>=280 && my<=320)
			p14=1;
		if(page_number==3&&mx>=250 && mx<=410 && my>=340 && my<=380)
			pcheckin=1;
		if(page_number==3&&mx>=455 && mx<=615 && my>=340 && my<=380)
			pcheckout=1;
		musicOn=true;
		PlaySound("music.wav",NULL, SND_ASYNC);
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here

	}
	if(button == GLUT_LEFT_BUTTON && state == GLUT_UP)
	{
	
	}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

		

void iPassiveMouseMove(int mx,int my)
{
	//place your code here
	mposx = mx;
	mposy = my;
	if(mx== 2){}        /*Something to do with mx*/
	else if(my== 2){}   /*Something to do with my*/
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if(page_number==15 && key == '\r')
	{
		//do something with 'q'
		counters=2;
	}
	if(page_number==3 && key == '\r')
	{
		//do something with 'q'
		pcheckin=pcheckout=0;
	}
	if(page_number==13 && key == '\r')
	{
		//do something with 'q'
		p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0,p10=0,p11=0,p12=0,p13=0,p14=0;
		
			  counter=0;
	}
	//place your codes for other keys here
	keyboardentry(key);
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

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}

int main()
{
	//place your own initialization codes here.
	
	iInitialize(1000, 600, "HRMS");
	image[0]=iLoadImage("pic//sign.png");
	image[1]=iLoadImage("pic//4.png");
	image[2]=iLoadImage("pic//7.png");
	image[3]=iLoadImage("pic//tickmark.png");
	image[4]=iLoadImage("pic//crossmark.png");
	image[5]=iLoadImage("pic//Complimentary.jpg");
	image[6]=iLoadImage("pic//hotel-png-image-24504.png");
	image[7]=iLoadImage("pic//free wifi icon.png");
	iStart();
	return 0;
}
