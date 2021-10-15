#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
int day ,year,month,total=0,cday,cmon,cyear;
int arr[12]={3,0,3,2,3,2,3,3,2,3,2,3};
void current_date()
	{
		struct date dt;
		getdate(&dt);
		cday=dt.da_day;
		cmon=dt.da_mon;
		cyear=dt.da_year;
	}
void check_tense()
	{
		if(cyear>year)
			{
				printf("\n\tthere was ");
			}
			else if(cyear==year)
			{
				if(month==cmon)
				{
					if(day==cday)
					{
						printf("\n\t there is ");
					}
					else if(day>cday)
					{
						printf("\n\t there will ");
					}
					else
					{
						printf("\n\t there was ");
					}
				}
				else if(month>cmon)
				{
					printf("\n\t there will ");
				}
				else
				{
					printf("\n\t there was ");
				}
			}
			else
			{
				printf("\n\tthere will ");
			}
	}
void logic()
	{
		if(month<=12 && day<=31 && year<=9999 && year >=1400)
		{
			if(year%4==0)
			{
				total+=1;
			}
			year=(year-1)%400;
			if(year==0)
			{
				total=1;
			}
			else
			{
				total=total+year%100+(year%100)/4+((year/100)*5)%7 ;
			}
			for(int i=0;i<month-1;i++)
			{
				total=total+arr[i];
			}
			char day_name[7][10]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
			printf("%s in this date",day_name[(total+day)%7]);
		}
		else
		{
			printf("Invalid date");
		}
	}
void main()
	{
		clrscr();
		printf("\n\n\t\t\tWelcome To My Date Day Finder App \n\n\n\nenter day");
		scanf("%d",&day);
		printf("enter month");
		scanf("%d",&month);
		printf("enter year");
		scanf("%d",&year);
		if(month==2&&day==29&&year%4==0)
		{
			total+=1;
			current_date();
			check_tense();
			logic();
		}
		else if(month==2&&day>28)
		{
			printf("Invalid Date");
		}
		else
		{
			total+=1;
			current_date();
			check_tense();
			logic();
		}
	getch();
}
