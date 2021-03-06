/*
 * Constantes.h
 *
 *  Created on: Oct 23, 2015
 *      Author: ellioth
 */

#ifndef CONSTANTES_H_
#define CONSTANTES_H_
#include <time.h>
#include <cstdlib>
#include <stdlib.h>

using namespace std;
class Constantes {
public:
	static const int cero=0;
	static const int uno=1;
	static const int dos=2;
	static const int cinco=5;
	static const int mil=1000;
	static const int poblacionI=10;
	static const int poblacionT=10;
	static const int posXPista=550;
	static const int posYPista=500;
	static const int anguloMax=360;
	static const int fuerzaMax=10;
	static const int CantGeneraciones=50;
	int genRand(int lowBound, int highBound);
	int* getRand(int lowBound, int highBound);
};

#endif /* CONSTANTES_H_ */
