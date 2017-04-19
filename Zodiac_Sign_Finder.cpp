#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	
int month, day, md;	//int for month, day, and both combined
string sign="";
int n=50;

//print welcome
cout << string(n,'_');
cout << "\n\n\n"
	 << right << setw(n-16) << "ZODIAC SIGN FINDER" << endl << endl;
cout << string(n,'_');
cout << endl << endl;
	
cout << "What month were you born in?\n(Enter a number 1-12)\n\n";
cin >> month;

cout << "What day were you born on?\n(Enter a number 1-31)\n\n";
cin >> day;

//calculations
md = (month * 100) + day;

//comparisons to find sign

// Aquarius
if(md>=120 && md<=218)
	sign="Aquarius";
	
// Pisces
if(md>=219 && md<=320)
	sign="Pisces";
	
// Aries
if(md>=321 && md<=419)
	sign="Aries";
	
// Taurus
if(md>=420 && md<=520)
	sign="Taurus";
	
// Gemini
if(md>=521 && md<=620)
	sign="Gemini";
	
// Cancer
if(md>=621 && md<=722)
	sign="Cancer";
	
// Leo
if(md>=723 && md<=822)
	sign="Leo";
	
// Virgo
if(md>=823 && md<=922)
	sign="Virgo";
	
// Libra
if(md>=923 && md<=1022)
	sign="Libra";
	
// Scorpio
if(md>=1023 && md<=1121)
	sign="Scorpio";
	
// Sagittarius
if(md>=1122 && md<=1221)
	sign="Sagittarius";
	
// Capricorn
if(md>=1222 || md<=119)
	sign="Capricorn";
	
//print statements

cout << "You were born on " << month << "/" << day << endl
	 << "So your zodiac sign is: " << sign << endl;
	return 0;
}
