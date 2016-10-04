//Valerie Mccree
//Sci 120-171
//Sept 14, 2016
//Assignmnt 142 #4
//This program calculates the average rainfall for three months

#include<iostream>
using namespace std;

int main()
{
	
	int June, July, August, month1_inches, month2_inches, month3_inches;
	double avrgM;
	
		
	cout<<"This program calculates the average rainfall for three months.\n";
		cout<< " What Months are you recording for rainfall?.\n";
	
		cout<<"June.\n"; 
	cin	>> month1_inches;
		cout<<"July.\n";
	cin>> month2_inches;
		cout<<"August.\n",
	cin	>> month3_inches;
		avrgM = (month1_inches + month2_inches + month3_inches) /3;
		cout << "the average rainfall for june,july and august is " << avrgM << endl;
return 0;
}

This program calculates the average rainfall for three months.
 What Months are you recording for rainfall?.
June.
76
July.
87
August.
98
the average rainfall for june,july and august is 87
Press any key to continue 



