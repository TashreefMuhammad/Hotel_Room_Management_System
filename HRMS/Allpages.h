//This header file shall hold the primary structure of all the pages or interfaces
# include "HotelFeatures.h"
# include "administration.h"
# include "room_booking.h"
/*The home page part
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page One*/
void pageOne()
{
	//Declaration of the software name with a welcome message
	flag=0;
	colorcontrol hotelfeatures,admin,room;
	iSetColor(255,255, 255);
	iText(250,400, "Welcome To Hotel Room Management System", GLUT_BITMAP_TIMES_ROMAN_24);

	if(mposx>=100 && mposx<=840 && mposy>=280 && mposy<=320)
		hotelfeatures.g=hotelfeatures.b=100;
	else
		hotelfeatures.g=hotelfeatures.b=255;
	if(mposx>=100 && mposx<=840 && mposy>=80 && mposy<=120)
		admin.g=admin.b=100;
	else
		admin.g=admin.b=255;
	//Setting up boxes to be displayed in the page
	iSetColor(255,hotelfeatures.g,hotelfeatures.b);
	double c[]={100, 120, 820,840,820,120}; double d[]={300, 320,320,300,280,280};
	iFilledPolygon(c,d,6);

	iSetColor(255,admin.g,admin.b);
	double x[]={100, 120, 820,840,820,120}; double y[]={100, 120,120,100,80,80};
	iFilledPolygon(x,y,6);

	
	//Adding order statements on which block shall lead to which part
	iSetColor(0,0, 0);
	iText(400,297, "Hotel Features", GLUT_BITMAP_8_BY_13);
	iText(400,95, "Administration", GLUT_BITMAP_8_BY_13);
}
/*This Function decides which background image to be displayed
return type:	void
parameters:		int pagenumber
				pagenumber= number of the page
*/
void imagedisplay(int pagenumber)
{
	if(pagenumber==2||pagenumber==21||pagenumber==22||pagenumber==23||pagenumber==24)
	{
		iShowBMP(0,0,"pic//1.bmp");
		if(pagenumber==2)
		{
			iShowImage(631,154,200,200,image[6]);
			iShowImage(400,400,200,200,image[0]);
		}
		if(pagenumber==22||pagenumber==24)
		{	
			iShowImage(600,100,300,300,image[7]);
			iShowImage(350,300,200,200,image[5]);
		}
	}
	else
	{
		iSetColor(255,255,255);
		iFilledRectangle(0,0,1000,600);
	}
}