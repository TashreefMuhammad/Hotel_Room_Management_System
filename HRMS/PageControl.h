/*This header file will control which Page is shown on Interface*/

/*The Interface display control part
  Parameters : int type data pageNumber
  Rerturn Type :void
  Consists of : Conditions where by the value of pageNumber, it is decided which page shall be displayed*/
void pagecall(int pageNumber)
{
	if(pageNumber==1)
		pageOne();
	if(pageNumber==2)
		pageTwo();
	if(page_number==3)
		pageThree();
	if(page_number==4)
		pageFour();
	if(pageNumber==6)
	    pageSix();
	if(pageNumber==5)
		pageFive();
	if(pageNumber==7)
		pageSeven();
	if(pageNumber==8)
		pageEight();
	if(pageNumber==9)
		pageNine();
	if(pageNumber==10)
		pageTen();
	if(pageNumber==13)
		pageThirteen();
	if(pageNumber==14)
		pageFourteen();
	if(pageNumber==15)
		pageFifteen();
	if((page_number==1617 && stringvaluecheck==0)||page_number==17)
	{	
		pageSeventeen();
		page_number=17;
		stringvaluecheck=-1;
	}
	if((page_number==1617 && stringvaluecheck!=0)||page_number==16)
	{	
		pageSixteen();
		page_number=16;
		stringvaluecheck=-1;
	}
	if(pageNumber==18)
		pageEighteen();
	if(pageNumber==19)
		pageNineteen();
	if(pageNumber==21)
		pageTwentyone();
	if(pageNumber==22)
		pageTwentytwo();
	if(pageNumber==23)
		pageTwentythree();
	if(pageNumber==24)
		pageTwentyfour();
	if(pageNumber==20)
		pageTwenty();
}
/*The page_number variable control part
  Parameters : int mx, int my, int page_number
				mx: x co-ordinate of mouses position
				my: y co-ordinate of mouses position
				page_number: Provides which page the interface currently is 
  Rerturn Type : int, returns the new page to be displayed's page number to be used as variable
  Consists of : Conditions to varify which page user is wishing to navigate to*/
int page_number_checker(int _mx,int _my,int page_number)
{
	if(_mx>=40 && _mx<=88 && _my>=520 && _my<=568)
			page_number=1;
	if(page_number==1 && _mx>=100 && _mx<=840 && _my>=281 && _my<=319)
			page_number=2;
	if(page_number==2 ||page_number==15)
		if(_mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			 page_number=1;
	if(page_number==8 && _mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=17;
	if(page_number==9 && _mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=8;
	if(page_number==10 && _mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=8;
	if(page_number==3 && _mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=17;
	if(page_number==13 && _mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=3;
	if(page_number==4 && _mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=3;
	if(page_number==14 && _mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=3;
	if(page_number==1 && _mx>=100 && _mx<=716 && _my>=80 && _my<=120)
			page_number=15;
	if(page_number==15 && _mx>=870 && _mx<=1000 && _my>=18 && _my<=50)
			page_number=1617;
	if(page_number==16 && _mx>=101 && _mx<=138 && _my>=527&& _my<=566)
			page_number=15;
	if(page_number==17 && _mx>=101 && _mx<=138 && _my>=527&& _my<=566)
			page_number=15;
	if(page_number==17 && _mx>=250 && _mx<=650 && _my>=190 && _my<=210)
			page_number=3;
	if(page_number==17 && _mx>=250 && _mx<=650 && _my>=170 && _my<=190)
			page_number=8;
	if(page_number==17 && _mx>=390 && _mx<=480 && _my>=250 && _my<=270)
			page_number=18;
	if(page_number==18 && _mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=17;
	if(page_number==17 && _mx>=375 && _mx<=475 && _my>=230 && _my<=250)
			page_number=19;
	if(page_number==19 && _mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=17;
	if(page_number==17 && _mx>=250 && _mx<=650 && _my>=210 && _my<=230)
			page_number=20;
	if(page_number==20 && _mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=17;
	if(page_number==2 && _mx>=40 && _mx<=140 && _my>=250 && _my<=270)
			page_number=21;
	if(page_number==2 && _mx>=40 && _mx<=140 && _my>=225 && _my<=245)
			page_number=22;
	if(page_number==2 && _mx>=40 && _mx<=140 && _my>=205 && _my<=225)
			page_number=23;
	if(page_number==2 && _mx>=40 && _mx<=140 && _my>=185 && _my<=205)
			page_number=24;
	if(page_number==21||page_number==22||page_number==23||page_number==24)
		if(_mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=2;
	if(page_number==6 && _mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=13;
	if(page_number==5&& _mx>=101 && _mx<=138 && _my>=527 && _my<=566)
			page_number=13;
	return page_number;
}