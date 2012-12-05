#ifndef _mecevent_tem_h_
#define _mecevent_tem_h_

#include <cassert>
#include "particle.h"
#include "jednostki.h"
#include <fstream>
#include <sstream>
#include <cmath>
#include "params.h"
#include "beam.h"
#include "pdg.h"
#include "nucleus.h"
#include "event1.h"
#include "Nieves_MEC_CC_C12.h"
//extern int noev;
//muon mass
static double mmu = 105.6583668*MeV;
//if you are exactly in point...
static double eps_inpoint=1e-06;
static double width_T;

static int calls_max=100;
const double MN = (PDG::mass_proton);// + PDG::mass_neutron) / 2.0;
const double MN2 = MN * MN;

inline bool blocked (double E, double m)		//determines a lower bound of the neutrino energy
{
	if (2.0 * MN * E > m * (2.0 * MN + m)) //(W2-mecMN2-mecMN2)*(W2-mecMN2-mecMN2) - 4.0*mecMN2*mecMN2 > 0
		return false;
	else
		return true;
}
//because the cross section is defined by muon kinematics.
double Nieves_kin_and_weight (double E, particle &meclep, particle *nucleon, nucleus &t);
//This sets all final nucleon behaviour. Thanks to T.G.
void Nieves_do_cc (particle *p, double ratio);

#endif