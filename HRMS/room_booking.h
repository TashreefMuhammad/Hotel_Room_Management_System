/*A derived page of Page Seventeen
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Three*/
void pageThree()
{
	flag=3;
	iSetColor(100,100,0);
	iText(200,450,"Please Enter Check-in Date and Check-out Date",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(270,390,"Check-in Date");
	iText(265,320,"Format: DD/MM/YYYY");
	iText(470,320,"Format: DD/MM/YYYY");
	iText(475,390,"Check-out Date");
	if(pcheckin==1)
	{
	iSetColor(255,0,0);
	double m[]={250, 270, 390,410,390,270}; double n[]={360, 380, 380,360,340,340};
	iFilledPolygon(m,n,6);
	}
	else{
		iSetColor(43, 33, 186);
	double m[]={250, 270, 390,410,390,270}; double n[]={360, 380, 380,360,340,340};
	iFilledPolygon(m,n,6);
	}
	if(pcheckout==1)
	{	
	iSetColor(255,0,0);
	double o[]={455, 475, 595,615,595,475}; double p[]={360, 380,380,360,340,340};
	iFilledPolygon(o,p,6);
	}
	else{
	iSetColor(43, 33, 186);
	double o[]={455, 475, 595,615,595,475}; double p[]={360, 380,380,360,340,340};
	iFilledPolygon(o,p,6);
	}
	if(mposx>=850 && mposx<=950 && mposy>=18 && mposy<=53)
		{
	iSetColor(255, 0, 0);
	iFilledRectangle(900-50, 18, 100, 35);
	}
	else
	{
	iSetColor(0, 255, 100);
	iFilledRectangle(900-50, 18, 100, 35);
	}

	iSetColor(0,0,0);
	iText(920-50, 30, "Submit ", GLUT_BITMAP_HELVETICA_18 );
}
/*A derived page of Page Three
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Thirteen*/
void pageThirteen()
{
	flag=2;
	if(errorcheck[6]==2)
	{
		char firststring[500]={"CustomerImage//"},laststring[5]={".bmp"};
		strcat(firststring,imageloc);
		strcat(firststring,laststring);
		strcpy(imgdisplay,firststring);
		iShowBMP(600,400,imgdisplay);
	}
	else if(errorcheck[6]==1)
		iText(600,450,"No Image Found");
	colorcontrol sn,sd,dn,dd,ee,ff,gg,hh,ii,jj,kk,ll,mm,nn,oo,pp,qq,rr;
	iSetColor(0,0,0);
	iText(70,473, "Number of people: ", GLUT_BITMAP_9_BY_15 );
	if(counter==1)
	{
         
		sn.r=255;
		iSetColor(sn.r,0,0);
		double a[]={240, 270, 440,470,440,270}; double b[]={480, 500,500,480,460,460};
		iFilledPolygon(a,b,6);
	}
	else
	{
		iSetColor(43,33,186);
		double a[]={240, 270, 440,470,440,270}; double b[]={480, 500,500,480,460,460};
		iFilledPolygon(a,b,6);
	}
	iSetColor(0,0,0);
	iText(70,420, "The person taking responsibility for all these: ", GLUT_BITMAP_9_BY_15);
	iText(100,380+10, "Name", GLUT_BITMAP_9_BY_15);
	iText(283,380+10, "Occupation", GLUT_BITMAP_9_BY_15);
	iText(500,380+10, "Contact", GLUT_BITMAP_9_BY_15);
	iText(701,380+10, "Email", GLUT_BITMAP_9_BY_15);
	iText(70,315+10, "Check in Date",GLUT_BITMAP_9_BY_15);
	iText(60,270,"Format: DD/MM/YYYY");
	iText(270,315+10, "Check out date", GLUT_BITMAP_9_BY_15);
	iText(260,270,"Format: DD/MM/YYYY");
	iText(500,315+10, "NID num", GLUT_BITMAP_9_BY_15);
	iText(695,325,"Image Location");
	if(p1==1)
	{
         
		
		sn.r=255;
	
	iSetColor(sn.r,0,0);
	double i[]={45, 65, 185,205,185,65}; double j[]={360, 380,380,360,340,340};
	iFilledPolygon(i,j,6);
	}
	else
	{
	iSetColor(43, 33, 186);
	double i[]={45, 65, 185,205,185,65}; double j[]={360, 380,380,360,340,340};
	iFilledPolygon(i,j,6);
	}
	if(p2==1)
	{
         
		
		sn.r=255;
	
	iSetColor(sn.r,0,0);
	double m[]={250, 270, 390,410,390,270}; double n[]={360, 380, 380,360,340,340};
	iFilledPolygon(m,n,6);
	}
	else{
		iSetColor(43, 33, 186);
	double m[]={250, 270, 390,410,390,270}; double n[]={360, 380, 380,360,340,340};
	iFilledPolygon(m,n,6);
	}
	if(p3==1)
	{
		sn.r=255;
	
	iSetColor(sn.r,0,0);
	double o[]={455, 475, 595,615,595,475}; double p[]={360, 380,380,360,340,340};
	iFilledPolygon(o,p,6);
	}
	else{
	iSetColor(43, 33, 186);
	double o[]={455, 475, 595,615,595,475}; double p[]={360, 380,380,360,340,340};
	iFilledPolygon(o,p,6);
	}
	if(p4==1)
	{
		sn.r=255;
	
	iSetColor(sn.r,0,0);
	double s[]={653, 673, 793,813,793,673}; double t[]={360, 380,380,360,340,340};
	iFilledPolygon(s,t,6);
	}
	else{
	iSetColor(43, 33, 186);
	double s[]={653, 673, 793,813,793,673}; double t[]={360, 380,380,360,340,340};
	iFilledPolygon(s,t,6);
	}
	if(p5==1)
	{
		sn.r=255;
	
	iSetColor(sn.r,0,0);
	double ua[]={45, 65, 185,205,185,65}; double va[]={300, 320,320, 300,280,280};
	iFilledPolygon(ua,va,6);
	
	}
	else{
	iSetColor(43, 33, 186);

	double ua[]={45, 65, 185,205,185,65}; double va[]={300, 320,320, 300,280,280};
	iFilledPolygon(ua,va,6);
	}
	if(p6==1)
	{
		sn.r=255;
	
	iSetColor(sn.r,0,0);
	double sa[]={250, 270, 390,410,390,270}; double ta[]={300, 320,320, 300,280,280};
	iFilledPolygon(sa,ta,6);
	}
	else
	{
		iSetColor(43, 33, 186);
	double sa[]={250, 270, 390,410,390,270}; double ta[]={300, 320,320, 300,280,280};
	iFilledPolygon(sa,ta,6);

	}
	if(p7==1)
	{
		sn.r=255;
	
	iSetColor(sn.r,0,0);
	
	double oa[]={455, 475, 595,615,595,475}; double pa[]={300, 320,320, 300,280,280};
	iFilledPolygon(oa,pa,6);
	
	}
	else
	{
		
	iSetColor(43, 33, 186);
	double oa[]={455, 475, 595,615,595,475}; double pa[]={300, 320,320, 300,280,280};
	iFilledPolygon(oa,pa,6);
	

	}
	if(p8==1)
	{
		sn.r=255;
	
	iSetColor(sn.r,0,0);
	double ma[]={310, 330, 510,530,510,330}; double na[]={75+150-30, 95+150-30,95+150-30,75+150-30,55+150-30,55+150-30};
	iFilledPolygon(ma,na,6);	
	}
	else
	{
		iSetColor(43, 33, 186);
		
		double ma[]={310, 330, 510,530,510,330}; double na[]={75+150-30, 95+150-30,95+150-30,75+150-30,55+150-30,55+150-30};
	iFilledPolygon(ma,na,6);	

	}
	if(p10==1)
	{
		sn.r=255;
	
	iSetColor(sn.r,0,0);
	double oz[]={310, 330, 510,530,510,330}; double pz[]={75+100-30, 95+100-30,95+100-30,75+100-30,55+100-30,55+100-30};
	iFilledPolygon(oz,pz,6);
	}
	else
	{
		iSetColor(43, 33, 186);
		double oz[]={310, 330, 510,530,510,330}; double pz[]={75+100-30, 95+100-30,95+100-30,75+100-30,55+100-30,55+100-30};
	iFilledPolygon(oz,pz,6);
	}
	if(p11==1)
	{
		sn.r=255;
	
	iSetColor(sn.r,0,0);
	double qz[]={310, 330, 510,530,510,330}; double rz[]={75-30, 95-30,95-30,75-30,55-30,55-30};
	iFilledPolygon(qz,rz,6);
	}

		else
	{
		iSetColor(43, 33, 186);
		
	double qz[]={310, 330, 510,530,510,330}; double rz[]={75-30, 95-30,95-30,75-30,55-30,55-30};
	iFilledPolygon(qz,rz,6);
	}

	if(p12==1)
	{
		sn.r=255;
	
	iSetColor(sn.r,0,0);
	double sz[]={310, 330, 510,530,510,330}; double tz[]={75+50-30, 95+50-30,95+50-30,75+50-30,55+50-30,55+50-30};
	iFilledPolygon(sz,tz,6);
	}

	else{
		iSetColor(43, 33, 186);
	double sz[]={310, 330, 510,530,510,330}; double tz[]={75+50-30, 95+50-30,95+50-30,75+50-30,55+50-30,55+50-30};
	iFilledPolygon(sz,tz,6);
	}
	if(p14==1)
	{
		sd.r=255;
		iSetColor(sd.r, 0, 0);
		double st[]={653, 673, 793,813,793,673}; double tz[]={300, 320,320, 300,280,280};
		iFilledPolygon(st,tz,6);
	}
	else
	{
		sd.r=43;
		iSetColor(sd.r, 33, 186);
		double st[]={653, 673, 793,813,793,673}; double tz[]={300, 320,320, 300,280,280};
		iFilledPolygon(st,tz,6);
	}
	
	iSetColor(0,0,0);
	iText(140,260-30, "Rooms to be alloted: ", GLUT_BITMAP_9_BY_15 );

	
	iText(140,220-30, "Single normal: ", GLUT_BITMAP_9_BY_15 );
	iText(140,170-30, "Single deluxe: ", GLUT_BITMAP_9_BY_15 );
	iText(140,120-30, "Double normal: ", GLUT_BITMAP_9_BY_15 );
	iText(140,70-30, "Double deluxe: ", GLUT_BITMAP_9_BY_15 );
	iText(590,260-30, "Empty rooms: ", GLUT_BITMAP_9_BY_15 );

	iSetColor(43, 33, 186);
	

	iFilledRectangle(620, 210-30, 50, 35);
	iFilledRectangle(620, 160-30, 50, 35);
	iFilledRectangle(620, 110-30, 50, 35);
	iFilledRectangle(620, 60-30, 50, 35);

	FILE *fp=fopen("summary.txt","r");
	char buffer[10][50];
	int i1[4],j1=0;
	while(fscanf(fp,"%s %d",&c,&i1[j1])!=EOF)
	{
		itoa(i1[j1],buffer[j1],10);
		j1++;
	}
	fclose(fp);
	iSetColor(255,255,255);
	iText(630,190,buffer[0]);
	iText(630,140,buffer[1]);
	iText(630,90,buffer[2]);
	iText(630,40,buffer[3]);
	if(mposx>=850 && mposx<=950 && mposy>=18 && mposy<=53)
		{
			sd.r=255;
	iSetColor(sd.r, 0, 0);
	iFilledRectangle(900-50, 18, 100, 35);
	}
	else
	{
		sd.r=0;
	iSetColor(sd.r, 255, 100);
	iFilledRectangle(900-50, 18, 100, 35);
	}


	/*iSetColor(227, 239, 0);
	iFilledRectangle(900-50, 18, 100, 35);*/

	iSetColor(0,0,0);
	iText(920-50, 30, "Submit ", GLUT_BITMAP_HELVETICA_18 );
}
/*A derived page of Page Thirteen
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Fourteen*/
void pageFourteen()
{
	flag=0;
	iText(300,380, "The room is successfully booked. ", GLUT_BITMAP_TIMES_ROMAN_24 );
	iShowBMP(290,120, "pic//s.bmp");
	iText(800,400,"The required payment per day is:");
	char buff[2000];
	itoa(payment,buff,10);
	iText(800,380,buff);
}
/*A derived page of Page Thirteen
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Five*/

void pageFive()
{
	flag=0;
	iSetColor(0,0,0);
	iText(105,380,"Some data formats are incorrect. Followingly the incorrect fields are marked cross(x).", GLUT_BITMAP_HELVETICA_18);
	iText(105,360,"Client's Name");
	iText(105,340,"Client's occupation");
	iText(105,320,"Contact Number");
	iText(105,300,"National ID Number");
	iText(105,280,"E-mail");
	iText(105,260,"Check in date &/or Check out date");
	iText(105,240,"Image");
	if(errorcheck[0]==1)
	{
		iShowImage(90,280,20,10,image[4]);
		memset(email,'\0',100);
	}
	else if(errorcheck[0]==0)
		iShowImage(90,280,20,10,image[3]);
	if(errorcheck[1]==1)
	{
		iShowImage(90,320,20,10,image[4]);
		memset(contact,'\0',30);
	}
	else if(errorcheck[1]==0)
		iShowImage(90,320,20,10,image[3]);
	if(errorcheck[2]==0)
	{
		iShowImage(90,260,20,10,image[4]);
		memset(checkin,'\0',500);
		memset(checkout,'\0',500);
	}
	else if(errorcheck[2]==1)
		iShowImage(90,260,20,10,image[3]);
	if(errorcheck[3]==1)
	{
		iShowImage(90,300,20,10,image[4]);
		memset(nid,'\0',20);
	}
	else if(errorcheck[3]==0)
		iShowImage(90,300,20,10,image[3]);
	if(errorcheck[4]==1)
	{
		iShowImage(90,360,20,10,image[4]);
		memset(cname,'\0',500);
	}
	else if(errorcheck[4]==0)
		iShowImage(90,360,20,10,image[3]);
	if(errorcheck[5]==1)
	{
		iShowImage(90,340,20,10,image[4]);
		memset(occup,'\0',500);
	}
	else if(errorcheck[5]==0)
		iShowImage(90,340,20,10,image[3]);
	if(errorcheck[6]==1)
	{
		iShowImage(90,240,20,10,image[4]);
		memset(imageloc,'\0',500);
	}
	else if(errorcheck[6]==2)
		iShowImage(90,240,20,10,image[3]);
	iText(105,150, " Please fill up the form again with correct data.", GLUT_BITMAP_HELVETICA_18); 
	
}
/*A derived page of Page Thirteen
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Six*/

void pageSix()
{
	flag=0;
	iSetColor(0,0,0);
	iText(105,380,"Some fields were kept empty.", GLUT_BITMAP_HELVETICA_18);

	iText(105,280, " Please fill up the form again with correct data.", GLUT_BITMAP_HELVETICA_18); 
}
/*A derived page of Page Thirteen
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Seven*/
void pageSeven()
{
	flag=0;
	iSetColor(0,0,0);
	iText(155,300, "Sorry, your chosen rooms are not available.", GLUT_BITMAP_TIMES_ROMAN_24);
}
/*A derived page of Page Three
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Four*/
void pageFour()
{
	iSetColor(43, 33, 186);
	iText(155,300, "Invalid Date", GLUT_BITMAP_TIMES_ROMAN_24);
	memset(checkin,'\0',500);
	memset(checkout,'\0',500);
}
/*A derived page of Page Seventeen
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Eight*/
void pageEight()
{
	flag=4;
	iSetColor(43, 33, 186);
	iText(155,300, "Enter the NID number", GLUT_BITMAP_TIMES_ROMAN_24);
}
/*A derived page of Page Eight
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Nine*/
void pageNine()
{
	memset(delnid,'\0',20);
	iSetColor(43, 33, 186);
	iText(155,300, "Given Input does not exist.", GLUT_BITMAP_TIMES_ROMAN_24);
}
/*A derived page of Page Eight
  Parameters : None
  Rerturn Type :void
  Consists of : Design of a page recognized as Page Ten*/
void pageTen()
{
	FILE *del=fopen("CustomerList.txt","r");
	FILE *ne=fopen("new.txt","w");
	int check=0;
	char cname[500], occup[500], imageloc[500], imgdisplay[500], checkin[500], checkout[500], contact[30], email[100], nid[20];
	while(fscanf(del,"%s %s %s %s %s %s %s %s %s %s %s %s",&cname,&occup,&contact,&nid,&email,&checkin,&checkout,&imageloc,&insnpn,&insdpn,&indnpn,&inddpn)!=EOF)
	{
		if(strcmp(nid,delnid)!=0)
		{
			fprintf(ne,"%s %s %s %s %s %s %s %s %s %s %s %s\n",cname,occup,contact,nid,email,checkin,checkout,imageloc,insnpn,insdpn,indnpn,inddpn);
		}
		else
		{
			
			FILE *fp=fopen("summary.txt","r");
			int j=0;
			char c[30];
			while(fscanf(fp,"%s %d",&c,&i[j])!=EOF)
				j++;
			fclose(fp);
			int peoplesn=atoi(insnpn);
			int peoplesd=atoi(insdpn);
			int peopledn=atoi(indnpn);
			int peopledd=atoi(inddpn);
			i[0]=i[0]+peoplesn;
			i[1]=i[1]+peoplesd;
			i[2]=i[2]+peopledn;
			i[3]=i[3]+peopledd;
			char ci[4][20]={"SingleNormal","SingleDeluxe","DoubleNormal","DoubleDeluxe"};
			FILE *summary=fopen("summary.txt","w");
			j=0;
			while(j<=3)
			{fprintf(summary,"%s %d\n",ci[j],i[j]);j++;}
			fclose(summary); 
		}
		
	}
	fclose(del);
	fclose(ne);
	remove("CustomerList.txt");
    rename("new.txt","CustomerList.txt");
	memset(delnid,'\0',20);
	iSetColor(43, 33, 186);
	iText(155,300, "Requested entry has been deleted.", GLUT_BITMAP_TIMES_ROMAN_24);
}