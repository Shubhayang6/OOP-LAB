#include<iostream>
using namespace std;
class Date
{
	int day, month, year;
	public:
		void read_Date()
		{
			cout<<"Enter the Date you want to enter in the DD/MM/YYYY format:";
			cin>>day>>month>>year;
			cout<<"Your entered date is:"<< day<<"/"<< month<<"/"<<year<<endl;
		}
		int monthdays();
		void operator++();
		void NextDate()
		{
			cout<<"The Next Date is:"<< day<<"/"<<month<<"/"<<year<<endl;
		}
};
void Date::operator++()
{
	if (monthdays() != 2|| (monthdays() == 2 && day !=28))
	{
		day = 1;
		month++;
	}
	else
	{
		day++;
	}
	if(month>12)
	{
		day=1;
		month=1;
		year +=1;
	}
}
int Date::monthdays()
{
	if((day<=31 && day>=1) && month<=12 && month >=1)
	{
		if((month ==4 || month ==6 || month== 9 || month== 11) && day<=30)
		{
			return 1;
		}
		else if((year% 4== 0 && year % 100 !=0 || year % 400 == 0) && month == 2 && day<=29)
		{
			return 2;
		}
		else if(month == 2 && day<29)
		{
			return 3;
		}
		if( month ==1 || month==3 || month== 5|| month == 7 || month == 8|| month==10 || month== 12)
		{
			return 4;
		}
		else
		{
			cout<<"Inappropriate Input!!"<<endl;
			exit(0);
		}
	}
	else
	{
		cout<<"Please Enter Appropriate Date"<<endl;
		exit(0);
	}
}
int main()
{
	Date d1;
	d1.read_Date();
	++d1;
	d1.NextDate();
	return 0;
}