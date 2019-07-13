//Important Header Files
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

struct Student
{
 string fname; //first name
 string lname; //last name
 string registration;
 string class; //section
}studentData; 


struct Teacher
{
 string fname;
 string lname;
 string qualification;
 string experience;
 string salary;
 string subject; 
 string lecture; 
 string address; 
 string cellNo; 
 string bloodGroup;
 string serves;
}tech[50];


int login()
{
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tUniversity Information Managment System\n\t\t\t\t\t\t    (Powered by DXT)\n\n";
   cout<<"\t\t\t\t\t  ---------------------------------";
   cout<<"\n\t\t\t\t\t  Login: \n";	
   cout<<"\t\t\t\t\t  ---------------------------------\n\n";	
   cout << "\t\t\t\t\t  Enter Password: ";
   ch = _getch();
   while(ch != 13) //13 is the ASCII of RETURN
   {
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "uimsByDxt")
   {
      cout << "\n\n\n\t\t\t\t\t\t   Access Granted! \n";
      Sleep(2000);
   }
   else
   {
      cout << "\n\n\t\t\t\t\t  Password Incorrect!!!\n\n\t\t\t\t\t  Please Try Again.\n\n";
      Sleep(2000);
      system("cls");
      login();
   }
}

//Start of the Program	
int main()
{
	int login();
	login();
	return 0;
}
