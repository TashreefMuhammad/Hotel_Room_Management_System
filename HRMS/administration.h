/*A derived page of Page One
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as PageFifteen*/
void pageFifteen()
{
	flag=1;
	colorcontrol sn,sd,dn,dd;
	iSetColor(43, 33, 186);
	iText(155,300, "Password : ", GLUT_BITMAP_TIMES_ROMAN_24);
	double x[]={300,350,600,650,600,350};double y[]={320,300,300,320,340,340};
	iFilledPolygon(x,y,6);
	if(counters==1)
	{
         
		
		sn.r=255;
	iSetColor(43, 33, 186);
	iText(155,300, "Password : ", GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(sn.r,0,0);
	double x[]={300,350,600,650,600,350};double y[]={320,300,300,320,340,340};
	iFilledPolygon(x,y,6);

     	}
		if(counters==2)
	   {
		iSetColor(43, 33, 186);
	iText(155,300, "Password : ", GLUT_BITMAP_TIMES_ROMAN_24);
	double x[]={300,350,600,650,600,350};double y[]={320,300,300,320,340,340};
	iFilledPolygon(x,y,6);
     	}
	if(mposx>=850 && mposx<=950 && mposy>=18 && mposy<=53)
		{
			sd.r=255;
	iSetColor(sd.r, 0, 0);
	iFilledRectangle(900-50, 18, 100, 35);
	}
	else
	{
		sd.r=0;
	iSetColor(sd.r, 255, 255);
	iFilledRectangle(900-50, 18, 100, 35);
	}
	
	
	

	iSetColor(0,0,0);
	iText(920-50, 30, "Submit ", GLUT_BITMAP_HELVETICA_18 );
}
/*A derived page of Page Fifteen
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Sixteen*/
void pageSixteen()
{
	iSetColor(43, 33, 186);
	iText(155,300, "Invalid Password", GLUT_BITMAP_TIMES_ROMAN_24);
	memset(str,'\0',500);
	memset(str1,'\0',500);
}
/*A derived page of Page Fifteen
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Seventeen*/
void pageSeventeen()
{
	memset(str,'\0',500);
	memset(str1,'\0',500);
	iSetColor(43, 33, 186);
	iText(155,300, "Welcome to Administration Panel", GLUT_BITMAP_TIMES_ROMAN_24);
	
	colorcontrol sn,sd,dn,dd,add,delet;
	if(mposx>=399 && mposx<=484 && mposy>=250 && mposy<=259)
		sn.r=255;
	else
		sn.r=0;
	if(mposx>=372 && mposx<=460 && mposy>=231 && mposy<=240)
		sd.r=255;
	else
		sd.r=0;
	if(mposx>=252 && mposx<=340 && mposy>=210 && mposy<=218)
		dn.r=255;
	else
		dn.r=0;
	if(mposx>=252 && mposy<=340 && mposy>=190 && mposy<=210)
		add.r=255;
	else
		add.r=0;
	if(mposx>=252 && mposy<=340 && mposy>=170 && mposy<=190)
		delet.r=255;
	else
		delet.r=0;
	iSetColor(sn.r,0,0);
	iText(40,250, "- To view complete diagram of this software (click here)", GLUT_BITMAP_8_BY_13);
	iSetColor(sd.r,0,0);
	iText(40,230, "- To view instructions for this software (click here)", GLUT_BITMAP_8_BY_13);
	iSetColor(dn.r,0,0);
	iText(40,210, "- To view some saved data (click here)", GLUT_BITMAP_8_BY_13);
	iSetColor(add.r,0,0);
	iText(40,190,"- To enter/add some new data (click here)", GLUT_BITMAP_8_BY_13);
	iSetColor(delet.r,0,0);
	iText(40,170,"- To delete any previous data (click here)",GLUT_BITMAP_8_BY_13);
}
/*A derived page of Page Seventeen
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Eighteen*/
void pageEighteen()
{
	iShowBMP(0,0,"pic//HRMS_Architecture.bmp");
}
/*A derived page of Page Seventeen
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Eighteen*/
void pageNineteen()
{
	iShowBMP(0,0,"pic//Instructions_HRMS1.bmp");
}
/*A derived page of Page Seventeen
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Twenty*/
void pageTwenty()
{
	iSetColor(43, 33, 186);
	FILE *fp=fopen("summary.txt","r");
	char buffer[10][50];
	int i[4],j=0;
	while(fscanf(fp,"%s %d",&c,&i[j])!=EOF)
	{
		itoa(i[j],buffer[j],10);
		j++;
	}
	iText(155,300,"Single Normal", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(350,300,buffer[0],GLUT_BITMAP_TIMES_ROMAN_24);
	iText(155,270,"Single Deluxe",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(350,270,buffer[1],GLUT_BITMAP_TIMES_ROMAN_24);
	iText(155,240,"Double Normal",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(350,240,buffer[2],GLUT_BITMAP_TIMES_ROMAN_24);
	iText(155,210,"Double Deluxe",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(350,210,buffer[3],GLUT_BITMAP_TIMES_ROMAN_24);
	fclose(fp);
}