#include <iostream> // nodig voor cout (schrijven naar scherm)
#include <iomanip> // nodig voor setw (veldbreedte definiëren)
#include "Tijdsduur.h"
#include "Logled.h"
#include "SingleLed.h"
#include "MultiLed.h"
#include "LichtStrip.h"
#include "LichtEffect.h"
#include <unistd.h>
using namespace std;

void printConnecties(Led& l);

#define GPIO_PAD "/sys/class/gpio/"
#define GPIO18_NUMMER "18"

int main() {

	SingleLed s1("24");
	SingleLed s2("18");
	SingleLed s3("17");

	s1.init();
	s2.init();
	s3.init();

	//s1.zetAan();
	//s2.zetAan();
	//s3.zetAan();

	//cout<<"Lichtstrip st1 aanmaken"<<endl;;
	LichtStrip st1(s1);
	LichtStrip st2(s2);

	st2.voegToe(s3);
	st1.voegToe(st2);

	st1.zetAan();
	usleep(1000000);
	st1.zetUit();

	cout<<"Connecties: "; st1.geefConnecties();

	usleep(2000000);
	st1.shift(5);
	st1.verwijder(st2);

	cout<<"Connecties: "; st1.geefConnecties();
	usleep(5000000);

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

	/*
	SingleLed l1("24");
	MultiLed l2("18", "23");
	Logled l3(GPIO_PAD, "17");

	printConnecties(l1);
	printConnecties(l2);
	printConnecties(l3);

	l1.init();
	l2.init();
	l3.init();
	l1.zetAan();

	l2.zetAan();

	l3.zetAan();

	usleep(10000000);

	l1.zetUit();
	l2.zetUit();
	l3.zetUit();
	*/


	/*
	//Logled l1(GPIO18_PAD, GPIO18_NUMMER);
	l1.zetAan();
	usleep(5000000);
	l1.zetUit();
	usleep(1000000);
	l1.zetAan();
	usleep(5000000);
	l1.zetUit();
	usleep(1000000);
	l1.zetAan();
	usleep(5000000);
	l1.zetUit();
	usleep(1000000);
	l1.zetAan();
	usleep(5000000);
	l1.zetUit();
	usleep(1000000);
	*/
}

void printConnecties(Led& l){
	cout<<"Led(s) verbonden op de volgende poort(en): "<<l.geefConnecties()<<endl;
}
