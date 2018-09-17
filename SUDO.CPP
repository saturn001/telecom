#include<iostream.h>
#include<conio.h>
#include<ctype.h>
class information
{
   public:
   char name[100];
   char mob[15];
   char dob[10];
   char add[100];
   int i,j;
   void get_plans()
   {
     char plan_name[100];
     float rent;
     long internet;
     long calls;
     int sms;
     float call_charges;
     float sms_charges;
     float data_charges;
     float roaming_charges;
     int j=0;
     do
     {
	 for(i=0;i!='\0';i++)
	 {
	    cin>>plan_name[i];
	 }
	 cin>>rent;
	 cin>>internet;
	 cin>>calls;
	 cin>>sms;
	 cin>>call_charges;
	 cin>>data_charges;
	 cin>>roaming_charges;
	 j++;
    }while(j<4);
    void show_plans()
    {
	 for(j=1;j<=4;j++)
	 {
	   cout<<"\n\n\t\tPLAN NO. "<<j;
	   cout<<"\n PLAN NAME :";
	   for(i=0;i!='\0';i++)
	   {
	      cout<<plan_name[i];
	   }
	   cout<<"\n MONTHLY RENTAL: ";
	   cout<<rent;
	   cout<<"\n FREE INTERNET: ";
	   cout<<internet;
	   cout<<"\n FREE CALLS: ";
	   cout<<calls;
	   cout<<"\n FREE SMS: ";
	   cout<<sms;
	   cout<<"\n CALL CHARGES: ";
	   cout<<call_charges;
	   cout<<"\n DATA CHARGES: ";
	   cout<<data_charges;
	   cout<<"\n ROAMING CHARGES: ";
	   cout<<roaming_charges;
	 }
    }





   void enter_info()
   {
     cout<<"Enter The Name :";
     for(i=0;i!='\0';i++)
     {
	cin>>name[i];
     }
     cout<<"Enter The Date of Birth :";
     for(i=0;i!='\0';i++)
     {
	cin>>dob[i];
     }
     cout<<"Enter Your Mobile Number :";
     for(i=0;i!='\0';i++)
     {
	cin>>mob[i];
     }
     cout<<"Enter The Address :";
     for(i=0;i!='\0';i++)
     {
	cin>>add[i];
     }
    }
    void show_info()
    {
	cout<<name[i];
	cout<<dob[i];
	cout<<mob[i];
	cout<<add[i];
      }
    }
}t;
void main()
{
  char ch;
  clrscr();
  do{
      cout<<"\n\n\n\t\t WELCOME TO SUDO TELECOMS ";
      cout<<"\n\n\t\tEnter Your Choice :" ;
      cout<<"\n\t\t 1. APPLICATION FORM ";
      cout<<"\n\t\t 2. MONTHLY TARRIF DETAILS ";
      cout<<"\n\t\t 3. IF YOU WANT TO SUBSCRIBE ANOTHER PLAN ";
      cout<<"\n\t\t 4. ENTER TO DISPLAY CURRENT BILL ";
      cout<<"\n\t\t 5. EXIT ";
      switch(ch)
      {
	case '1': t.enter_info();
		break;
	case '2': t.show_info();
		break;
	case '3': t.show_plans();
		break;
	case '4': break;
	case '5': exit(0);
      }
    }while((ch!='n') || (ch!='N'));
    getch();
}

