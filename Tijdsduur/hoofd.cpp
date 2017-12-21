#include <iostream> // nodig voor cout (schrijven naar scherm)
#include <iomanip> // nodig voor setw (veldbreedte definiëren)
#include "Tijdsduur.h"
#include "Logled.h"

using namespace std;

#define GPIO18_PAD "/sys/class/gpio/"
#define GPIO18_NUMMER "18"

int main() {
    /*
	Tijdsduur t1(3,50); // t1 is 3 minuten en 50 seconden
    cout<<"t1 = "; t1.print(); cout<<endl;
    Tijdsduur kw(15); // kw is 15 seconden
    cout<<"kw = "; kw.print(); cout<<endl;
    t1.erbij(kw); // Tel kw bij t1 op
    cout<<"t1 = "; t1.print(); cout<<endl;
    Tijdsduur t2(t1); // t2 is een kopie van t1
    t2.eraf(kw); // Trek kw van t2 af
    cout<<"t2 = "; t2.print(); cout<<endl;
    t2.maal(7); // Vermenigvuldig t2 met 7
    cout<<"t2 = "; t2.print(); cout<<endl;
    Tijdsduur t3(3,-122); // t3 is 3 minuten minus 122 seconden
    cout<<"t3 = "; t3.print(); cout<<endl;
    Tijdsduur t4(3,122); // t4 is 3 minuten plus 122 seconden
    cout<<"t4 = "; t4.print(); cout<<endl;
    cout<<"Druk op de return-toets."<<endl;
    cin.get();
    return 0;
    */

	Logled l1(GPIO18_PAD, GPIO18_NUMMER);
	l1.zetAan();
}
