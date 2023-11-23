#include <math.h>

#include "dod.h" 
#include "sum.h" 
#include "var.h" 


using namespace nsDod;
using namespace nsVar;


void nsSum::sum() {
	n = 0;
	F = 0;
	R = 0;
	a = (x - 1.) / (x + 1.);
	S = a;

	do {
		n++;
		dod();
		S += a;
	} while (fabs(a) >= e); 
	F = 2 * S;
}
