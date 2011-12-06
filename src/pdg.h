#ifndef _pdg_h_
#define _pdg_h_
#include "jednostki.h"

namespace PDG
{

  double mass (int code);
  int charge (int code);
  int spin (int code);
  int J (int code);


  const int pdg_B_cP = 541;
  const int pdg_B_s = 531;
  const int pdg_BstarP = 523;
  const int pdg_Bstar = 513;
  const int pdg_BP = 521;
  const int pdg_B = 511;
  const int pdg_D_1_2420 = 10423;
  const int pdg_D_2_star_2460P = 415;
  const int pdg_D_2_star_2460 = 425;
  const int pdg_D_s_starP = 433;
  const int pdg_D_sP = 431;
  const int pdg_D_s1_2536P = 10433;
  const int pdg_D_s2_2573P = 435;
  const int pdg_D_sJ_2317P = 10431;
  const int pdg_D_sJ_2460P = 20433;
  const int pdg_Dstar_2007 = 423;
  const int pdg_Dstar_2010P = 413;
  const int pdg_DP = 411;
  const int pdg_D = 421;
  const int pdg_Delta_1232P = 2214;
  const int pdg_Delta_1232PP = 2224;
  const int pdg_Delta_1232M = 1114;
  const int pdg_Delta_1232 = 2114;
  const int pdg_Delta_1600P = 32214;
  const int pdg_Delta_1600PP = 32224;
  const int pdg_Delta_1600M = 31114;
  const int pdg_Delta_1600 = 32114;
  const int pdg_Delta_1620P = 2122;
  const int pdg_Delta_1620PP = 2222;
  const int pdg_Delta_1620M = 1112;
  const int pdg_Delta_1620 = 1212;
  const int pdg_Delta_1700P = 12214;
  const int pdg_Delta_1700PP = 12224;
  const int pdg_Delta_1700M = 11114;
  const int pdg_Delta_1700 = 12114;
  const int pdg_Delta_1905P = 2126;
  const int pdg_Delta_1905PP = 2226;
  const int pdg_Delta_1905M = 1116;
  const int pdg_Delta_1905 = 1216;
  const int pdg_Delta_1910P = 22122;
  const int pdg_Delta_1910PP = 22222;
  const int pdg_Delta_1910M = 21112;
  const int pdg_Delta_1910 = 21212;
  const int pdg_Delta_1920P = 22214;
  const int pdg_Delta_1920PP = 22224;
  const int pdg_Delta_1920M = 21114;
  const int pdg_Delta_1920 = 22114;
  const int pdg_Delta_1930P = 12126;
  const int pdg_Delta_1930PP = 12226;
  const int pdg_Delta_1930M = 11116;
  const int pdg_Delta_1930 = 11216;
  const int pdg_Delta_1950P = 2218;
  const int pdg_Delta_1950PP = 2228;
  const int pdg_Delta_1950M = 1118;
  const int pdg_Delta_1950 = 2118;
  const int pdg_Jpsi_1S = 443;
  const int pdg_K_0_star_1430P = 10321;
  const int pdg_K_0_star_1430 = 10311;
  const int pdg_K_1_1270P = 10323;
  const int pdg_K_1_1270 = 10313;
  const int pdg_K_1_1400P = 20323;
  const int pdg_K_1_1400 = 20313;
  const int pdg_K_2_1770P = 10325;
  const int pdg_K_2_1770 = 10315;
  const int pdg_K_2_1820P = 20325;
  const int pdg_K_2_1820 = 20315;
  const int pdg_K_2_star_1430P = 325;
  const int pdg_K_2_star_1430 = 315;
  const int pdg_K_3_star_1780P = 327;
  const int pdg_K_3_star_1780 = 317;
  const int pdg_K_4_star_2045P = 329;
  const int pdg_K_4_star_2045 = 319;
  const int pdg_K_L = 130;
  const int pdg_K_S = 310;
  const int pdg_Kstar_1410P = 100323;
  const int pdg_Kstar_1410 = 100313;
  const int pdg_Kstar_1680P = 30323;
  const int pdg_Kstar_1680 = 30313;
  const int pdg_Kstar_892P = 323;
  const int pdg_Kstar_892 = 313;
  const int pdg_KP = 321;
  const int pdg_K = 311;
  const int pdg_Lambda_1405 = 13122;
  const int pdg_Lambda_1520 = 3124;
  const int pdg_Lambda_1600 = 23122;
  const int pdg_Lambda_1670 = 33122;
  const int pdg_Lambda_1690 = 13124;
  const int pdg_Lambda_1800 = 43122;
  const int pdg_Lambda_1810 = 53122;
  const int pdg_Lambda_1820 = 3126;
  const int pdg_Lambda_1830 = 13126;
  const int pdg_Lambda_1890 = 23124;
  const int pdg_Lambda_2100 = 3128;
  const int pdg_Lambda_2110 = 23126;
  const int pdg_Lambda_b = 5122;
  const int pdg_Lambda_c_2593P = 14122;
  const int pdg_Lambda_cP = 4122;
  const int pdg_Lambda = 3122;
  const int pdg_N_1440P = 12212;
  const int pdg_N_1440 = 12112;
  const int pdg_N_1520P = 2124;
  const int pdg_N_1520 = 1214;
  const int pdg_N_1535P = 22212;
  const int pdg_N_1535 = 22112;
  const int pdg_N_1650P = 32212;
  const int pdg_N_1650 = 32112;
  const int pdg_N_1675P = 2216;
  const int pdg_N_1675 = 2116;
  const int pdg_N_1680P = 12216;
  const int pdg_N_1680 = 12116;
  const int pdg_N_1700P = 22124;
  const int pdg_N_1700 = 21214;
  const int pdg_N_1710P = 42212;
  const int pdg_N_1710 = 42112;
  const int pdg_N_1720P = 32124;
  const int pdg_N_1720 = 31214;
  const int pdg_N_2190P = 2128;
  const int pdg_N_2190 = 1218;
  const int pdg_Omega_c = 4332;
  const int pdg_OmegaM = 3334;
  const int pdg_Sigma_1385P = 3224;
  const int pdg_Sigma_1385M = 3114;
  const int pdg_Sigma_1385 = 3214;
  const int pdg_Sigma_1660P = 13222;
  const int pdg_Sigma_1660M = 13112;
  const int pdg_Sigma_1660 = 13212;
  const int pdg_Sigma_1670P = 13224;
  const int pdg_Sigma_1670M = 13114;
  const int pdg_Sigma_1670 = 13214;
  const int pdg_Sigma_1750P = 23222;
  const int pdg_Sigma_1750M = 23112;
  const int pdg_Sigma_1750 = 23212;
  const int pdg_Sigma_1775P = 3226;
  const int pdg_Sigma_1775M = 3116;
  const int pdg_Sigma_1775 = 3216;
  const int pdg_Sigma_1915P = 13226;
  const int pdg_Sigma_1915M = 13116;
  const int pdg_Sigma_1915 = 13216;
  const int pdg_Sigma_1940P = 23224;
  const int pdg_Sigma_1940M = 23114;
  const int pdg_Sigma_1940 = 23214;
  const int pdg_Sigma_2030P = 3228;
  const int pdg_Sigma_2030M = 3118;
  const int pdg_Sigma_2030 = 3218;
  const int pdg_Sigma_c_2455P = 4212;
  const int pdg_Sigma_c_2455PP = 4222;
  const int pdg_Sigma_c_2455 = 4112;
  const int pdg_SigmaP = 3222;
  const int pdg_SigmaM = 3112;
  const int pdg_Sigma = 3212;
  const int pdg_Theta_1540P = 9221132;
  const int pdg_Upsilon_10860 = 9000553;
  const int pdg_Upsilon_11020 = 9010553;
  const int pdg_Upsilon_1S = 553;
  const int pdg_Upsilon_2S = 100553;
  const int pdg_Upsilon_3S = 200553;
  const int pdg_Upsilon_4S = 300553;
  const int pdg_WP = 24;
  const int pdg_Xi_1530M = 3314;
  const int pdg_Xi_1530 = 3324;
  const int pdg_Xi_1820M = 13314;
  const int pdg_Xi_1820 = 13324;
  const int pdg_Xi_c_primP = 4322;
  const int pdg_Xi_c_prim = 4312;
  const int pdg_Xi_cP = 4232;
  const int pdg_Xi_c = 4132;
  const int pdg_XiM = 3312;
  const int pdg_Xi = 3322;
  const int pdg_Z = 23;
  const int pdg_a_0_1450P = 10211;
  const int pdg_a_0_1450 = 10111;
  const int pdg_a_0_980P = 9000211;
  const int pdg_a_0_980 = 9000111;
  const int pdg_a_1_1260P = 20213;
  const int pdg_a_1_1260 = 20113;
  const int pdg_a_2_1320P = 215;
  const int pdg_a_2_1320 = 115;
  const int pdg_a_4_2040P = 219;
  const int pdg_a_4_2040 = 119;
  const int pdg_b_1_1235P = 10213;
  const int pdg_b_1_1235 = 10113;
  const int pdg_chi_b0_1P = 10551;
  const int pdg_chi_b0_2P = 110551;
  const int pdg_chi_b1_1P = 20553;
  const int pdg_chi_b1_2P = 120553;
  const int pdg_chi_b2_1P = 555;
  const int pdg_chi_b2_2P = 100555;
  const int pdg_chi_c0_1P = 10441;
  const int pdg_chi_c1_1P = 20443;
  const int pdg_chi_c2_1P = 445;
  const int pdg_e = 11;
  const int pdg_etaprim_958 = 331;
  const int pdg_eta_1295 = 100221;
  const int pdg_eta_1405 = 9020221;
  const int pdg_eta_1475 = 100331;
  const int pdg_eta_2_1645 = 10225;
  const int pdg_eta_c_1S = 441;
  const int pdg_eta = 221;
  const int pdg_f_0_1500 = 9030221;
  const int pdg_f_0_1710 = 10331;
  const int pdg_f_0_980 = 9010221;
  const int pdg_f_1_1285 = 20223;
  const int pdg_f_1_1420 = 20333;
  const int pdg_f_2_prim_1525 = 335;
  const int pdg_f_2_1270 = 225;
  const int pdg_f_2_1950 = 9050225;
  const int pdg_f_2_2010 = 9060225;
  const int pdg_f_2_2300 = 9080225;
  const int pdg_f_2_2340 = 9090225;
  const int pdg_f_4_2050 = 229;
  const int pdg_gamma = 22;
  const int pdg_h_1_1170 = 10223;
  const int pdg_mu = 13;
  const int pdg_n = 2112;
  const int pdg_neutron = 2112;
  const int pdg_nu_e = 12;
  const int pdg_nu_mu = 14;
  const int pdg_nu_tau = 16;
  const int pdg_omega_1650 = 30223;
  const int pdg_omega_3_1670 = 227;
  const int pdg_omega_782 = 223;
  const int pdg_pP = 2212;
  const int pdg_proton = 2212;
  const int pdg_phi_1020 = 333;
  const int pdg_phi_1680 = 100333;
  const int pdg_phi_3_1850 = 337;
  const int pdg_pi_1_1400P = 9000213;
  const int pdg_pi_1_1400 = 9000113;
  const int pdg_pi_1_1600P = 9010213;
  const int pdg_pi_1_1600 = 9010113;
  const int pdg_pi_1300P = 100211;
  const int pdg_pi_1300 = 100111;
  const int pdg_pi_1800P = 9010211;
  const int pdg_pi_1800 = 9010111;
  const int pdg_pi_2_1670P = 10215;
  const int pdg_pi_2_1670 = 10115;
  const int pdg_piP = 211;
  const int pdg_pi = 111;
  const int pdg_psi_2S = 100443;
  const int pdg_psi_3770 = 30443;
  const int pdg_psi_4040 = 9000443;
  const int pdg_psi_4160 = 9010443;
  const int pdg_psi_4415 = 9020443;
  const int pdg_rho_1450P = 100213;
  const int pdg_rho_1450 = 100113;
  const int pdg_rho_1700P = 30213;
  const int pdg_rho_1700 = 30113;
  const int pdg_rho_3_1690P = 217;
  const int pdg_rho_3_1690 = 117;
  const int pdg_rho_770P = 213;
  const int pdg_rho_770 = 113;
  const int pdg_t23 = 6;
  const int pdg_tau = 15;

