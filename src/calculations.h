#ifndef _calculations_h_
#define _calculations_h_
#include <string>
using namespace std;

double crosssection (string filename);
void crosssection (string filename, double *xsec, int nc);
void calclog(string command);
void zero (double *tab, int bins);
void zero (int *tab, int bins);
void put (double value, double *source, double *target, double &rest, const int bins);
void put (double value, const double *source, const double *sourceerr, double *target, const int bins);
void merge (double *tab1, double weight1, double *tab2, double weight2, double *result, const int bins);
double factor (double *target, const double *source, const int bins);
int calcK2K (int fz, int xs);
int calcMB (int fz, int xs, bool anti);
int calcMBback (int fz, int xs, bool anti);
int calcMBCC (int fz, int xs);
int calcMBCCtotal (int fz, int xs);
int calcSB (int fz, int xs);
int calcPNS (int fz, int xs);
void calcTrans (string filename, double *x, double *y, double *norm, const int bins, int events, int argument);
int calcPrThe (int fz, int xs);
int calcPiThe (int fz, int xs);
void calcTrans2 (string filename, double *x, double *y, double *norm, const int bins, int events);
int calcPiTrans(int fz, int xs);
//int calcPiTrans3b(string filename);
int calcPiTrans3();
int calcPrTle (int fz, int xs);
int calcPiTle (int fz, int xs);
void calcFZ ();
int calcNomad (int fz, int xs);
int calcAtmNu (int fz, int xs);
void xsectable (string name, double *en, double xsec[][5], int bins);
int calcSBCCtotal();
int calcNOMADCCtotal();
int calcMINOSCCtotal();
int calcsfg();
int calcbg();
int calcMBCCrat (int fz, int xs);
int calcnuintTr (int fz, int xs);
int roman_calc ();
int roman_3b ();
int roman_3d ();
int roman_7b ();
int roman_extra ();
void oset_count (string filename, double *n, double *en, double *en2, int events);
void oset_impac(string filename, double *qel, double *abs, int events);
int oset_calc ();
void kt();
void t2k_anal_calc();
void hayato_calc();
void dens_test_calc();
int viviNomad4(int fz, int xs);
void ptcalc();
void ang_calc();
#endif
