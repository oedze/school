/*
 * LichtStrip.h
 *
 *  Created on: Jan 16, 2018
 *      Author: oop
 */

#ifndef LICHTSTRIP_H_
#define LICHTSTRIP_H_

#include <ostream>
#include <iostream>
#include <vector>

#include "LichtEffect.h"
using namespace std;

class LichtStrip: public LichtEffect {
public:
	LichtStrip();
	//LichtStrip(LichtEffect&);
	virtual ~LichtStrip();
	void shift(int);
	virtual void zetAan();
	virtual void zetUit();
	virtual string geefConnecties();
	void voegToe(LichtEffect& effect);
	void verwijder(LichtEffect& effect);
private:
	vector<LichtEffect&> lichten;
};

#endif /* LICHTSTRIP_H_ */
