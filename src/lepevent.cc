#include "lepevent.h"

#include "params.h"
#include "event1.h"
#include "pdg.h"

double lepevent(params& p, event& e, bool cc)
{
  e.weight = 0;

  particle neut_in = e.in[0]; // e.in[0] is neutrino
  particle elec_in = e.in[1]; // e.in[1] is electron

  particle lept_out(PDG::pdg_e, PDG::mass_e); // for now only electrons
  particle elec_out(PDG::pdg_e, PDG::mass_e); // for now only electrons
  lept_out.r = elec_in.r; elec_out.r = elec_in.r;

  // generate kinematics

  // calculate cross section in proper units (cm^2)
  e.weight = frandom();

  // put final particles into "out" vector
  e.out.push_back(lept_out);
  e.out.push_back(elec_out);

  return e.weight;
}