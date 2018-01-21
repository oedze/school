/*
 * LichtEffect.h
 *
 *  Created on: Jan 16, 2018
 *      Author: oop
 */

#ifndef LICHTEFFECT_H_
#define LICHTEFFECT_H_

#include <ostream>

using namespace std;

class LichtEffect {
public:
	LichtEffect();
	virtual ~LichtEffect();
	virtual void zetAan();
	virtual void zetUit();
	virtual string geefConnecties();
};

 /* namespace std */

#endif /* LICHTEFFECT_H_ */
