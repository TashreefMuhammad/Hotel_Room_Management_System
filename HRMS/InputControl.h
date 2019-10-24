/*This Function checks for leap year
return type:	boolean
parameters:		int year
*/
bool leapcheck(int year)
{
	if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            if ( year%400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}
/*This Function controls what characters are displayed on the screen during the time of taking input
return type:	void
parameters:		none
*/
void displayinput()
{
	iSetColor(255,255,255);
	if(flag==1)				//Display password while writing it
	{
		iSetColor(255,255,255);
		iText(350,310,str1);
	}
	if(flag==2)				//Display different inputs while taking input
	{	
		iSetColor(255,255,255);
		iText(80,360,cname);
		iText(475,360,contact);
		iText(270,360,occup);
		iText(670,360,email);
		iText(80,300,checkin);
		iText(270,300,checkout);
		iText(475,300,nid);
		iText(670,300,imageloc);
		iText(260,480,inpn);
		iText(330,195,insnpn);
		iText(330,145,insdpn);
		iText(330,45,inddpn);
		iText(330,95,indnpn);
	}
	if(flag==3)
	{
		iText(270,355,checkin);
		iText(475,355,checkout);
	}
	if(flag==4)
	{
			iSetColor(0,0,0);
			iText(200,250,delnid,GLUT_BITMAP_TIMES_ROMAN_24);
	}
}
/*This function varifies whether the given password is correct or not
return type:	void
parameters:		none
*/
void administrationvarification()
{
	
		char checker[10]={"12345"};
		stringvaluecheck=strcmp(checker,strcheck);
}
/*This Function checks if the requested data to be deleted exists or not
return type:	void
parameters:		none
*/
void deletecheck()
{
	FILE *del=fopen("CustomerList.txt","r");
	int check=0;
	while(fscanf(del,"%s %s %s %s %s %s %s %s %s %s %s %s",&cname,&occup,&contact,&nid,&email,&checkin,&checkout,&imageloc,&insnpn,&insdpn,&indnpn,&inddpn)!=EOF)
	{
		if(strcmp(nid,delnid)==0)
		{
			check=1;
			break;
		}
	}
	fclose(del);
	memset(cname,'\0',500);
	memset(occup,'\0',500);
	memset(imageloc,'\0',500);
	memset(contact,'\0',30);
	memset(email,'\0',100);
	memset(checkin,'\0',500);
	memset(checkout,'\0',500);
	memset(nid,'\0',20);
	memset(imageloc,'\0',500);
	memset(inpn,'\0',5);
	memset(insnpn,'\0',5);
	memset(insdpn,'\0',5);
	memset(indnpn,'\0',5);
	memset(inddpn,'\0',5);
	if(check==0)
		page_number=9;
	else
		page_number=10;
}
/*This Function controls, checks the client data and varifies mistakes
return type:	void
parameters:		none
*/
void clientinformationinput()
{
	errorcheck[0]=errorcheck[1]=errorcheck[3]=errorcheck[4]=errorcheck[5]=errorcheck[6]=-1;	//initializing flags of checking input data format
	int people=atoi(inpn);					//converting number of people from string to integer
	int peoplesn=atoi(insnpn);				//converting number of people for single normal room from string to integer
	int peoplesd=atoi(insdpn);				//converting number of people for single deluxe room from string to integer
	int peopledn=atoi(indnpn);				//converting number of people for double normal room from string to integer
	int peopledd=atoi(inddpn);				//converting number of people for double deluxe room from string to integer
	for(int z=0;email[z]!='\0';z++)
	{
		if(email[z]=='@')
			for(int y=z;email[z]!='\0';z++)
			{
				if(email[z]=='.')
				{
					errorcheck[0]=0;
					break;
				}
				else
					errorcheck[0]=1;
			}
		else
			errorcheck[0]=0;
	}
	for(int z=0;contact[z]!='\0';z++)
	{	
		if(contact[z]<'0' || contact[z]>'9')
		{
				errorcheck[1]=1;
				break;
		}
		else
			errorcheck[1]=0;
	}
	for(int z=0;nid[z]!='\0';z++)
	{
		if(nid[z]<'0' || nid[z]>'9')
		{
				errorcheck[3]=1;
				break;
		}
		else
			errorcheck[3]=0;
	}
	for(int z=0;cname[z]!='\0';z++)
	{
		if(!((cname[z]>='A'&&cname[z]<='Z')||(cname[z]>='a'&&cname[z]<='z')))
		{
			errorcheck[4]=1;
			break;
		}
		else
			errorcheck[4]=0;
	}
	for(int z=0;occup[z]!='\0';z++)
	{
		if(!((occup[z]>='A'&&occup[z]<='Z')||(occup[z]>='a'&&occup[z]<='z')))
		{
			errorcheck[5]=1;
			break;
		}
		else
			errorcheck[5]=0;
	}
	if(errorcheck[0]==1||errorcheck[1]==1||errorcheck[3]==1||errorcheck[4]==1||errorcheck[5]==1||errorcheck[6]==1)
		page_number=5;
	else if(people==0)
		page_number=6;
	else{
	if(people<=(peoplesn+peoplesd+2*peopledn+2*peopledd))
	{
		if(cname[0]=='\0'||occup[0]=='\0'||checkin[0]=='\0'||checkout[0]=='\0'||contact[0]=='\0'||email[0]=='\0'||nid[0]=='\0'||inpn[0]=='\0'||insnpn[0]=='\0'||insdpn[0]=='\0'||indnpn[0]=='\0'||inddpn[0]=='\0')
			page_number=6;
		else
		{
			FILE *fp=fopen("summary.txt","r");
			int j=0;
			char c[30];
			while(fscanf(fp,"%s %d",&c,&i[j])!=EOF)
				j++;
			if(i[0]>=peoplesn && i[1]>=peoplesd && i[2]>=peopledn && i[3]>=peopledd)
			{
				payment=100*peoplesn+200*peoplesd+300*peopledn+400*peopledd;
				int k[4];
				k[0]=i[0]-peoplesn;
				k[1]=i[1]-peoplesd;
				k[2]=i[2]-peopledn;
				k[3]=i[3]-peopledd;
				char c[4][20]={"SingleNormal","SingleDeluxe","DoubleNormal","DoubleDeluxe"};
				FILE *summary=fopen("summary.txt","w");
				j=0;
				while(j<=3)
				{fprintf(summary,"%s %d\n",c[j],k[j]);j++;}
				fclose(summary);
				FILE *file=fopen("CustomerList.txt","a");
				fprintf(file,"%s %s %s %s %s %s %s %s %s %s %s %s\n",cname,occup,contact,nid,email,checkin,checkout,imageloc,insnpn,insdpn,indnpn,inddpn);
				fclose(file);
				memset(cname,'\0',500);
				memset(occup,'\0',500);
				memset(imageloc,'\0',500);
				memset(contact,'\0',30);
				memset(email,'\0',100);
				memset(checkin,'\0',500);
				memset(checkout,'\0',500);
				memset(nid,'\0',20);
				memset(imageloc,'\0',500);
				memset(inpn,'\0',5);
				memset(insnpn,'\0',5);
				memset(insdpn,'\0',5);
				memset(indnpn,'\0',5);
				memset(inddpn,'\0',5);
				page_number=14;
			}
			else
				page_number=7;
		}
	}
	else
		page_number=6;
	}
}
/*This Function checks if the date of check in and check out is valid or not
return type:	void
parameters:		none
*/
void datechecker()
{
	errorcheck[2]=-1;
	if(checkin[2]=='/'&&checkin[2]=='/'&&checkout[2]=='/'&&checkout[2]=='/')
	{	
		
		int yearin=1000*(checkin[6]-48)+100*(checkin[7]-48)+10*(checkin[8]-48)+(checkin[9]-48);
		int yearout=1000*(checkout[6]-48)+100*(checkout[7]-48)+10*(checkout[8]-48)+(checkout[9]-48);
		if(yearin>=procyear && yearout>=procyear)
		{
			int monthin=10*(checkin[3]-48)+(checkin[4]-48);
			int monthout=10*(checkout[3]-48)+(checkout[4]-48);
			if(monthin>=procmonth && monthout>=procmonth && monthin<=12 && monthout<=12)
			{
				int dayin=10*(checkin[0]-48)+(checkin[1]-48);
				int dayout=10*(checkout[0]-48)+(checkout[1]-48);
				if(dayin>=procday && dayout>procday)
				{
					if(monthin==1||monthin==3||monthin==5||monthin==7||monthin==8||monthin==10||monthin==12)
					{
						if(dayin<=31)
						{
							if(monthout==1||monthout==3||monthout==5||monthout==7||monthout==8||monthout==10||monthout==12)
							{	
								if(dayout<=31)
									errorcheck[2]=1;
								else
									errorcheck[2]=0;
							}
							else if(monthout==4||monthout==6||monthout==9||monthout==11)
							{
								if(dayout<=30)
									errorcheck[2]=1;
								else
									errorcheck[2]=0;
							}
							else
							{
								bool leap=leapcheck(yearout);
								if(leap)
								{
									if(dayout<=29)
										errorcheck[2]=1;
									else
										errorcheck[2]=0;
								}
								else
								{
									if(dayout<=28)
										errorcheck[2]=1;
									else
										errorcheck[2]=0;
								}
							}
						}
						else
							errorcheck[2]=0;
					}
					else if(monthin==4||monthin==6||monthin==9||monthin==11)
					{
						if(dayin<=30)
						{
							if(monthout==1||monthout==3||monthout==5||monthout==7||monthout==8||monthout==10||monthout==12)
							{	
								if(dayout<=31)
									errorcheck[2]=1;
								else
									errorcheck[2]=0;
							}
							else if(monthout==4||monthout==6||monthout==9||monthout==11)
							{
								if(dayout<=30)
									errorcheck[2]=1;
								else
									errorcheck[2]=0;
							}
							else
							{
								bool leap=leapcheck(yearout);
								if(leap)
								{
									if(dayout<=29)
										errorcheck[2]=1;
									else
										errorcheck[2]=0;
								}
								else
								{
									if(dayout<=28)
										errorcheck[2]=1;
									else
										errorcheck[2]=0;
								}
							}
						}
						else
							errorcheck[2]=0;
					}
					else
					{
						bool leap=leapcheck(yearin);
						if(leap)
						{
							if(dayin<=29)
							{
								if(monthout==1||monthout==3||monthout==5||monthout==7||monthout==8||monthout==10||monthout==12)
								{	
									if(dayout<=31)
										errorcheck[2]=1;
									else
										errorcheck[2]=0;
								}
								else if(monthout==4||monthout==6||monthout==9||monthout==11)
								{
									if(dayout<=30)
										errorcheck[2]=1;
									else
										errorcheck[2]=0;
								}
								else
								{
									bool leap=leapcheck(yearout);
									if(leap)
									{
										if(dayout<=29)
											errorcheck[2]=1;
										else
											errorcheck[2]=0;
									}
									else
									{
										if(dayout<=28)
											errorcheck[2]=1;
										else
											errorcheck[2]=0;
									}
								}
							}
						else
							errorcheck[2]=0;
						}
						else
						{
							if(dayin<=28)
							{
								if(monthout==1||monthout==3||monthout==5||monthout==7||monthout==8||monthout==10||monthout==12)
								{	
									if(dayout<=31)
										errorcheck[2]=1;
									else
										errorcheck[2]=0;
								}
								else if(monthout==4||monthout==6||monthout==9||monthout==11)
								{
									if(dayout<=30)
										errorcheck[2]=1;
									else
										errorcheck[2]=0;
								}
								else
								{
									bool leap=leapcheck(yearout);
									if(leap)
									{
										if(dayout<=29)
											errorcheck[2]=1;
										else
											errorcheck[2]=0;
									}
									else
									{
										if(dayout<=28)
											errorcheck[2]=1;
										else
											errorcheck[2]=0;
									}
								}
							}
						else
							errorcheck[2]=0;
						}
					}
			}
			else
				errorcheck[2]=0;
		}
		else
			errorcheck[2]=0;
	}
	else
		errorcheck[2]=0;
	}
	else
		errorcheck[2]=0;
	if(errorcheck[2]==1)
		page_number=13;
	else if(errorcheck[2]==0)
		page_number=4;
}
/*This Function controls flag number and accordingly assigns values to access taking of input
return type:	void
parameters:		int mx, int my, int page_number
				mx= x co-ordinate of mouse
				my= y co-ordinate of mouse
				page_number= number of the page
*/
void inputmanager(int mx,int my,int page_number)
{
	if(page_number==15 && mx>=300 && mx<=650 && my>=300 && my<=340)
		flag=1;							//Input to be taken of Administration password
	if(page_number==13)
	{
		flag=2;							//Input to be taken of different fields of client
		if(mx>=45 && mx<=205 && my>=340 && my<=380)
			{
				checkflag=1;			//Input to be taken of Client Name
				memset(cname,'\0',500);
			}
		if(mx>=455 && mx<=615 && my>=340 && my<=380)
			{
				checkflag=2;				//Input to be taken of Contact Number
				memset(contact,'\0',30);
			}
		if(mx>=250 && mx<=410 && my>=340 && my<=380)
			{
				checkflag=3;				//Input to be taken of Occupation
				memset(occup,'\0',500);
			}
		if(mx>=653 && mx<=813 && my>=340 && my<=380)
			{
				checkflag=4;				//Input to be taken of E-Mail
				memset(email,'\0',100);
			}
		if(mx>=455 && mx<=615 && my>=280 && my<=320)
			{
				checkflag=7;				//Input to be taken of Number of People
				memset(nid,'\0',20);
			}
		if(mx>=653 && mx<=815 && my>=280 && my<=320)
			{
				checkflag=8;				//Input to be taken of Image Location
				memset(imageloc,'\0',500);
				errorcheck[6]=-1;
			}
		if(mx>=45 && mx<=205 && my>=280 && my<=320)
			{
				checkflag=5;				//Input to be taken of Check in date
				memset(checkin,'\0',500);
			}
		if(mx>=250 && mx<=410 && my>=280 && my<=320)
			{
				checkflag=6;				//Input to be taken of Check out date
				memset(checkout,'\0',500);
			}
		if(mx>=240 && mx<=470 && my>=460 && my<=500)
			checkflag=9;				//Input to be taken of Total Number of People
		if(mx>=310 && mx<=530 && my>=175 && my<=215)
			checkflag=10;				//Input to be taken of Single Normal room number
		if(mx>=310 && mx<=530 && my>=125 && my<=165)
			checkflag=11;				//Input to be taken of Single Deluxe room number
		if(mx>=310 && mx<=530 && my>=25 && my<=65)
			checkflag=12;				//Input to be taken of Double Normal room number
		if(mx>=310 && mx<=530 && my>=75 && my<=105)
			checkflag=13;				//Input to be taken of Double Deluxe room number
		if(mx>=851 && mx<=949 && my>=19 && my<=55)
			clientinformationinput();	//Calling a function to check the inputs
	}
	if(page_number==3)
	{
		flag=3;
		if(mx>=240 && mx<=410 && my>=340 && my<=380)
			{
				checkflag=1;			// Input to be taken of check in date
				memset(checkin,'\0',500);
			}
		if(mx>=455 && mx<=615 && my>=340 && my<=380)
			{
				checkflag=2;			//Input to be taken of check out date
				memset(checkout,'\0',500);
			}
		if(mx>=851 && mx<=949 && my>=19 && my<=55)
			datechecker();				//Calling a function to check if the date is correct
	}
}
/*This Function controls what characters input is to be taken
return type:	void
parameters:		unsigned char key
				key= the keyboard key name
*/
void keyboardentry(unsigned char key)
{
	if(flag==1)				//Taking value of password to varify Administrator
	{
		if(key=='\r')
		{
			strcpy(strcheck,str);
			str[len]='\0';
			str1[len]='\0';
			len=flag=0;
		}
		else if(key=='\b')
		{
			if(len<=0)
				len=0;
			else
			{
				len--;
				str[len]='\0';
				str1[len]='\0';
			}
		}
		else
		{
			str[len]=key;
			str1[len]='*';
			len++;
		}
		administrationvarification();
	}
	if(flag==2)		//Taking value of different fields of client
	{
		if(checkflag==1)	//Taking client name
		{
			if(key=='\r')
			{
					cname[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					cname[len]='\0';
				}
			}
			else
			{
				cname[len]=key;
				len++;
			}
		}
		if(checkflag==2)	//Taking contact number
		{
			
			if(key=='\r')
			{
					contact[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					contact[len]='\0';
				}
			}
			else
			{
				contact[len]=key;
				len++;
			}
		}
		if(checkflag==3)	//Taking occupation name
		{
			
			if(key=='\r')
			{
					occup[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					occup[len]='\0';
				}
			}
			else
			{
				occup[len]=key;
				len++;
			}
		}
		if(checkflag==4)	//taking input of E-Mail
		{
			
			if(key=='\r')
			{
					email[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					email[len]='\0';
				}
			}
			else
			{
				email[len]=key;
				len++;
			}
		}
		if(checkflag==5)	//Taking input of check in date
		{
			if(key=='\r')
			{
					checkin[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					checkin[len]='\0';
				}
			}
			else
			{
				checkin[len]=key;
				len++;
			}
		}
		if(checkflag==6)	//Taking input of check out date
		{
			if(key=='\r')
			{
					checkout[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					checkout[len]='\0';
				}
			}
			else
			{
				checkout[len]=key;
				len++;
			}
		}
		if(checkflag==7)	//Taking input of NID number
		{
			
			if(key=='\r')
			{
					nid[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					nid[len]='\0';
				}
			}
			else
			{
				nid[len]=key;
				len++;
			}
		}
		if(checkflag==8)	//Taking input of image
		{
			errorcheck[6]==-1;
			if(key=='\r')
			{
					imageloc[len]='\0';
					len=flag=0;
					FILE *image=fopen("imagelocation.txt","r");
					char imgname[30];
					while(fscanf(image,"%s",&imgname)!=EOF)
					{
						if(strcmp(imgname,imageloc)==0)
						{
							errorcheck[6]=2;
							break;
						}
					else
						errorcheck[6]=1;
					}
					fclose(image);
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
			      imageloc[len]='\0';
				}
			}
			else
			{
				imageloc[len]=key;
				len++;
			}
		}
		if(checkflag==9)	//Taking input of Number of people for whom room is being booked 
		{
			if(key=='\r')
			{
					inpn[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					inpn[len]='\0';
				}
			}
			else
			{
				inpn[len]=key;
				len++;
			}
		}
		if(checkflag==10)	//Taking input of how many Single Normal rooms being booked
		{
			if(key=='\r')
			{
					insnpn[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					insnpn[len]='\0';
				}
			}
			else
			{
				insnpn[len]=key;
				len++;
			}
		}
		if(checkflag==11)	//Taking input of how many single deluxe rooms to be booked 	
		{
			if(key=='\r')
			{
					insdpn[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					insdpn[len]='\0';
				}
			}
			else
			{
				insdpn[len]=key;
				len++;
			}
		}
		if(checkflag==12)	//Taking input of how many double normal rooms to be booked
		{
			if(key=='\r')
			{
					inddpn[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					inddpn[len]='\0';
				}
			}
			else
			{
				inddpn[len]=key;
				len++;
			}
		}
		if(checkflag==13)	//taking input of how many double deluxe rooms to be booked
		{
			if(key=='\r')
			{
					indnpn[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					indnpn[len]='\0';
				}
			}
			else
			{
				indnpn[len]=key;
				len++;
			}
		}
	}
	if(flag==3)
	{
		if(checkflag==1)	//Taking input of check in date
		{
			if(key=='\r')
			{
					checkin[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					checkin[len]='\0';
				}
			}
			else
			{
				checkin[len]=key;
				len++;
			}
		}
		if(checkflag==2)	//Taking input of check out date
		{
			if(key=='\r')
			{
					checkout[len]='\0';
					len=flag=0;
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					checkout[len]='\0';
				}
			}
			else
			{
				checkout[len]=key;
				len++;
			}
		}
	}
	if(flag==4)
	{
		if(key=='\r')
			{
					delnid[len]='\0';	//Taking input of NID to be deleted
					len=flag=0;
					deletecheck();
			}
			else if(key=='\b')
			{
				if(len<=0)
					len=0;
				else
				{
					len--;
					delnid[len]='\0';
				}
			}
			else
			{
				delnid[len]=key;
				len++;
			}
	}
}