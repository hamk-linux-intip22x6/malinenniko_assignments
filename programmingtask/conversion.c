/* conversion.c */
#include "conversion.h"

const double inchcm = 2.54;

double inchtocm(double inch) {
	return inch*inchcm;
}

double cmtoinch(double cm) {
	return cm/inchcm;
}
