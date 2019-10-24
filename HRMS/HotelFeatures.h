/*A derived page of Page One
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Two*/
void pageTwo()
{
	iSetColor(43, 33, 186);
	iText(155,300, "Here are features of the Hotel", GLUT_BITMAP_TIMES_ROMAN_24);
	colorcontrol sn,sd,dn,dd;
	if(mposx>=40 && mposx<=140 && mposy>=250 && mposy<=270)
		sn.r=255;
	else
		sn.r=0;
	if(mposx>=40 && mposx<=140 && mposy>=225 && mposy<=245)
		sd.r=255;
	else
		sd.r=0;
	if(mposx>=40 && mposx<=140 && mposy>=205 && mposy<=225)
		dn.g=255;
	else
		dn.r=0;
	if(mposx>=40 && mposx<=140 && mposy>=185 && mposy<=205)
		dd.r=255;
	else
		dd.r=0;
	iSetColor(sn.r,0,0);
	iText(40,250, "Single Normal", GLUT_BITMAP_9_BY_15);
	iSetColor(sd.r,0,0);
	iText(40,230, "Single Deluxe", GLUT_BITMAP_9_BY_15);
	iSetColor(dn.r,0,0);
	iText(40,210, "Double Normal", GLUT_BITMAP_9_BY_15);
	iSetColor(dd.r,0,0);
	iText(40,190, "Double Deluxe", GLUT_BITMAP_9_BY_15);
}
/*A derived page of Page Two
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Twentyone*/
void pageTwentyone()
{
	iSetColor(255,0,0);
	iText(34,415, "FEATURES : ", GLUT_BITMAP_TIMES_ROMAN_24 );
	iSetColor(255,0,0);
	iFilledCircle(170,363,10);
	iFilledCircle(170,313,10);
	iFilledCircle(170,263,10);
	iFilledCircle(170,213,10);
	iFilledCircle(170,163,10);
	iSetColor(0,0,255);
	
	iText(212,360, " One Normal Bed. ", GLUT_BITMAP_9_BY_15 );
	iText(212,310, " One Attached Bathroom. ", GLUT_BITMAP_9_BY_15 );
	iText(212,260, " One Air Conditioner.", GLUT_BITMAP_9_BY_15);
	iText(212,210, " One TV. ", GLUT_BITMAP_9_BY_15 );
	iText(212,160, " One Cupboard. ", GLUT_BITMAP_9_BY_15 );
}
/*A derived page of Page Two
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Twentytwo*/
void pageTwentytwo()
{
	iSetColor(255,0,0);
	iText(34,415, "FEATURES : ", GLUT_BITMAP_TIMES_ROMAN_24 );
	iSetColor(255,0,0);
	iFilledCircle(170,363,10);
	iFilledCircle(170,313,10);
	iFilledCircle(170,263,10);
	iFilledCircle(170,213,10);
	iFilledCircle(170,163,10);
	iFilledCircle(170,113,10);
	iSetColor(0,0,255);
	
	iText(212,360, " One Special Bed. ", GLUT_BITMAP_9_BY_15 );
	iText(212,310, " One Attached Bathroom. ", GLUT_BITMAP_9_BY_15 );
	iText(212,260, " One AC & One Heater.", GLUT_BITMAP_9_BY_15);
	iText(212,210, " One LED TV. ", GLUT_BITMAP_9_BY_15 );
	iText(212,160, " One Cupboard. ", GLUT_BITMAP_9_BY_15 );
	iText(212,110, " Breakfast Free. ", GLUT_BITMAP_9_BY_15 );
}
/*A derived page of Page Two
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Twentythree*/
void pageTwentythree()
{
	iSetColor(255,0,0);
	iText(34,415, "FEATURES : ", GLUT_BITMAP_TIMES_ROMAN_24 );
	iSetColor(255,0,0);
	iFilledCircle(170,363,10);
	iFilledCircle(170,313,10);
	iFilledCircle(170,263,10);
	iFilledCircle(170,213,10);
	iFilledCircle(170,163,10);
	iSetColor(0,0,255);
	
	iText(212,360, " Two Normal Beds. ", GLUT_BITMAP_9_BY_15 );
	iText(212,310, " One Attached Bathroom. ", GLUT_BITMAP_9_BY_15 );
	iText(212,260, " Two Air Conditioners.", GLUT_BITMAP_9_BY_15);
	iText(212,210, " Two TVs. ", GLUT_BITMAP_9_BY_15 );
	iText(212,160, " Two Cupboards. ", GLUT_BITMAP_9_BY_15 );
}
/*A derived page of Page Two
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Twentyfour*/
void pageTwentyfour()
{
	iSetColor(255,0,0);
	iText(34,430, "FEATURES : ", GLUT_BITMAP_TIMES_ROMAN_24 );
	iSetColor(255,0,0);
	iFilledCircle(170,363+20,10);
	iFilledCircle(170,313+20,10);
	iFilledCircle(170,263+20,10);
	iFilledCircle(170,213+20,10);
	iFilledCircle(170,163+20,10);
	iFilledCircle(170,163-50+20,10);
	iFilledCircle(170,163-100+20,10);
	iFilledCircle(170,163-150+20,10);
	iSetColor(0,0,255);
	
	iText(212,360+20, " Room with balcony . ", GLUT_BITMAP_9_BY_15 );
	iText(212,310+20, " Two special Bed . ", GLUT_BITMAP_9_BY_15 );
	iText(212,260+20, " One Attached Bathroom .", GLUT_BITMAP_9_BY_15);
	iText(212,210+20, " Two  Air Conditioners. ", GLUT_BITMAP_9_BY_15 );
	iText(212,160+20, " Two  TVs. ", GLUT_BITMAP_9_BY_15 );
	iText(212,110+20, " Two Cupboard. ", GLUT_BITMAP_9_BY_15 );
	iText(212,60+20, " Two Heater. ", GLUT_BITMAP_9_BY_15 );
	iText(212,10+20, " Free breakfast . ", GLUT_BITMAP_9_BY_15 );
}