  const double mass_B_cP = 6.4 * GeV;
  const double mass_B_s = 5.3696 * GeV;
  const double mass_BstarP = 5.325 * GeV;
  const double mass_Bstar = 5.325 * GeV;
  const double mass_BP = 5.279 * GeV;
  const double mass_B = 5.2794 * GeV;
  const double mass_D_1_2420 = 2.4222 * GeV;
  const double mass_D_2_star_2460P = 2.459 * GeV;
  const double mass_D_2_star_2460 = 2.4589 * GeV;
  const double mass_D_s_starP = 2.1121 * GeV;
  const double mass_D_sP = 1.9683 * GeV;
  const double mass_D_s1_2536P = 2.5353 * GeV;
  const double mass_D_s2_2573P = 2.5724 * GeV;
  const double mass_D_sJ_2317P = 2.3174 * GeV;
  const double mass_D_sJ_2460P = 2.4593 * GeV;
  const double mass_Dstar_2007 = 2.0067 * GeV;
  const double mass_Dstar_2010P = 2.01 * GeV;
  const double mass_DP = 1.8694 * GeV;
  const double mass_D = 1.8646 * GeV;
  const double mass_Delta_1232P = 1.232 * GeV;
  const double mass_Delta_1232PP = 1.232 * GeV;
  const double mass_Delta_1232M = 1.232 * GeV;
  const double mass_Delta_1232 = 1.232 * GeV;
  const double mass_Delta_1600P = 1.6 * GeV;
  const double mass_Delta_1600PP = 1.6 * GeV;
  const double mass_Delta_1600M = 1.6 * GeV;
  const double mass_Delta_1600 = 1.6 * GeV;
  const double mass_Delta_1620P = 1.62 * GeV;
  const double mass_Delta_1620PP = 1.62 * GeV;
  const double mass_Delta_1620M = 1.62 * GeV;
  const double mass_Delta_1620 = 1.62 * GeV;
  const double mass_Delta_1700P = 1.7 * GeV;
  const double mass_Delta_1700PP = 1.7 * GeV;
  const double mass_Delta_1700M = 1.7 * GeV;
  const double mass_Delta_1700 = 1.7 * GeV;
  const double mass_Delta_1905P = 1.905 * GeV;
  const double mass_Delta_1905PP = 1.905 * GeV;
  const double mass_Delta_1905M = 1.905 * GeV;
  const double mass_Delta_1905 = 1.905 * GeV;
  const double mass_Delta_1910P = 1.91 * GeV;
  const double mass_Delta_1910PP = 1.91 * GeV;
  const double mass_Delta_1910M = 1.91 * GeV;
  const double mass_Delta_1910 = 1.91 * GeV;
  const double mass_Delta_1920P = 1.92 * GeV;
  const double mass_Delta_1920PP = 1.92 * GeV;
  const double mass_Delta_1920M = 1.92 * GeV;
  const double mass_Delta_1920 = 1.92 * GeV;
  const double mass_Delta_1930P = 1.93 * GeV;
  const double mass_Delta_1930PP = 1.93 * GeV;
  const double mass_Delta_1930M = 1.93 * GeV;
  const double mass_Delta_1930 = 1.93 * GeV;
  const double mass_Delta_1950P = 1.95 * GeV;
  const double mass_Delta_1950PP = 1.95 * GeV;
  const double mass_Delta_1950M = 1.95 * GeV;
  const double mass_Delta_1950 = 1.95 * GeV;
  const double mass_Jpsi_1S = 3.09692 * GeV;
  const double mass_K_0_star_1430P = 1.412 * GeV;
  const double mass_K_0_star_1430 = 1.412 * GeV;
  const double mass_K_1_1270P = 1.272 * GeV;
  const double mass_K_1_1270 = 1.272 * GeV;
  const double mass_K_1_1400P = 1.402 * GeV;
  const double mass_K_1_1400 = 1.402 * GeV;
  const double mass_K_2_1770P = 1.773 * GeV;
  const double mass_K_2_1770 = 1.773 * GeV;
  const double mass_K_2_1820P = 1.816 * GeV;
  const double mass_K_2_1820 = 1.816 * GeV;
  const double mass_K_2_star_1430P = 1.4256 * GeV;
  const double mass_K_2_star_1430 = 1.4324 * GeV;
  const double mass_K_3_star_1780P = 1.776 * GeV;
  const double mass_K_3_star_1780 = 1.776 * GeV;
  const double mass_K_4_star_2045P = 2.045 * GeV;
  const double mass_K_4_star_2045 = 2.045 * GeV;
  const double mass_K_L = 0.497648 * GeV;
  const double mass_K_S = 0.497648 * GeV;
  const double mass_Kstar_1410P = 1.414 * GeV;
  const double mass_Kstar_1410 = 1.414 * GeV;
  const double mass_Kstar_1680P = 1.717 * GeV;
  const double mass_Kstar_1680 = 1.717 * GeV;
  const double mass_Kstar_892P = 0.89166 * GeV;
  const double mass_Kstar_892 = 0.8961 * GeV;
  const double mass_KP = 0.493677 * GeV;
  const double mass_K = 0.497648 * GeV;
  const double mass_Lambda_1405 = 1.407 * GeV;
  const double mass_Lambda_1520 = 1.5195 * GeV;
  const double mass_Lambda_1600 = 1.6 * GeV;
  const double mass_Lambda_1670 = 1.67 * GeV;
  const double mass_Lambda_1690 = 1.69 * GeV;
  const double mass_Lambda_1800 = 1.8 * GeV;
  const double mass_Lambda_1810 = 1.81 * GeV;
  const double mass_Lambda_1820 = 1.82 * GeV;
  const double mass_Lambda_1830 = 1.83 * GeV;
  const double mass_Lambda_1890 = 1.89 * GeV;
  const double mass_Lambda_2100 = 2.1 * GeV;
  const double mass_Lambda_2110 = 2.11 * GeV;
  const double mass_Lambda_b = 5.624 * GeV;
  const double mass_Lambda_c_2593P = 2.5939 * GeV;
  const double mass_Lambda_cP = 2.2849 * GeV;
  const double mass_Lambda = 1.11568 * GeV;
  const double mass_N_1440P = 1.44 * GeV;
  const double mass_N_1440 = 1.44 * GeV;
  const double mass_N_1520P = 1.52 * GeV;
  const double mass_N_1520 = 1.52 * GeV;
  const double mass_N_1535P = 1.535 * GeV;
  const double mass_N_1535 = 1.535 * GeV;
  const double mass_N_1650P = 1.65 * GeV;
  const double mass_N_1650 = 1.65 * GeV;
  const double mass_N_1675P = 1.675 * GeV;
  const double mass_N_1675 = 1.675 * GeV;
  const double mass_N_1680P = 1.68 * GeV;
  const double mass_N_1680 = 1.68 * GeV;
  const double mass_N_1700P = 1.7 * GeV;
  const double mass_N_1700 = 1.7 * GeV;
  const double mass_N_1710P = 1.71 * GeV;
  const double mass_N_1710 = 1.71 * GeV;
  const double mass_N_1720P = 1.72 * GeV;
  const double mass_N_1720 = 1.72 * GeV;
  const double mass_N_2190P = 2.19 * GeV;
  const double mass_N_2190 = 2.19 * GeV;
  const double mass_Omega_c = 2.6975 * GeV;
  const double mass_OmegaM = 1.67245 * GeV;
  const double mass_Sigma_1385P = 1.3828 * GeV;
  const double mass_Sigma_1385M = 1.3872 * GeV;
  const double mass_Sigma_1385 = 1.3837 * GeV;
  const double mass_Sigma_1660P = 1.66 * GeV;
  const double mass_Sigma_1660M = 1.66 * GeV;
  const double mass_Sigma_1660 = 1.66 * GeV;
  const double mass_Sigma_1670P = 1.67 * GeV;
  const double mass_Sigma_1670M = 1.67 * GeV;
  const double mass_Sigma_1670 = 1.67 * GeV;
  const double mass_Sigma_1750P = 1.75 * GeV;
  const double mass_Sigma_1750M = 1.75 * GeV;
  const double mass_Sigma_1750 = 1.75 * GeV;
  const double mass_Sigma_1775P = 1.775 * GeV;
  const double mass_Sigma_1775M = 1.775 * GeV;
  const double mass_Sigma_1775 = 1.775 * GeV;
  const double mass_Sigma_1915P = 1.915 * GeV;
  const double mass_Sigma_1915M = 1.915 * GeV;
  const double mass_Sigma_1915 = 1.915 * GeV;
  const double mass_Sigma_1940P = 1.94 * GeV;
  const double mass_Sigma_1940M = 1.94 * GeV;
  const double mass_Sigma_1940 = 1.94 * GeV;
  const double mass_Sigma_2030P = 2.03 * GeV;
  const double mass_Sigma_2030M = 2.03 * GeV;
  const double mass_Sigma_2030 = 2.03 * GeV;
  const double mass_Sigma_c_2455P = 2.4513 * GeV;
  const double mass_Sigma_c_2455PP = 2.4525 * GeV;
  const double mass_Sigma_c_2455 = 2.4522 * GeV;
  const double mass_SigmaP = 1.18937 * GeV;
  const double mass_SigmaM = 1.19745 * GeV;
  const double mass_Sigma = 1.19264 * GeV;
  const double mass_Theta_1540P = 1.5392 * GeV;
  const double mass_Upsilon_10860 = 10.865 * GeV;
  const double mass_Upsilon_11020 = 11.019 * GeV;
  const double mass_Upsilon_1S = 9.4603 * GeV;
  const double mass_Upsilon_2S = 10.0233 * GeV;
  const double mass_Upsilon_3S = 10.3552 * GeV;
  const double mass_Upsilon_4S = 10.58 * GeV;
  const double mass_WP = 80.42 * GeV;
  const double mass_Xi_1530M = 1.535 * GeV;
  const double mass_Xi_1530 = 1.5318 * GeV;
  const double mass_Xi_1820M = 1.823 * GeV;
  const double mass_Xi_1820 = 1.823 * GeV;
  const double mass_Xi_c_primP = 2.5741 * GeV;
  const double mass_Xi_c_prim = 2.5788 * GeV;
  const double mass_Xi_cP = 2.4663 * GeV;
  const double mass_Xi_c = 2.4718 * GeV;
  const double mass_XiM = 1.32131 * GeV;
  const double mass_Xi = 1.31483 * GeV;
  const double mass_Z = 91.1876 * GeV;
  const double mass_a_0_1450P = 1.474 * GeV;
  const double mass_a_0_1450 = 1.474 * GeV;
  const double mass_a_0_980P = 0.9847 * GeV;
  const double mass_a_0_980 = 0.9847 * GeV;
  const double mass_a_1_1260P = 1.23 * GeV;
  const double mass_a_1_1260 = 1.23 * GeV;
  const double mass_a_2_1320P = 1.3183 * GeV;
  const double mass_a_2_1320 = 1.3183 * GeV;
  const double mass_a_4_2040P = 2.01 * GeV;
  const double mass_a_4_2040 = 2.01 * GeV;
  const double mass_b_1_1235P = 1.2295 * GeV;
  const double mass_b_1_1235 = 1.2295 * GeV;
  const double mass_chi_b0_1P = 9.8599 * GeV;
  const double mass_chi_b0_2P = 10.2321 * GeV;
  const double mass_chi_b1_1P = 9.8927 * GeV;
  const double mass_chi_b1_2P = 10.2552 * GeV;
  const double mass_chi_b2_1P = 9.9126 * GeV;
  const double mass_chi_b2_2P = 10.2685 * GeV;
  const double mass_chi_c0_1P = 3.41519 * GeV;
  const double mass_chi_c1_1P = 3.51059 * GeV;
  const double mass_chi_c2_1P = 3.55626 * GeV;
  const double mass_e = 0.000510999 * GeV;
  const double mass_etaprim_958 = 0.95778 * GeV;
  const double mass_eta_1295 = 1.294 * GeV;
  const double mass_eta_1405 = 1.4103 * GeV;
  const double mass_eta_1475 = 1.476 * GeV;
  const double mass_eta_2_1645 = 1.617 * GeV;
  const double mass_eta_c_1S = 2.9796 * GeV;
  const double mass_eta = 0.54775 * GeV;
  const double mass_f_0_1500 = 1.507 * GeV;
  const double mass_f_0_1710 = 1.714 * GeV;
  const double mass_f_0_980 = 0.98 * GeV;
  const double mass_f_1_1285 = 1.2818 * GeV;
  const double mass_f_1_1420 = 1.4263 * GeV;
  const double mass_f_2_prim_1525 = 1.525 * GeV;
  const double mass_f_2_1270 = 1.2754 * GeV;
  const double mass_f_2_1950 = 1.945 * GeV;
  const double mass_f_2_2010 = 2.01 * GeV;
  const double mass_f_2_2300 = 2.297 * GeV;
  const double mass_f_2_2340 = 2.34 * GeV;
  const double mass_f_4_2050 = 2.034 * GeV;
  const double mass_gamma = 0 * GeV;
  const double mass_h_1_1170 = 1.17 * GeV;
  const double mass_mu = 0.105658 * GeV;
  const double mass_n = 0.939565 * GeV;
  const double mass_neutron = 0.939565 * GeV;
  const double mass_nu_e = 0 * GeV;
  const double mass_nu_mu = 0 * GeV;
  const double mass_nu_tau = 0 * GeV;
  const double mass_omega_1650 = 1.67 * GeV;
  const double mass_omega_3_1670 = 1.667 * GeV;
  const double mass_omega_782 = 0.78259 * GeV;
  const double mass_pP = 0.938272 * GeV;
  const double mass_proton = 0.938272 * GeV;
  const double mass_phi_1020 = 1.01946 * GeV;
  const double mass_phi_1680 = 1.68 * GeV;
  const double mass_phi_3_1850 = 1.854 * GeV;
  const double mass_pi_1_1400P = 1.376 * GeV;
  const double mass_pi_1_1400 = 1.376 * GeV;
  const double mass_pi_1_1600P = 1.596 * GeV;
  const double mass_pi_1_1600 = 1.596 * GeV;
  const double mass_pi_1300P = 1.3 * GeV;
  const double mass_pi_1300 = 1.3 * GeV;
  const double mass_pi_1800P = 1.812 * GeV;
  const double mass_pi_1800 = 1.812 * GeV;
  const double mass_pi_2_1670P = 1.6724 * GeV;
  const double mass_pi_2_1670 = 1.6724 * GeV;
  const double mass_piP = 0.13957 * GeV;
  const double mass_pi = 0.134977 * GeV;
  const double mass_psi_2S = 3.68609 * GeV;
  const double mass_psi_3770 = 3.77 * GeV;
  const double mass_psi_4040 = 4.04 * GeV;
  const double mass_psi_4160 = 4.159 * GeV;
  const double mass_psi_4415 = 4.415 * GeV;
  const double mass_rho_1450P = 1.465 * GeV;
  const double mass_rho_1450 = 1.465 * GeV;
  const double mass_rho_1700P = 1.72 * GeV;
  const double mass_rho_1700 = 1.72 * GeV;
  const double mass_rho_3_1690P = 1.6888 * GeV;
  const double mass_rho_3_1690 = 1.6888 * GeV;
  const double mass_rho_770P = 0.7758 * GeV;
  const double mass_rho_770 = 0.7758 * GeV;
  const double mass_t23 = 174 * GeV;
  const double mass_tau = 1.77699 * GeV;

  inline bool nucleon (int pdg)
  {
    return pdg == pdg_proton 
        or pdg == pdg_neutron;
  }

  inline bool nucleon_or_pion (int pdg)
  {
    return pdg == pdg_proton
        or pdg == pdg_neutron
        or pdg == pdg_pi 
	or pdg == pdg_piP 
	or pdg == -pdg_piP;
  }

};


#endif
