#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct 
{
	char *day;
	int date;
	char *activity;
} calendar;

calendar* create()
{
	calendar *week;
	week=(calendar*)calloc(7,sizeof(calendar));
	return week;
}

void read(calendar *week)
{
	int i; 
	char day[20],activity[50];
	printf("Enter week details(week day,date, activity)");
	for(i=0;i<7;i++)
	{
		printf("Day %d:",i+1);
		scanf("%s%d%s",day,&week[i].date,activity);
		week[i].day = strdup(day);
		week[i].activity = strdup(activity);	
	}
}
void display(calendar *week)
{
	int i;
	printf("Week activity\nDay\tDate\tActivity\n");
	for(i=0;i<7;i++)
	{
		printf("%s\t%d\t%s\n",week[i].day,week[i].date,week[i].activity);
	}
}
int main()
{
	int choice;
	calendar *week;
	while(1)
	{
		printf("1.Create 2.Read  3.Display  4.Exit  choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: week = create();
					if(week!=NULL)
						printf("Calander is successfully created\n");
					break;
			case 2: read(week);
					break;
			case 3: display(week);
					break;
			case 4: return 0;
			default: printf("Invalid choice\n");
		}
	}
}

