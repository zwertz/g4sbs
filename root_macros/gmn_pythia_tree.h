//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Aug  2 12:09:05 2023 by ROOT version 6.26/10
// from TTree T/Geant4 SBS Simulation
// found on file: GMN_SBS9_PYTHIA_proton_job1.root
//////////////////////////////////////////////////////////

#ifndef gmn_pythia_tree_h
#define gmn_pythia_tree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "c++/v1/vector"
#include "c++/v1/vector"

class gmn_pythia_tree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        ev_count;
   Double_t        ev_rate;
   Double_t        ev_solang;
   Double_t        ev_sigma;
   Double_t        ev_W2;
   Double_t        ev_xbj;
   Double_t        ev_Q2;
   Double_t        ev_th;
   Double_t        ev_ph;
   Double_t        ev_Aperp;
   Double_t        ev_Apar;
   Double_t        ev_Pt;
   Double_t        ev_Pl;
   Double_t        ev_vx;
   Double_t        ev_vy;
   Double_t        ev_vz;
   Double_t        ev_ep;
   Double_t        ev_np;
   Double_t        ev_epx;
   Double_t        ev_epy;
   Double_t        ev_epz;
   Double_t        ev_npx;
   Double_t        ev_npy;
   Double_t        ev_npz;
   Double_t        ev_nth;
   Double_t        ev_nph;
   Double_t        ev_pmperp;
   Double_t        ev_pmpar;
   Double_t        ev_pmparsm;
   Double_t        ev_z;
   Double_t        ev_phperp;
   Double_t        ev_phih;
   Double_t        ev_phiS;
   Double_t        ev_thetaS;
   Double_t        ev_MX2;
   Double_t        ev_Sx;
   Double_t        ev_Sy;
   Double_t        ev_Sz;
   Double_t        ev_s;
   Double_t        ev_t;
   Double_t        ev_u;
   Double_t        ev_costhetaCM;
   Double_t        ev_Egamma;
   Int_t           ev_nucl;
   Int_t           ev_fnucl;
   Int_t           ev_hadr;
   Int_t           ev_earmaccept;
   Int_t           ev_harmaccept;
   Double_t        TargPol;
   Double_t        TargThetaSpin;
   Double_t        TargPhiSpin;
   Double_t        BeamPol;
   Double_t        BeamThetaSpin;
   Double_t        BeamPhiSpin;
   Int_t           Earm_BBGEM_hit_nhits;
   vector<int>     *Earm_BBGEM_hit_plane;
   vector<int>     *Earm_BBGEM_hit_strip;
   vector<double>  *Earm_BBGEM_hit_x;
   vector<double>  *Earm_BBGEM_hit_y;
   vector<double>  *Earm_BBGEM_hit_z;
   vector<double>  *Earm_BBGEM_hit_polx;
   vector<double>  *Earm_BBGEM_hit_poly;
   vector<double>  *Earm_BBGEM_hit_polz;
   vector<double>  *Earm_BBGEM_hit_t;
   vector<double>  *Earm_BBGEM_hit_trms;
   vector<double>  *Earm_BBGEM_hit_tmin;
   vector<double>  *Earm_BBGEM_hit_tmax;
   vector<double>  *Earm_BBGEM_hit_tx;
   vector<double>  *Earm_BBGEM_hit_ty;
   vector<double>  *Earm_BBGEM_hit_xin;
   vector<double>  *Earm_BBGEM_hit_yin;
   vector<double>  *Earm_BBGEM_hit_zin;
   vector<double>  *Earm_BBGEM_hit_xout;
   vector<double>  *Earm_BBGEM_hit_yout;
   vector<double>  *Earm_BBGEM_hit_zout;
   vector<double>  *Earm_BBGEM_hit_txp;
   vector<double>  *Earm_BBGEM_hit_typ;
   vector<double>  *Earm_BBGEM_hit_xg;
   vector<double>  *Earm_BBGEM_hit_yg;
   vector<double>  *Earm_BBGEM_hit_zg;
   vector<int>     *Earm_BBGEM_hit_trid;
   vector<int>     *Earm_BBGEM_hit_mid;
   vector<int>     *Earm_BBGEM_hit_pid;
   vector<double>  *Earm_BBGEM_hit_vx;
   vector<double>  *Earm_BBGEM_hit_vy;
   vector<double>  *Earm_BBGEM_hit_vz;
   vector<double>  *Earm_BBGEM_hit_p;
   vector<double>  *Earm_BBGEM_hit_edep;
   vector<double>  *Earm_BBGEM_hit_beta;
   vector<int>     *Earm_BBGEM_hit_otridx;
   vector<int>     *Earm_BBGEM_hit_ptridx;
   vector<int>     *Earm_BBGEM_hit_sdtridx;
   Int_t           Earm_BBGEM_Track_ntracks;
   vector<int>     *Earm_BBGEM_Track_TID;
   vector<int>     *Earm_BBGEM_Track_PID;
   vector<int>     *Earm_BBGEM_Track_MID;
   vector<int>     *Earm_BBGEM_Track_NumHits;
   vector<int>     *Earm_BBGEM_Track_NumPlanes;
   vector<int>     *Earm_BBGEM_Track_NDF;
   vector<double>  *Earm_BBGEM_Track_Chi2fit;
   vector<double>  *Earm_BBGEM_Track_Chi2true;
   vector<double>  *Earm_BBGEM_Track_X;
   vector<double>  *Earm_BBGEM_Track_Y;
   vector<double>  *Earm_BBGEM_Track_Xp;
   vector<double>  *Earm_BBGEM_Track_Yp;
   vector<double>  *Earm_BBGEM_Track_T;
   vector<double>  *Earm_BBGEM_Track_P;
   vector<double>  *Earm_BBGEM_Track_Sx;
   vector<double>  *Earm_BBGEM_Track_Sy;
   vector<double>  *Earm_BBGEM_Track_Sz;
   vector<double>  *Earm_BBGEM_Track_Xfit;
   vector<double>  *Earm_BBGEM_Track_Yfit;
   vector<double>  *Earm_BBGEM_Track_Xpfit;
   vector<double>  *Earm_BBGEM_Track_Ypfit;
   vector<int>     *Earm_BBGEM_Track_otridx;
   vector<int>     *Earm_BBGEM_Track_ptridx;
   vector<int>     *Earm_BBGEM_Track_sdtridx;
   Double_t        Earm_BBHodoScint_det_esum;
   Int_t           Earm_BBHodoScint_hit_nhits;
   vector<int>     *Earm_BBHodoScint_hit_row;
   vector<int>     *Earm_BBHodoScint_hit_col;
   vector<int>     *Earm_BBHodoScint_hit_cell;
   vector<int>     *Earm_BBHodoScint_hit_plane;
   vector<int>     *Earm_BBHodoScint_hit_wire;
   vector<double>  *Earm_BBHodoScint_hit_xcell;
   vector<double>  *Earm_BBHodoScint_hit_ycell;
   vector<double>  *Earm_BBHodoScint_hit_zcell;
   vector<double>  *Earm_BBHodoScint_hit_xcellg;
   vector<double>  *Earm_BBHodoScint_hit_ycellg;
   vector<double>  *Earm_BBHodoScint_hit_zcellg;
   vector<double>  *Earm_BBHodoScint_hit_xhit;
   vector<double>  *Earm_BBHodoScint_hit_yhit;
   vector<double>  *Earm_BBHodoScint_hit_zhit;
   vector<double>  *Earm_BBHodoScint_hit_xhitg;
   vector<double>  *Earm_BBHodoScint_hit_yhitg;
   vector<double>  *Earm_BBHodoScint_hit_zhitg;
   vector<double>  *Earm_BBHodoScint_hit_sumedep;
   vector<double>  *Earm_BBHodoScint_hit_tavg;
   vector<double>  *Earm_BBHodoScint_hit_trms;
   vector<double>  *Earm_BBHodoScint_hit_tmin;
   vector<double>  *Earm_BBHodoScint_hit_tmax;
   vector<int>     *Earm_BBHodoScint_hit_otridx;
   vector<int>     *Earm_BBHodoScint_hit_ptridx;
   vector<int>     *Earm_BBHodoScint_hit_sdtridx;
   Double_t        Earm_BBPSTF1_det_esum;
   Int_t           Earm_BBPSTF1_hit_nhits;
   vector<int>     *Earm_BBPSTF1_hit_row;
   vector<int>     *Earm_BBPSTF1_hit_col;
   vector<int>     *Earm_BBPSTF1_hit_cell;
   vector<int>     *Earm_BBPSTF1_hit_plane;
   vector<int>     *Earm_BBPSTF1_hit_wire;
   vector<double>  *Earm_BBPSTF1_hit_xcell;
   vector<double>  *Earm_BBPSTF1_hit_ycell;
   vector<double>  *Earm_BBPSTF1_hit_zcell;
   vector<double>  *Earm_BBPSTF1_hit_xcellg;
   vector<double>  *Earm_BBPSTF1_hit_ycellg;
   vector<double>  *Earm_BBPSTF1_hit_zcellg;
   vector<double>  *Earm_BBPSTF1_hit_xhit;
   vector<double>  *Earm_BBPSTF1_hit_yhit;
   vector<double>  *Earm_BBPSTF1_hit_zhit;
   vector<double>  *Earm_BBPSTF1_hit_xhitg;
   vector<double>  *Earm_BBPSTF1_hit_yhitg;
   vector<double>  *Earm_BBPSTF1_hit_zhitg;
   vector<double>  *Earm_BBPSTF1_hit_sumedep;
   vector<double>  *Earm_BBPSTF1_hit_tavg;
   vector<double>  *Earm_BBPSTF1_hit_trms;
   vector<double>  *Earm_BBPSTF1_hit_tmin;
   vector<double>  *Earm_BBPSTF1_hit_tmax;
   vector<int>     *Earm_BBPSTF1_hit_otridx;
   vector<int>     *Earm_BBPSTF1_hit_ptridx;
   vector<int>     *Earm_BBPSTF1_hit_sdtridx;
   Double_t        Earm_BBSHTF1_det_esum;
   Int_t           Earm_BBSHTF1_hit_nhits;
   vector<int>     *Earm_BBSHTF1_hit_row;
   vector<int>     *Earm_BBSHTF1_hit_col;
   vector<int>     *Earm_BBSHTF1_hit_cell;
   vector<int>     *Earm_BBSHTF1_hit_plane;
   vector<int>     *Earm_BBSHTF1_hit_wire;
   vector<double>  *Earm_BBSHTF1_hit_xcell;
   vector<double>  *Earm_BBSHTF1_hit_ycell;
   vector<double>  *Earm_BBSHTF1_hit_zcell;
   vector<double>  *Earm_BBSHTF1_hit_xcellg;
   vector<double>  *Earm_BBSHTF1_hit_ycellg;
   vector<double>  *Earm_BBSHTF1_hit_zcellg;
   vector<double>  *Earm_BBSHTF1_hit_xhit;
   vector<double>  *Earm_BBSHTF1_hit_yhit;
   vector<double>  *Earm_BBSHTF1_hit_zhit;
   vector<double>  *Earm_BBSHTF1_hit_xhitg;
   vector<double>  *Earm_BBSHTF1_hit_yhitg;
   vector<double>  *Earm_BBSHTF1_hit_zhitg;
   vector<double>  *Earm_BBSHTF1_hit_sumedep;
   vector<double>  *Earm_BBSHTF1_hit_tavg;
   vector<double>  *Earm_BBSHTF1_hit_trms;
   vector<double>  *Earm_BBSHTF1_hit_tmin;
   vector<double>  *Earm_BBSHTF1_hit_tmax;
   vector<int>     *Earm_BBSHTF1_hit_otridx;
   vector<int>     *Earm_BBSHTF1_hit_ptridx;
   vector<int>     *Earm_BBSHTF1_hit_sdtridx;
   Double_t        Harm_HCalScint_det_esum;
   Int_t           Harm_HCalScint_hit_nhits;
   vector<int>     *Harm_HCalScint_hit_row;
   vector<int>     *Harm_HCalScint_hit_col;
   vector<int>     *Harm_HCalScint_hit_cell;
   vector<int>     *Harm_HCalScint_hit_plane;
   vector<int>     *Harm_HCalScint_hit_wire;
   vector<double>  *Harm_HCalScint_hit_xcell;
   vector<double>  *Harm_HCalScint_hit_ycell;
   vector<double>  *Harm_HCalScint_hit_zcell;
   vector<double>  *Harm_HCalScint_hit_xcellg;
   vector<double>  *Harm_HCalScint_hit_ycellg;
   vector<double>  *Harm_HCalScint_hit_zcellg;
   vector<double>  *Harm_HCalScint_hit_xhit;
   vector<double>  *Harm_HCalScint_hit_yhit;
   vector<double>  *Harm_HCalScint_hit_zhit;
   vector<double>  *Harm_HCalScint_hit_xhitg;
   vector<double>  *Harm_HCalScint_hit_yhitg;
   vector<double>  *Harm_HCalScint_hit_zhitg;
   vector<double>  *Harm_HCalScint_hit_sumedep;
   vector<double>  *Harm_HCalScint_hit_tavg;
   vector<double>  *Harm_HCalScint_hit_trms;
   vector<double>  *Harm_HCalScint_hit_tmin;
   vector<double>  *Harm_HCalScint_hit_tmax;
   vector<int>     *Harm_HCalScint_hit_otridx;
   vector<int>     *Harm_HCalScint_hit_ptridx;
   vector<int>     *Harm_HCalScint_hit_sdtridx;
   Int_t           OTrack_ntracks;
   vector<int>     *OTrack_TID;
   vector<int>     *OTrack_MID;
   vector<int>     *OTrack_PID;
   vector<int>     *OTrack_MPID;
   vector<double>  *OTrack_posx;
   vector<double>  *OTrack_posy;
   vector<double>  *OTrack_posz;
   vector<double>  *OTrack_momx;
   vector<double>  *OTrack_momy;
   vector<double>  *OTrack_momz;
   vector<double>  *OTrack_polx;
   vector<double>  *OTrack_poly;
   vector<double>  *OTrack_polz;
   vector<double>  *OTrack_Etot;
   vector<double>  *OTrack_T;
   Int_t           PTrack_ntracks;
   vector<int>     *PTrack_TID;
   vector<int>     *PTrack_PID;
   vector<double>  *PTrack_posx;
   vector<double>  *PTrack_posy;
   vector<double>  *PTrack_posz;
   vector<double>  *PTrack_momx;
   vector<double>  *PTrack_momy;
   vector<double>  *PTrack_momz;
   vector<double>  *PTrack_polx;
   vector<double>  *PTrack_poly;
   vector<double>  *PTrack_polz;
   vector<double>  *PTrack_Etot;
   vector<double>  *PTrack_T;
   Int_t           SDTrack_ntracks;
   vector<int>     *SDTrack_TID;
   vector<int>     *SDTrack_MID;
   vector<int>     *SDTrack_PID;
   vector<int>     *SDTrack_MPID;
   vector<double>  *SDTrack_posx;
   vector<double>  *SDTrack_posy;
   vector<double>  *SDTrack_posz;
   vector<double>  *SDTrack_momx;
   vector<double>  *SDTrack_momy;
   vector<double>  *SDTrack_momz;
   vector<double>  *SDTrack_polx;
   vector<double>  *SDTrack_poly;
   vector<double>  *SDTrack_polz;
   vector<double>  *SDTrack_Etot;
   vector<double>  *SDTrack_T;
   vector<double>  *SDTrack_vx;
   vector<double>  *SDTrack_vy;
   vector<double>  *SDTrack_vz;
   vector<double>  *SDTrack_vnx;
   vector<double>  *SDTrack_vny;
   vector<double>  *SDTrack_vnz;
   vector<double>  *SDTrack_vEkin;
   Double_t        primaries_Sigma;
   Double_t        primaries_Ebeam;
   Double_t        primaries_Eprime;
   Double_t        primaries_Q2;
   Double_t        primaries_xbj;
   Double_t        primaries_y;
   Double_t        primaries_W2;
   Double_t        primaries_theta_e;
   Double_t        primaries_phi_e;
   Double_t        primaries_px_e;
   Double_t        primaries_py_e;
   Double_t        primaries_pz_e;
   Double_t        primaries_vx_e;
   Double_t        primaries_vy_e;
   Double_t        primaries_vz_e;
   Double_t        primaries_Egamma;
   Double_t        primaries_theta_gamma;
   Double_t        primaries_phi_gamma;
   Double_t        primaries_px_gamma;
   Double_t        primaries_py_gamma;
   Double_t        primaries_pz_gamma;
   Double_t        primaries_vx_gamma;
   Double_t        primaries_vy_gamma;
   Double_t        primaries_vz_gamma;
   Int_t           Primaries_Nprimaries;
   vector<int>     *Primaries_PID;
   vector<int>     *Primaries_genflag;
   vector<double>  *Primaries_Px;
   vector<double>  *Primaries_Py;
   vector<double>  *Primaries_Pz;
   vector<double>  *Primaries_vx;
   vector<double>  *Primaries_vy;
   vector<double>  *Primaries_vz;
   vector<double>  *Primaries_M;
   vector<double>  *Primaries_E;
   vector<double>  *Primaries_P;
   vector<double>  *Primaries_t;
   vector<double>  *Primaries_theta;
   vector<double>  *Primaries_phi;

   // List of branches
   TBranch        *b_ev;   //!
   TBranch        *b_TargPol;   //!
   TBranch        *b_TargThetaSpin;   //!
   TBranch        *b_TargPhiSpin;   //!
   TBranch        *b_BeamPol;   //!
   TBranch        *b_BeamThetaSpin;   //!
   TBranch        *b_BeamPhiSpin;   //!
   TBranch        *b_Earm_BBGEM_hit_nhits;   //!
   TBranch        *b_Earm_BBGEM_hit_plane;   //!
   TBranch        *b_Earm_BBGEM_hit_strip;   //!
   TBranch        *b_Earm_BBGEM_hit_x;   //!
   TBranch        *b_Earm_BBGEM_hit_y;   //!
   TBranch        *b_Earm_BBGEM_hit_z;   //!
   TBranch        *b_Earm_BBGEM_hit_polx;   //!
   TBranch        *b_Earm_BBGEM_hit_poly;   //!
   TBranch        *b_Earm_BBGEM_hit_polz;   //!
   TBranch        *b_Earm_BBGEM_hit_t;   //!
   TBranch        *b_Earm_BBGEM_hit_trms;   //!
   TBranch        *b_Earm_BBGEM_hit_tmin;   //!
   TBranch        *b_Earm_BBGEM_hit_tmax;   //!
   TBranch        *b_Earm_BBGEM_hit_tx;   //!
   TBranch        *b_Earm_BBGEM_hit_ty;   //!
   TBranch        *b_Earm_BBGEM_hit_xin;   //!
   TBranch        *b_Earm_BBGEM_hit_yin;   //!
   TBranch        *b_Earm_BBGEM_hit_zin;   //!
   TBranch        *b_Earm_BBGEM_hit_xout;   //!
   TBranch        *b_Earm_BBGEM_hit_yout;   //!
   TBranch        *b_Earm_BBGEM_hit_zout;   //!
   TBranch        *b_Earm_BBGEM_hit_txp;   //!
   TBranch        *b_Earm_BBGEM_hit_typ;   //!
   TBranch        *b_Earm_BBGEM_hit_xg;   //!
   TBranch        *b_Earm_BBGEM_hit_yg;   //!
   TBranch        *b_Earm_BBGEM_hit_zg;   //!
   TBranch        *b_Earm_BBGEM_hit_trid;   //!
   TBranch        *b_Earm_BBGEM_hit_mid;   //!
   TBranch        *b_Earm_BBGEM_hit_pid;   //!
   TBranch        *b_Earm_BBGEM_hit_vx;   //!
   TBranch        *b_Earm_BBGEM_hit_vy;   //!
   TBranch        *b_Earm_BBGEM_hit_vz;   //!
   TBranch        *b_Earm_BBGEM_hit_p;   //!
   TBranch        *b_Earm_BBGEM_hit_edep;   //!
   TBranch        *b_Earm_BBGEM_hit_beta;   //!
   TBranch        *b_Earm_BBGEM_hit_otridx;   //!
   TBranch        *b_Earm_BBGEM_hit_ptridx;   //!
   TBranch        *b_Earm_BBGEM_hit_sdtridx;   //!
   TBranch        *b_Earm_BBGEM_Track_ntracks;   //!
   TBranch        *b_Earm_BBGEM_Track_TID;   //!
   TBranch        *b_Earm_BBGEM_Track_PID;   //!
   TBranch        *b_Earm_BBGEM_Track_MID;   //!
   TBranch        *b_Earm_BBGEM_Track_NumHits;   //!
   TBranch        *b_Earm_BBGEM_Track_NumPlanes;   //!
   TBranch        *b_Earm_BBGEM_Track_NDF;   //!
   TBranch        *b_Earm_BBGEM_Track_Chi2fit;   //!
   TBranch        *b_Earm_BBGEM_Track_Chi2true;   //!
   TBranch        *b_Earm_BBGEM_Track_X;   //!
   TBranch        *b_Earm_BBGEM_Track_Y;   //!
   TBranch        *b_Earm_BBGEM_Track_Xp;   //!
   TBranch        *b_Earm_BBGEM_Track_Yp;   //!
   TBranch        *b_Earm_BBGEM_Track_T;   //!
   TBranch        *b_Earm_BBGEM_Track_P;   //!
   TBranch        *b_Earm_BBGEM_Track_Sx;   //!
   TBranch        *b_Earm_BBGEM_Track_Sy;   //!
   TBranch        *b_Earm_BBGEM_Track_Sz;   //!
   TBranch        *b_Earm_BBGEM_Track_Xfit;   //!
   TBranch        *b_Earm_BBGEM_Track_Yfit;   //!
   TBranch        *b_Earm_BBGEM_Track_Xpfit;   //!
   TBranch        *b_Earm_BBGEM_Track_Ypfit;   //!
   TBranch        *b_Earm_BBGEM_Track_otridx;   //!
   TBranch        *b_Earm_BBGEM_Track_ptridx;   //!
   TBranch        *b_Earm_BBGEM_Track_sdtridx;   //!
   TBranch        *b_Earm_BBHodoScint_det_esum;   //!
   TBranch        *b_Earm_BBHodoScint_hit_nhits;   //!
   TBranch        *b_Earm_BBHodoScint_hit_row;   //!
   TBranch        *b_Earm_BBHodoScint_hit_col;   //!
   TBranch        *b_Earm_BBHodoScint_hit_cell;   //!
   TBranch        *b_Earm_BBHodoScint_hit_plane;   //!
   TBranch        *b_Earm_BBHodoScint_hit_wire;   //!
   TBranch        *b_Earm_BBHodoScint_hit_xcell;   //!
   TBranch        *b_Earm_BBHodoScint_hit_ycell;   //!
   TBranch        *b_Earm_BBHodoScint_hit_zcell;   //!
   TBranch        *b_Earm_BBHodoScint_hit_xcellg;   //!
   TBranch        *b_Earm_BBHodoScint_hit_ycellg;   //!
   TBranch        *b_Earm_BBHodoScint_hit_zcellg;   //!
   TBranch        *b_Earm_BBHodoScint_hit_xhit;   //!
   TBranch        *b_Earm_BBHodoScint_hit_yhit;   //!
   TBranch        *b_Earm_BBHodoScint_hit_zhit;   //!
   TBranch        *b_Earm_BBHodoScint_hit_xhitg;   //!
   TBranch        *b_Earm_BBHodoScint_hit_yhitg;   //!
   TBranch        *b_Earm_BBHodoScint_hit_zhitg;   //!
   TBranch        *b_Earm_BBHodoScint_hit_sumedep;   //!
   TBranch        *b_Earm_BBHodoScint_hit_tavg;   //!
   TBranch        *b_Earm_BBHodoScint_hit_trms;   //!
   TBranch        *b_Earm_BBHodoScint_hit_tmin;   //!
   TBranch        *b_Earm_BBHodoScint_hit_tmax;   //!
   TBranch        *b_Earm_BBHodoScint_hit_otridx;   //!
   TBranch        *b_Earm_BBHodoScint_hit_ptridx;   //!
   TBranch        *b_Earm_BBHodoScint_hit_sdtridx;   //!
   TBranch        *b_Earm_BBPSTF1_det_esum;   //!
   TBranch        *b_Earm_BBPSTF1_hit_nhits;   //!
   TBranch        *b_Earm_BBPSTF1_hit_row;   //!
   TBranch        *b_Earm_BBPSTF1_hit_col;   //!
   TBranch        *b_Earm_BBPSTF1_hit_cell;   //!
   TBranch        *b_Earm_BBPSTF1_hit_plane;   //!
   TBranch        *b_Earm_BBPSTF1_hit_wire;   //!
   TBranch        *b_Earm_BBPSTF1_hit_xcell;   //!
   TBranch        *b_Earm_BBPSTF1_hit_ycell;   //!
   TBranch        *b_Earm_BBPSTF1_hit_zcell;   //!
   TBranch        *b_Earm_BBPSTF1_hit_xcellg;   //!
   TBranch        *b_Earm_BBPSTF1_hit_ycellg;   //!
   TBranch        *b_Earm_BBPSTF1_hit_zcellg;   //!
   TBranch        *b_Earm_BBPSTF1_hit_xhit;   //!
   TBranch        *b_Earm_BBPSTF1_hit_yhit;   //!
   TBranch        *b_Earm_BBPSTF1_hit_zhit;   //!
   TBranch        *b_Earm_BBPSTF1_hit_xhitg;   //!
   TBranch        *b_Earm_BBPSTF1_hit_yhitg;   //!
   TBranch        *b_Earm_BBPSTF1_hit_zhitg;   //!
   TBranch        *b_Earm_BBPSTF1_hit_sumedep;   //!
   TBranch        *b_Earm_BBPSTF1_hit_tavg;   //!
   TBranch        *b_Earm_BBPSTF1_hit_trms;   //!
   TBranch        *b_Earm_BBPSTF1_hit_tmin;   //!
   TBranch        *b_Earm_BBPSTF1_hit_tmax;   //!
   TBranch        *b_Earm_BBPSTF1_hit_otridx;   //!
   TBranch        *b_Earm_BBPSTF1_hit_ptridx;   //!
   TBranch        *b_Earm_BBPSTF1_hit_sdtridx;   //!
   TBranch        *b_Earm_BBSHTF1_det_esum;   //!
   TBranch        *b_Earm_BBSHTF1_hit_nhits;   //!
   TBranch        *b_Earm_BBSHTF1_hit_row;   //!
   TBranch        *b_Earm_BBSHTF1_hit_col;   //!
   TBranch        *b_Earm_BBSHTF1_hit_cell;   //!
   TBranch        *b_Earm_BBSHTF1_hit_plane;   //!
   TBranch        *b_Earm_BBSHTF1_hit_wire;   //!
   TBranch        *b_Earm_BBSHTF1_hit_xcell;   //!
   TBranch        *b_Earm_BBSHTF1_hit_ycell;   //!
   TBranch        *b_Earm_BBSHTF1_hit_zcell;   //!
   TBranch        *b_Earm_BBSHTF1_hit_xcellg;   //!
   TBranch        *b_Earm_BBSHTF1_hit_ycellg;   //!
   TBranch        *b_Earm_BBSHTF1_hit_zcellg;   //!
   TBranch        *b_Earm_BBSHTF1_hit_xhit;   //!
   TBranch        *b_Earm_BBSHTF1_hit_yhit;   //!
   TBranch        *b_Earm_BBSHTF1_hit_zhit;   //!
   TBranch        *b_Earm_BBSHTF1_hit_xhitg;   //!
   TBranch        *b_Earm_BBSHTF1_hit_yhitg;   //!
   TBranch        *b_Earm_BBSHTF1_hit_zhitg;   //!
   TBranch        *b_Earm_BBSHTF1_hit_sumedep;   //!
   TBranch        *b_Earm_BBSHTF1_hit_tavg;   //!
   TBranch        *b_Earm_BBSHTF1_hit_trms;   //!
   TBranch        *b_Earm_BBSHTF1_hit_tmin;   //!
   TBranch        *b_Earm_BBSHTF1_hit_tmax;   //!
   TBranch        *b_Earm_BBSHTF1_hit_otridx;   //!
   TBranch        *b_Earm_BBSHTF1_hit_ptridx;   //!
   TBranch        *b_Earm_BBSHTF1_hit_sdtridx;   //!
   TBranch        *b_Harm_HCalScint_det_esum;   //!
   TBranch        *b_Harm_HCalScint_hit_nhits;   //!
   TBranch        *b_Harm_HCalScint_hit_row;   //!
   TBranch        *b_Harm_HCalScint_hit_col;   //!
   TBranch        *b_Harm_HCalScint_hit_cell;   //!
   TBranch        *b_Harm_HCalScint_hit_plane;   //!
   TBranch        *b_Harm_HCalScint_hit_wire;   //!
   TBranch        *b_Harm_HCalScint_hit_xcell;   //!
   TBranch        *b_Harm_HCalScint_hit_ycell;   //!
   TBranch        *b_Harm_HCalScint_hit_zcell;   //!
   TBranch        *b_Harm_HCalScint_hit_xcellg;   //!
   TBranch        *b_Harm_HCalScint_hit_ycellg;   //!
   TBranch        *b_Harm_HCalScint_hit_zcellg;   //!
   TBranch        *b_Harm_HCalScint_hit_xhit;   //!
   TBranch        *b_Harm_HCalScint_hit_yhit;   //!
   TBranch        *b_Harm_HCalScint_hit_zhit;   //!
   TBranch        *b_Harm_HCalScint_hit_xhitg;   //!
   TBranch        *b_Harm_HCalScint_hit_yhitg;   //!
   TBranch        *b_Harm_HCalScint_hit_zhitg;   //!
   TBranch        *b_Harm_HCalScint_hit_sumedep;   //!
   TBranch        *b_Harm_HCalScint_hit_tavg;   //!
   TBranch        *b_Harm_HCalScint_hit_trms;   //!
   TBranch        *b_Harm_HCalScint_hit_tmin;   //!
   TBranch        *b_Harm_HCalScint_hit_tmax;   //!
   TBranch        *b_Harm_HCalScint_hit_otridx;   //!
   TBranch        *b_Harm_HCalScint_hit_ptridx;   //!
   TBranch        *b_Harm_HCalScint_hit_sdtridx;   //!
   TBranch        *b_OTrack_ntracks;   //!
   TBranch        *b_OTrack_TID;   //!
   TBranch        *b_OTrack_MID;   //!
   TBranch        *b_OTrack_PID;   //!
   TBranch        *b_OTrack_MPID;   //!
   TBranch        *b_OTrack_posx;   //!
   TBranch        *b_OTrack_posy;   //!
   TBranch        *b_OTrack_posz;   //!
   TBranch        *b_OTrack_momx;   //!
   TBranch        *b_OTrack_momy;   //!
   TBranch        *b_OTrack_momz;   //!
   TBranch        *b_OTrack_polx;   //!
   TBranch        *b_OTrack_poly;   //!
   TBranch        *b_OTrack_polz;   //!
   TBranch        *b_OTrack_Etot;   //!
   TBranch        *b_OTrack_T;   //!
   TBranch        *b_PTrack_ntracks;   //!
   TBranch        *b_PTrack_TID;   //!
   TBranch        *b_PTrack_PID;   //!
   TBranch        *b_PTrack_posx;   //!
   TBranch        *b_PTrack_posy;   //!
   TBranch        *b_PTrack_posz;   //!
   TBranch        *b_PTrack_momx;   //!
   TBranch        *b_PTrack_momy;   //!
   TBranch        *b_PTrack_momz;   //!
   TBranch        *b_PTrack_polx;   //!
   TBranch        *b_PTrack_poly;   //!
   TBranch        *b_PTrack_polz;   //!
   TBranch        *b_PTrack_Etot;   //!
   TBranch        *b_PTrack_T;   //!
   TBranch        *b_SDTrack_ntracks;   //!
   TBranch        *b_SDTrack_TID;   //!
   TBranch        *b_SDTrack_MID;   //!
   TBranch        *b_SDTrack_PID;   //!
   TBranch        *b_SDTrack_MPID;   //!
   TBranch        *b_SDTrack_posx;   //!
   TBranch        *b_SDTrack_posy;   //!
   TBranch        *b_SDTrack_posz;   //!
   TBranch        *b_SDTrack_momx;   //!
   TBranch        *b_SDTrack_momy;   //!
   TBranch        *b_SDTrack_momz;   //!
   TBranch        *b_SDTrack_polx;   //!
   TBranch        *b_SDTrack_poly;   //!
   TBranch        *b_SDTrack_polz;   //!
   TBranch        *b_SDTrack_Etot;   //!
   TBranch        *b_SDTrack_T;   //!
   TBranch        *b_SDTrack_vx;   //!
   TBranch        *b_SDTrack_vy;   //!
   TBranch        *b_SDTrack_vz;   //!
   TBranch        *b_SDTrack_vnx;   //!
   TBranch        *b_SDTrack_vny;   //!
   TBranch        *b_SDTrack_vnz;   //!
   TBranch        *b_SDTrack_vEkin;   //!
   TBranch        *b_primaries_Sigma;   //!
   TBranch        *b_primaries_Ebeam;   //!
   TBranch        *b_primaries_Eprime;   //!
   TBranch        *b_primaries_Q2;   //!
   TBranch        *b_primaries_xbj;   //!
   TBranch        *b_primaries_y;   //!
   TBranch        *b_primaries_W2;   //!
   TBranch        *b_primaries_theta_e;   //!
   TBranch        *b_primaries_phi_e;   //!
   TBranch        *b_primaries_px_e;   //!
   TBranch        *b_primaries_py_e;   //!
   TBranch        *b_primaries_pz_e;   //!
   TBranch        *b_primaries_vx_e;   //!
   TBranch        *b_primaries_vy_e;   //!
   TBranch        *b_primaries_vz_e;   //!
   TBranch        *b_primaries_Egamma;   //!
   TBranch        *b_primaries_theta_gamma;   //!
   TBranch        *b_primaries_phi_gamma;   //!
   TBranch        *b_primaries_px_gamma;   //!
   TBranch        *b_primaries_py_gamma;   //!
   TBranch        *b_primaries_pz_gamma;   //!
   TBranch        *b_primaries_vx_gamma;   //!
   TBranch        *b_primaries_vy_gamma;   //!
   TBranch        *b_primaries_vz_gamma;   //!
   TBranch        *b_Nprimaries;   //!
   TBranch        *b_Primaries_PID;   //!
   TBranch        *b_Primaries_genflag;   //!
   TBranch        *b_Primaries_Px;   //!
   TBranch        *b_Primaries_Py;   //!
   TBranch        *b_Primaries_Pz;   //!
   TBranch        *b_Primaries_vx;   //!
   TBranch        *b_Primaries_vy;   //!
   TBranch        *b_Primaries_vz;   //!
   TBranch        *b_Primaries_M;   //!
   TBranch        *b_Primaries_E;   //!
   TBranch        *b_Primaries_P;   //!
   TBranch        *b_Primaries_t;   //!
   TBranch        *b_Primaries_theta;   //!
   TBranch        *b_Primaries_phi;   //!

   gmn_pythia_tree(TTree *tree=0);
   virtual ~gmn_pythia_tree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef gmn_pythia_tree_cxx
gmn_pythia_tree::gmn_pythia_tree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("GMN_SBS9_PYTHIA_proton_job1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("GMN_SBS9_PYTHIA_proton_job1.root");
      }
      f->GetObject("T",tree);

   }
   Init(tree);
}

gmn_pythia_tree::~gmn_pythia_tree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t gmn_pythia_tree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t gmn_pythia_tree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void gmn_pythia_tree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Earm_BBGEM_hit_plane = 0;
   Earm_BBGEM_hit_strip = 0;
   Earm_BBGEM_hit_x = 0;
   Earm_BBGEM_hit_y = 0;
   Earm_BBGEM_hit_z = 0;
   Earm_BBGEM_hit_polx = 0;
   Earm_BBGEM_hit_poly = 0;
   Earm_BBGEM_hit_polz = 0;
   Earm_BBGEM_hit_t = 0;
   Earm_BBGEM_hit_trms = 0;
   Earm_BBGEM_hit_tmin = 0;
   Earm_BBGEM_hit_tmax = 0;
   Earm_BBGEM_hit_tx = 0;
   Earm_BBGEM_hit_ty = 0;
   Earm_BBGEM_hit_xin = 0;
   Earm_BBGEM_hit_yin = 0;
   Earm_BBGEM_hit_zin = 0;
   Earm_BBGEM_hit_xout = 0;
   Earm_BBGEM_hit_yout = 0;
   Earm_BBGEM_hit_zout = 0;
   Earm_BBGEM_hit_txp = 0;
   Earm_BBGEM_hit_typ = 0;
   Earm_BBGEM_hit_xg = 0;
   Earm_BBGEM_hit_yg = 0;
   Earm_BBGEM_hit_zg = 0;
   Earm_BBGEM_hit_trid = 0;
   Earm_BBGEM_hit_mid = 0;
   Earm_BBGEM_hit_pid = 0;
   Earm_BBGEM_hit_vx = 0;
   Earm_BBGEM_hit_vy = 0;
   Earm_BBGEM_hit_vz = 0;
   Earm_BBGEM_hit_p = 0;
   Earm_BBGEM_hit_edep = 0;
   Earm_BBGEM_hit_beta = 0;
   Earm_BBGEM_hit_otridx = 0;
   Earm_BBGEM_hit_ptridx = 0;
   Earm_BBGEM_hit_sdtridx = 0;
   Earm_BBGEM_Track_TID = 0;
   Earm_BBGEM_Track_PID = 0;
   Earm_BBGEM_Track_MID = 0;
   Earm_BBGEM_Track_NumHits = 0;
   Earm_BBGEM_Track_NumPlanes = 0;
   Earm_BBGEM_Track_NDF = 0;
   Earm_BBGEM_Track_Chi2fit = 0;
   Earm_BBGEM_Track_Chi2true = 0;
   Earm_BBGEM_Track_X = 0;
   Earm_BBGEM_Track_Y = 0;
   Earm_BBGEM_Track_Xp = 0;
   Earm_BBGEM_Track_Yp = 0;
   Earm_BBGEM_Track_T = 0;
   Earm_BBGEM_Track_P = 0;
   Earm_BBGEM_Track_Sx = 0;
   Earm_BBGEM_Track_Sy = 0;
   Earm_BBGEM_Track_Sz = 0;
   Earm_BBGEM_Track_Xfit = 0;
   Earm_BBGEM_Track_Yfit = 0;
   Earm_BBGEM_Track_Xpfit = 0;
   Earm_BBGEM_Track_Ypfit = 0;
   Earm_BBGEM_Track_otridx = 0;
   Earm_BBGEM_Track_ptridx = 0;
   Earm_BBGEM_Track_sdtridx = 0;
   Earm_BBHodoScint_hit_row = 0;
   Earm_BBHodoScint_hit_col = 0;
   Earm_BBHodoScint_hit_cell = 0;
   Earm_BBHodoScint_hit_plane = 0;
   Earm_BBHodoScint_hit_wire = 0;
   Earm_BBHodoScint_hit_xcell = 0;
   Earm_BBHodoScint_hit_ycell = 0;
   Earm_BBHodoScint_hit_zcell = 0;
   Earm_BBHodoScint_hit_xcellg = 0;
   Earm_BBHodoScint_hit_ycellg = 0;
   Earm_BBHodoScint_hit_zcellg = 0;
   Earm_BBHodoScint_hit_xhit = 0;
   Earm_BBHodoScint_hit_yhit = 0;
   Earm_BBHodoScint_hit_zhit = 0;
   Earm_BBHodoScint_hit_xhitg = 0;
   Earm_BBHodoScint_hit_yhitg = 0;
   Earm_BBHodoScint_hit_zhitg = 0;
   Earm_BBHodoScint_hit_sumedep = 0;
   Earm_BBHodoScint_hit_tavg = 0;
   Earm_BBHodoScint_hit_trms = 0;
   Earm_BBHodoScint_hit_tmin = 0;
   Earm_BBHodoScint_hit_tmax = 0;
   Earm_BBHodoScint_hit_otridx = 0;
   Earm_BBHodoScint_hit_ptridx = 0;
   Earm_BBHodoScint_hit_sdtridx = 0;
   Earm_BBPSTF1_hit_row = 0;
   Earm_BBPSTF1_hit_col = 0;
   Earm_BBPSTF1_hit_cell = 0;
   Earm_BBPSTF1_hit_plane = 0;
   Earm_BBPSTF1_hit_wire = 0;
   Earm_BBPSTF1_hit_xcell = 0;
   Earm_BBPSTF1_hit_ycell = 0;
   Earm_BBPSTF1_hit_zcell = 0;
   Earm_BBPSTF1_hit_xcellg = 0;
   Earm_BBPSTF1_hit_ycellg = 0;
   Earm_BBPSTF1_hit_zcellg = 0;
   Earm_BBPSTF1_hit_xhit = 0;
   Earm_BBPSTF1_hit_yhit = 0;
   Earm_BBPSTF1_hit_zhit = 0;
   Earm_BBPSTF1_hit_xhitg = 0;
   Earm_BBPSTF1_hit_yhitg = 0;
   Earm_BBPSTF1_hit_zhitg = 0;
   Earm_BBPSTF1_hit_sumedep = 0;
   Earm_BBPSTF1_hit_tavg = 0;
   Earm_BBPSTF1_hit_trms = 0;
   Earm_BBPSTF1_hit_tmin = 0;
   Earm_BBPSTF1_hit_tmax = 0;
   Earm_BBPSTF1_hit_otridx = 0;
   Earm_BBPSTF1_hit_ptridx = 0;
   Earm_BBPSTF1_hit_sdtridx = 0;
   Earm_BBSHTF1_hit_row = 0;
   Earm_BBSHTF1_hit_col = 0;
   Earm_BBSHTF1_hit_cell = 0;
   Earm_BBSHTF1_hit_plane = 0;
   Earm_BBSHTF1_hit_wire = 0;
   Earm_BBSHTF1_hit_xcell = 0;
   Earm_BBSHTF1_hit_ycell = 0;
   Earm_BBSHTF1_hit_zcell = 0;
   Earm_BBSHTF1_hit_xcellg = 0;
   Earm_BBSHTF1_hit_ycellg = 0;
   Earm_BBSHTF1_hit_zcellg = 0;
   Earm_BBSHTF1_hit_xhit = 0;
   Earm_BBSHTF1_hit_yhit = 0;
   Earm_BBSHTF1_hit_zhit = 0;
   Earm_BBSHTF1_hit_xhitg = 0;
   Earm_BBSHTF1_hit_yhitg = 0;
   Earm_BBSHTF1_hit_zhitg = 0;
   Earm_BBSHTF1_hit_sumedep = 0;
   Earm_BBSHTF1_hit_tavg = 0;
   Earm_BBSHTF1_hit_trms = 0;
   Earm_BBSHTF1_hit_tmin = 0;
   Earm_BBSHTF1_hit_tmax = 0;
   Earm_BBSHTF1_hit_otridx = 0;
   Earm_BBSHTF1_hit_ptridx = 0;
   Earm_BBSHTF1_hit_sdtridx = 0;
   Harm_HCalScint_hit_row = 0;
   Harm_HCalScint_hit_col = 0;
   Harm_HCalScint_hit_cell = 0;
   Harm_HCalScint_hit_plane = 0;
   Harm_HCalScint_hit_wire = 0;
   Harm_HCalScint_hit_xcell = 0;
   Harm_HCalScint_hit_ycell = 0;
   Harm_HCalScint_hit_zcell = 0;
   Harm_HCalScint_hit_xcellg = 0;
   Harm_HCalScint_hit_ycellg = 0;
   Harm_HCalScint_hit_zcellg = 0;
   Harm_HCalScint_hit_xhit = 0;
   Harm_HCalScint_hit_yhit = 0;
   Harm_HCalScint_hit_zhit = 0;
   Harm_HCalScint_hit_xhitg = 0;
   Harm_HCalScint_hit_yhitg = 0;
   Harm_HCalScint_hit_zhitg = 0;
   Harm_HCalScint_hit_sumedep = 0;
   Harm_HCalScint_hit_tavg = 0;
   Harm_HCalScint_hit_trms = 0;
   Harm_HCalScint_hit_tmin = 0;
   Harm_HCalScint_hit_tmax = 0;
   Harm_HCalScint_hit_otridx = 0;
   Harm_HCalScint_hit_ptridx = 0;
   Harm_HCalScint_hit_sdtridx = 0;
   OTrack_TID = 0;
   OTrack_MID = 0;
   OTrack_PID = 0;
   OTrack_MPID = 0;
   OTrack_posx = 0;
   OTrack_posy = 0;
   OTrack_posz = 0;
   OTrack_momx = 0;
   OTrack_momy = 0;
   OTrack_momz = 0;
   OTrack_polx = 0;
   OTrack_poly = 0;
   OTrack_polz = 0;
   OTrack_Etot = 0;
   OTrack_T = 0;
   PTrack_TID = 0;
   PTrack_PID = 0;
   PTrack_posx = 0;
   PTrack_posy = 0;
   PTrack_posz = 0;
   PTrack_momx = 0;
   PTrack_momy = 0;
   PTrack_momz = 0;
   PTrack_polx = 0;
   PTrack_poly = 0;
   PTrack_polz = 0;
   PTrack_Etot = 0;
   PTrack_T = 0;
   SDTrack_TID = 0;
   SDTrack_MID = 0;
   SDTrack_PID = 0;
   SDTrack_MPID = 0;
   SDTrack_posx = 0;
   SDTrack_posy = 0;
   SDTrack_posz = 0;
   SDTrack_momx = 0;
   SDTrack_momy = 0;
   SDTrack_momz = 0;
   SDTrack_polx = 0;
   SDTrack_poly = 0;
   SDTrack_polz = 0;
   SDTrack_Etot = 0;
   SDTrack_T = 0;
   SDTrack_vx = 0;
   SDTrack_vy = 0;
   SDTrack_vz = 0;
   SDTrack_vnx = 0;
   SDTrack_vny = 0;
   SDTrack_vnz = 0;
   SDTrack_vEkin = 0;
   Primaries_PID = 0;
   Primaries_genflag = 0;
   Primaries_Px = 0;
   Primaries_Py = 0;
   Primaries_Pz = 0;
   Primaries_vx = 0;
   Primaries_vy = 0;
   Primaries_vz = 0;
   Primaries_M = 0;
   Primaries_E = 0;
   Primaries_P = 0;
   Primaries_t = 0;
   Primaries_theta = 0;
   Primaries_phi = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("ev", &ev_count, &b_ev);
   fChain->SetBranchAddress("TargPol", &TargPol, &b_TargPol);
   fChain->SetBranchAddress("TargThetaSpin", &TargThetaSpin, &b_TargThetaSpin);
   fChain->SetBranchAddress("TargPhiSpin", &TargPhiSpin, &b_TargPhiSpin);
   fChain->SetBranchAddress("BeamPol", &BeamPol, &b_BeamPol);
   fChain->SetBranchAddress("BeamThetaSpin", &BeamThetaSpin, &b_BeamThetaSpin);
   fChain->SetBranchAddress("BeamPhiSpin", &BeamPhiSpin, &b_BeamPhiSpin);
   fChain->SetBranchAddress("Earm.BBGEM.hit.nhits", &Earm_BBGEM_hit_nhits, &b_Earm_BBGEM_hit_nhits);
   fChain->SetBranchAddress("Earm.BBGEM.hit.plane", &Earm_BBGEM_hit_plane, &b_Earm_BBGEM_hit_plane);
   fChain->SetBranchAddress("Earm.BBGEM.hit.strip", &Earm_BBGEM_hit_strip, &b_Earm_BBGEM_hit_strip);
   fChain->SetBranchAddress("Earm.BBGEM.hit.x", &Earm_BBGEM_hit_x, &b_Earm_BBGEM_hit_x);
   fChain->SetBranchAddress("Earm.BBGEM.hit.y", &Earm_BBGEM_hit_y, &b_Earm_BBGEM_hit_y);
   fChain->SetBranchAddress("Earm.BBGEM.hit.z", &Earm_BBGEM_hit_z, &b_Earm_BBGEM_hit_z);
   fChain->SetBranchAddress("Earm.BBGEM.hit.polx", &Earm_BBGEM_hit_polx, &b_Earm_BBGEM_hit_polx);
   fChain->SetBranchAddress("Earm.BBGEM.hit.poly", &Earm_BBGEM_hit_poly, &b_Earm_BBGEM_hit_poly);
   fChain->SetBranchAddress("Earm.BBGEM.hit.polz", &Earm_BBGEM_hit_polz, &b_Earm_BBGEM_hit_polz);
   fChain->SetBranchAddress("Earm.BBGEM.hit.t", &Earm_BBGEM_hit_t, &b_Earm_BBGEM_hit_t);
   fChain->SetBranchAddress("Earm.BBGEM.hit.trms", &Earm_BBGEM_hit_trms, &b_Earm_BBGEM_hit_trms);
   fChain->SetBranchAddress("Earm.BBGEM.hit.tmin", &Earm_BBGEM_hit_tmin, &b_Earm_BBGEM_hit_tmin);
   fChain->SetBranchAddress("Earm.BBGEM.hit.tmax", &Earm_BBGEM_hit_tmax, &b_Earm_BBGEM_hit_tmax);
   fChain->SetBranchAddress("Earm.BBGEM.hit.tx", &Earm_BBGEM_hit_tx, &b_Earm_BBGEM_hit_tx);
   fChain->SetBranchAddress("Earm.BBGEM.hit.ty", &Earm_BBGEM_hit_ty, &b_Earm_BBGEM_hit_ty);
   fChain->SetBranchAddress("Earm.BBGEM.hit.xin", &Earm_BBGEM_hit_xin, &b_Earm_BBGEM_hit_xin);
   fChain->SetBranchAddress("Earm.BBGEM.hit.yin", &Earm_BBGEM_hit_yin, &b_Earm_BBGEM_hit_yin);
   fChain->SetBranchAddress("Earm.BBGEM.hit.zin", &Earm_BBGEM_hit_zin, &b_Earm_BBGEM_hit_zin);
   fChain->SetBranchAddress("Earm.BBGEM.hit.xout", &Earm_BBGEM_hit_xout, &b_Earm_BBGEM_hit_xout);
   fChain->SetBranchAddress("Earm.BBGEM.hit.yout", &Earm_BBGEM_hit_yout, &b_Earm_BBGEM_hit_yout);
   fChain->SetBranchAddress("Earm.BBGEM.hit.zout", &Earm_BBGEM_hit_zout, &b_Earm_BBGEM_hit_zout);
   fChain->SetBranchAddress("Earm.BBGEM.hit.txp", &Earm_BBGEM_hit_txp, &b_Earm_BBGEM_hit_txp);
   fChain->SetBranchAddress("Earm.BBGEM.hit.typ", &Earm_BBGEM_hit_typ, &b_Earm_BBGEM_hit_typ);
   fChain->SetBranchAddress("Earm.BBGEM.hit.xg", &Earm_BBGEM_hit_xg, &b_Earm_BBGEM_hit_xg);
   fChain->SetBranchAddress("Earm.BBGEM.hit.yg", &Earm_BBGEM_hit_yg, &b_Earm_BBGEM_hit_yg);
   fChain->SetBranchAddress("Earm.BBGEM.hit.zg", &Earm_BBGEM_hit_zg, &b_Earm_BBGEM_hit_zg);
   fChain->SetBranchAddress("Earm.BBGEM.hit.trid", &Earm_BBGEM_hit_trid, &b_Earm_BBGEM_hit_trid);
   fChain->SetBranchAddress("Earm.BBGEM.hit.mid", &Earm_BBGEM_hit_mid, &b_Earm_BBGEM_hit_mid);
   fChain->SetBranchAddress("Earm.BBGEM.hit.pid", &Earm_BBGEM_hit_pid, &b_Earm_BBGEM_hit_pid);
   fChain->SetBranchAddress("Earm.BBGEM.hit.vx", &Earm_BBGEM_hit_vx, &b_Earm_BBGEM_hit_vx);
   fChain->SetBranchAddress("Earm.BBGEM.hit.vy", &Earm_BBGEM_hit_vy, &b_Earm_BBGEM_hit_vy);
   fChain->SetBranchAddress("Earm.BBGEM.hit.vz", &Earm_BBGEM_hit_vz, &b_Earm_BBGEM_hit_vz);
   fChain->SetBranchAddress("Earm.BBGEM.hit.p", &Earm_BBGEM_hit_p, &b_Earm_BBGEM_hit_p);
   fChain->SetBranchAddress("Earm.BBGEM.hit.edep", &Earm_BBGEM_hit_edep, &b_Earm_BBGEM_hit_edep);
   fChain->SetBranchAddress("Earm.BBGEM.hit.beta", &Earm_BBGEM_hit_beta, &b_Earm_BBGEM_hit_beta);
   fChain->SetBranchAddress("Earm.BBGEM.hit.otridx", &Earm_BBGEM_hit_otridx, &b_Earm_BBGEM_hit_otridx);
   fChain->SetBranchAddress("Earm.BBGEM.hit.ptridx", &Earm_BBGEM_hit_ptridx, &b_Earm_BBGEM_hit_ptridx);
   fChain->SetBranchAddress("Earm.BBGEM.hit.sdtridx", &Earm_BBGEM_hit_sdtridx, &b_Earm_BBGEM_hit_sdtridx);
   fChain->SetBranchAddress("Earm.BBGEM.Track.ntracks", &Earm_BBGEM_Track_ntracks, &b_Earm_BBGEM_Track_ntracks);
   fChain->SetBranchAddress("Earm.BBGEM.Track.TID", &Earm_BBGEM_Track_TID, &b_Earm_BBGEM_Track_TID);
   fChain->SetBranchAddress("Earm.BBGEM.Track.PID", &Earm_BBGEM_Track_PID, &b_Earm_BBGEM_Track_PID);
   fChain->SetBranchAddress("Earm.BBGEM.Track.MID", &Earm_BBGEM_Track_MID, &b_Earm_BBGEM_Track_MID);
   fChain->SetBranchAddress("Earm.BBGEM.Track.NumHits", &Earm_BBGEM_Track_NumHits, &b_Earm_BBGEM_Track_NumHits);
   fChain->SetBranchAddress("Earm.BBGEM.Track.NumPlanes", &Earm_BBGEM_Track_NumPlanes, &b_Earm_BBGEM_Track_NumPlanes);
   fChain->SetBranchAddress("Earm.BBGEM.Track.NDF", &Earm_BBGEM_Track_NDF, &b_Earm_BBGEM_Track_NDF);
   fChain->SetBranchAddress("Earm.BBGEM.Track.Chi2fit", &Earm_BBGEM_Track_Chi2fit, &b_Earm_BBGEM_Track_Chi2fit);
   fChain->SetBranchAddress("Earm.BBGEM.Track.Chi2true", &Earm_BBGEM_Track_Chi2true, &b_Earm_BBGEM_Track_Chi2true);
   fChain->SetBranchAddress("Earm.BBGEM.Track.X", &Earm_BBGEM_Track_X, &b_Earm_BBGEM_Track_X);
   fChain->SetBranchAddress("Earm.BBGEM.Track.Y", &Earm_BBGEM_Track_Y, &b_Earm_BBGEM_Track_Y);
   fChain->SetBranchAddress("Earm.BBGEM.Track.Xp", &Earm_BBGEM_Track_Xp, &b_Earm_BBGEM_Track_Xp);
   fChain->SetBranchAddress("Earm.BBGEM.Track.Yp", &Earm_BBGEM_Track_Yp, &b_Earm_BBGEM_Track_Yp);
   fChain->SetBranchAddress("Earm.BBGEM.Track.T", &Earm_BBGEM_Track_T, &b_Earm_BBGEM_Track_T);
   fChain->SetBranchAddress("Earm.BBGEM.Track.P", &Earm_BBGEM_Track_P, &b_Earm_BBGEM_Track_P);
   fChain->SetBranchAddress("Earm.BBGEM.Track.Sx", &Earm_BBGEM_Track_Sx, &b_Earm_BBGEM_Track_Sx);
   fChain->SetBranchAddress("Earm.BBGEM.Track.Sy", &Earm_BBGEM_Track_Sy, &b_Earm_BBGEM_Track_Sy);
   fChain->SetBranchAddress("Earm.BBGEM.Track.Sz", &Earm_BBGEM_Track_Sz, &b_Earm_BBGEM_Track_Sz);
   fChain->SetBranchAddress("Earm.BBGEM.Track.Xfit", &Earm_BBGEM_Track_Xfit, &b_Earm_BBGEM_Track_Xfit);
   fChain->SetBranchAddress("Earm.BBGEM.Track.Yfit", &Earm_BBGEM_Track_Yfit, &b_Earm_BBGEM_Track_Yfit);
   fChain->SetBranchAddress("Earm.BBGEM.Track.Xpfit", &Earm_BBGEM_Track_Xpfit, &b_Earm_BBGEM_Track_Xpfit);
   fChain->SetBranchAddress("Earm.BBGEM.Track.Ypfit", &Earm_BBGEM_Track_Ypfit, &b_Earm_BBGEM_Track_Ypfit);
   fChain->SetBranchAddress("Earm.BBGEM.Track.otridx", &Earm_BBGEM_Track_otridx, &b_Earm_BBGEM_Track_otridx);
   fChain->SetBranchAddress("Earm.BBGEM.Track.ptridx", &Earm_BBGEM_Track_ptridx, &b_Earm_BBGEM_Track_ptridx);
   fChain->SetBranchAddress("Earm.BBGEM.Track.sdtridx", &Earm_BBGEM_Track_sdtridx, &b_Earm_BBGEM_Track_sdtridx);
   fChain->SetBranchAddress("Earm.BBHodoScint.det.esum", &Earm_BBHodoScint_det_esum, &b_Earm_BBHodoScint_det_esum);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.nhits", &Earm_BBHodoScint_hit_nhits, &b_Earm_BBHodoScint_hit_nhits);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.row", &Earm_BBHodoScint_hit_row, &b_Earm_BBHodoScint_hit_row);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.col", &Earm_BBHodoScint_hit_col, &b_Earm_BBHodoScint_hit_col);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.cell", &Earm_BBHodoScint_hit_cell, &b_Earm_BBHodoScint_hit_cell);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.plane", &Earm_BBHodoScint_hit_plane, &b_Earm_BBHodoScint_hit_plane);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.wire", &Earm_BBHodoScint_hit_wire, &b_Earm_BBHodoScint_hit_wire);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.xcell", &Earm_BBHodoScint_hit_xcell, &b_Earm_BBHodoScint_hit_xcell);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.ycell", &Earm_BBHodoScint_hit_ycell, &b_Earm_BBHodoScint_hit_ycell);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.zcell", &Earm_BBHodoScint_hit_zcell, &b_Earm_BBHodoScint_hit_zcell);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.xcellg", &Earm_BBHodoScint_hit_xcellg, &b_Earm_BBHodoScint_hit_xcellg);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.ycellg", &Earm_BBHodoScint_hit_ycellg, &b_Earm_BBHodoScint_hit_ycellg);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.zcellg", &Earm_BBHodoScint_hit_zcellg, &b_Earm_BBHodoScint_hit_zcellg);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.xhit", &Earm_BBHodoScint_hit_xhit, &b_Earm_BBHodoScint_hit_xhit);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.yhit", &Earm_BBHodoScint_hit_yhit, &b_Earm_BBHodoScint_hit_yhit);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.zhit", &Earm_BBHodoScint_hit_zhit, &b_Earm_BBHodoScint_hit_zhit);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.xhitg", &Earm_BBHodoScint_hit_xhitg, &b_Earm_BBHodoScint_hit_xhitg);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.yhitg", &Earm_BBHodoScint_hit_yhitg, &b_Earm_BBHodoScint_hit_yhitg);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.zhitg", &Earm_BBHodoScint_hit_zhitg, &b_Earm_BBHodoScint_hit_zhitg);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.sumedep", &Earm_BBHodoScint_hit_sumedep, &b_Earm_BBHodoScint_hit_sumedep);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.tavg", &Earm_BBHodoScint_hit_tavg, &b_Earm_BBHodoScint_hit_tavg);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.trms", &Earm_BBHodoScint_hit_trms, &b_Earm_BBHodoScint_hit_trms);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.tmin", &Earm_BBHodoScint_hit_tmin, &b_Earm_BBHodoScint_hit_tmin);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.tmax", &Earm_BBHodoScint_hit_tmax, &b_Earm_BBHodoScint_hit_tmax);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.otridx", &Earm_BBHodoScint_hit_otridx, &b_Earm_BBHodoScint_hit_otridx);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.ptridx", &Earm_BBHodoScint_hit_ptridx, &b_Earm_BBHodoScint_hit_ptridx);
   fChain->SetBranchAddress("Earm.BBHodoScint.hit.sdtridx", &Earm_BBHodoScint_hit_sdtridx, &b_Earm_BBHodoScint_hit_sdtridx);
   fChain->SetBranchAddress("Earm.BBPSTF1.det.esum", &Earm_BBPSTF1_det_esum, &b_Earm_BBPSTF1_det_esum);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.nhits", &Earm_BBPSTF1_hit_nhits, &b_Earm_BBPSTF1_hit_nhits);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.row", &Earm_BBPSTF1_hit_row, &b_Earm_BBPSTF1_hit_row);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.col", &Earm_BBPSTF1_hit_col, &b_Earm_BBPSTF1_hit_col);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.cell", &Earm_BBPSTF1_hit_cell, &b_Earm_BBPSTF1_hit_cell);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.plane", &Earm_BBPSTF1_hit_plane, &b_Earm_BBPSTF1_hit_plane);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.wire", &Earm_BBPSTF1_hit_wire, &b_Earm_BBPSTF1_hit_wire);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.xcell", &Earm_BBPSTF1_hit_xcell, &b_Earm_BBPSTF1_hit_xcell);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.ycell", &Earm_BBPSTF1_hit_ycell, &b_Earm_BBPSTF1_hit_ycell);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.zcell", &Earm_BBPSTF1_hit_zcell, &b_Earm_BBPSTF1_hit_zcell);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.xcellg", &Earm_BBPSTF1_hit_xcellg, &b_Earm_BBPSTF1_hit_xcellg);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.ycellg", &Earm_BBPSTF1_hit_ycellg, &b_Earm_BBPSTF1_hit_ycellg);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.zcellg", &Earm_BBPSTF1_hit_zcellg, &b_Earm_BBPSTF1_hit_zcellg);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.xhit", &Earm_BBPSTF1_hit_xhit, &b_Earm_BBPSTF1_hit_xhit);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.yhit", &Earm_BBPSTF1_hit_yhit, &b_Earm_BBPSTF1_hit_yhit);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.zhit", &Earm_BBPSTF1_hit_zhit, &b_Earm_BBPSTF1_hit_zhit);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.xhitg", &Earm_BBPSTF1_hit_xhitg, &b_Earm_BBPSTF1_hit_xhitg);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.yhitg", &Earm_BBPSTF1_hit_yhitg, &b_Earm_BBPSTF1_hit_yhitg);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.zhitg", &Earm_BBPSTF1_hit_zhitg, &b_Earm_BBPSTF1_hit_zhitg);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.sumedep", &Earm_BBPSTF1_hit_sumedep, &b_Earm_BBPSTF1_hit_sumedep);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.tavg", &Earm_BBPSTF1_hit_tavg, &b_Earm_BBPSTF1_hit_tavg);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.trms", &Earm_BBPSTF1_hit_trms, &b_Earm_BBPSTF1_hit_trms);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.tmin", &Earm_BBPSTF1_hit_tmin, &b_Earm_BBPSTF1_hit_tmin);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.tmax", &Earm_BBPSTF1_hit_tmax, &b_Earm_BBPSTF1_hit_tmax);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.otridx", &Earm_BBPSTF1_hit_otridx, &b_Earm_BBPSTF1_hit_otridx);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.ptridx", &Earm_BBPSTF1_hit_ptridx, &b_Earm_BBPSTF1_hit_ptridx);
   fChain->SetBranchAddress("Earm.BBPSTF1.hit.sdtridx", &Earm_BBPSTF1_hit_sdtridx, &b_Earm_BBPSTF1_hit_sdtridx);
   fChain->SetBranchAddress("Earm.BBSHTF1.det.esum", &Earm_BBSHTF1_det_esum, &b_Earm_BBSHTF1_det_esum);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.nhits", &Earm_BBSHTF1_hit_nhits, &b_Earm_BBSHTF1_hit_nhits);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.row", &Earm_BBSHTF1_hit_row, &b_Earm_BBSHTF1_hit_row);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.col", &Earm_BBSHTF1_hit_col, &b_Earm_BBSHTF1_hit_col);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.cell", &Earm_BBSHTF1_hit_cell, &b_Earm_BBSHTF1_hit_cell);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.plane", &Earm_BBSHTF1_hit_plane, &b_Earm_BBSHTF1_hit_plane);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.wire", &Earm_BBSHTF1_hit_wire, &b_Earm_BBSHTF1_hit_wire);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.xcell", &Earm_BBSHTF1_hit_xcell, &b_Earm_BBSHTF1_hit_xcell);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.ycell", &Earm_BBSHTF1_hit_ycell, &b_Earm_BBSHTF1_hit_ycell);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.zcell", &Earm_BBSHTF1_hit_zcell, &b_Earm_BBSHTF1_hit_zcell);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.xcellg", &Earm_BBSHTF1_hit_xcellg, &b_Earm_BBSHTF1_hit_xcellg);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.ycellg", &Earm_BBSHTF1_hit_ycellg, &b_Earm_BBSHTF1_hit_ycellg);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.zcellg", &Earm_BBSHTF1_hit_zcellg, &b_Earm_BBSHTF1_hit_zcellg);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.xhit", &Earm_BBSHTF1_hit_xhit, &b_Earm_BBSHTF1_hit_xhit);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.yhit", &Earm_BBSHTF1_hit_yhit, &b_Earm_BBSHTF1_hit_yhit);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.zhit", &Earm_BBSHTF1_hit_zhit, &b_Earm_BBSHTF1_hit_zhit);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.xhitg", &Earm_BBSHTF1_hit_xhitg, &b_Earm_BBSHTF1_hit_xhitg);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.yhitg", &Earm_BBSHTF1_hit_yhitg, &b_Earm_BBSHTF1_hit_yhitg);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.zhitg", &Earm_BBSHTF1_hit_zhitg, &b_Earm_BBSHTF1_hit_zhitg);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.sumedep", &Earm_BBSHTF1_hit_sumedep, &b_Earm_BBSHTF1_hit_sumedep);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.tavg", &Earm_BBSHTF1_hit_tavg, &b_Earm_BBSHTF1_hit_tavg);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.trms", &Earm_BBSHTF1_hit_trms, &b_Earm_BBSHTF1_hit_trms);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.tmin", &Earm_BBSHTF1_hit_tmin, &b_Earm_BBSHTF1_hit_tmin);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.tmax", &Earm_BBSHTF1_hit_tmax, &b_Earm_BBSHTF1_hit_tmax);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.otridx", &Earm_BBSHTF1_hit_otridx, &b_Earm_BBSHTF1_hit_otridx);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.ptridx", &Earm_BBSHTF1_hit_ptridx, &b_Earm_BBSHTF1_hit_ptridx);
   fChain->SetBranchAddress("Earm.BBSHTF1.hit.sdtridx", &Earm_BBSHTF1_hit_sdtridx, &b_Earm_BBSHTF1_hit_sdtridx);
   fChain->SetBranchAddress("Harm.HCalScint.det.esum", &Harm_HCalScint_det_esum, &b_Harm_HCalScint_det_esum);
   fChain->SetBranchAddress("Harm.HCalScint.hit.nhits", &Harm_HCalScint_hit_nhits, &b_Harm_HCalScint_hit_nhits);
   fChain->SetBranchAddress("Harm.HCalScint.hit.row", &Harm_HCalScint_hit_row, &b_Harm_HCalScint_hit_row);
   fChain->SetBranchAddress("Harm.HCalScint.hit.col", &Harm_HCalScint_hit_col, &b_Harm_HCalScint_hit_col);
   fChain->SetBranchAddress("Harm.HCalScint.hit.cell", &Harm_HCalScint_hit_cell, &b_Harm_HCalScint_hit_cell);
   fChain->SetBranchAddress("Harm.HCalScint.hit.plane", &Harm_HCalScint_hit_plane, &b_Harm_HCalScint_hit_plane);
   fChain->SetBranchAddress("Harm.HCalScint.hit.wire", &Harm_HCalScint_hit_wire, &b_Harm_HCalScint_hit_wire);
   fChain->SetBranchAddress("Harm.HCalScint.hit.xcell", &Harm_HCalScint_hit_xcell, &b_Harm_HCalScint_hit_xcell);
   fChain->SetBranchAddress("Harm.HCalScint.hit.ycell", &Harm_HCalScint_hit_ycell, &b_Harm_HCalScint_hit_ycell);
   fChain->SetBranchAddress("Harm.HCalScint.hit.zcell", &Harm_HCalScint_hit_zcell, &b_Harm_HCalScint_hit_zcell);
   fChain->SetBranchAddress("Harm.HCalScint.hit.xcellg", &Harm_HCalScint_hit_xcellg, &b_Harm_HCalScint_hit_xcellg);
   fChain->SetBranchAddress("Harm.HCalScint.hit.ycellg", &Harm_HCalScint_hit_ycellg, &b_Harm_HCalScint_hit_ycellg);
   fChain->SetBranchAddress("Harm.HCalScint.hit.zcellg", &Harm_HCalScint_hit_zcellg, &b_Harm_HCalScint_hit_zcellg);
   fChain->SetBranchAddress("Harm.HCalScint.hit.xhit", &Harm_HCalScint_hit_xhit, &b_Harm_HCalScint_hit_xhit);
   fChain->SetBranchAddress("Harm.HCalScint.hit.yhit", &Harm_HCalScint_hit_yhit, &b_Harm_HCalScint_hit_yhit);
   fChain->SetBranchAddress("Harm.HCalScint.hit.zhit", &Harm_HCalScint_hit_zhit, &b_Harm_HCalScint_hit_zhit);
   fChain->SetBranchAddress("Harm.HCalScint.hit.xhitg", &Harm_HCalScint_hit_xhitg, &b_Harm_HCalScint_hit_xhitg);
   fChain->SetBranchAddress("Harm.HCalScint.hit.yhitg", &Harm_HCalScint_hit_yhitg, &b_Harm_HCalScint_hit_yhitg);
   fChain->SetBranchAddress("Harm.HCalScint.hit.zhitg", &Harm_HCalScint_hit_zhitg, &b_Harm_HCalScint_hit_zhitg);
   fChain->SetBranchAddress("Harm.HCalScint.hit.sumedep", &Harm_HCalScint_hit_sumedep, &b_Harm_HCalScint_hit_sumedep);
   fChain->SetBranchAddress("Harm.HCalScint.hit.tavg", &Harm_HCalScint_hit_tavg, &b_Harm_HCalScint_hit_tavg);
   fChain->SetBranchAddress("Harm.HCalScint.hit.trms", &Harm_HCalScint_hit_trms, &b_Harm_HCalScint_hit_trms);
   fChain->SetBranchAddress("Harm.HCalScint.hit.tmin", &Harm_HCalScint_hit_tmin, &b_Harm_HCalScint_hit_tmin);
   fChain->SetBranchAddress("Harm.HCalScint.hit.tmax", &Harm_HCalScint_hit_tmax, &b_Harm_HCalScint_hit_tmax);
   fChain->SetBranchAddress("Harm.HCalScint.hit.otridx", &Harm_HCalScint_hit_otridx, &b_Harm_HCalScint_hit_otridx);
   fChain->SetBranchAddress("Harm.HCalScint.hit.ptridx", &Harm_HCalScint_hit_ptridx, &b_Harm_HCalScint_hit_ptridx);
   fChain->SetBranchAddress("Harm.HCalScint.hit.sdtridx", &Harm_HCalScint_hit_sdtridx, &b_Harm_HCalScint_hit_sdtridx);
   fChain->SetBranchAddress("OTrack.ntracks", &OTrack_ntracks, &b_OTrack_ntracks);
   fChain->SetBranchAddress("OTrack.TID", &OTrack_TID, &b_OTrack_TID);
   fChain->SetBranchAddress("OTrack.MID", &OTrack_MID, &b_OTrack_MID);
   fChain->SetBranchAddress("OTrack.PID", &OTrack_PID, &b_OTrack_PID);
   fChain->SetBranchAddress("OTrack.MPID", &OTrack_MPID, &b_OTrack_MPID);
   fChain->SetBranchAddress("OTrack.posx", &OTrack_posx, &b_OTrack_posx);
   fChain->SetBranchAddress("OTrack.posy", &OTrack_posy, &b_OTrack_posy);
   fChain->SetBranchAddress("OTrack.posz", &OTrack_posz, &b_OTrack_posz);
   fChain->SetBranchAddress("OTrack.momx", &OTrack_momx, &b_OTrack_momx);
   fChain->SetBranchAddress("OTrack.momy", &OTrack_momy, &b_OTrack_momy);
   fChain->SetBranchAddress("OTrack.momz", &OTrack_momz, &b_OTrack_momz);
   fChain->SetBranchAddress("OTrack.polx", &OTrack_polx, &b_OTrack_polx);
   fChain->SetBranchAddress("OTrack.poly", &OTrack_poly, &b_OTrack_poly);
   fChain->SetBranchAddress("OTrack.polz", &OTrack_polz, &b_OTrack_polz);
   fChain->SetBranchAddress("OTrack.Etot", &OTrack_Etot, &b_OTrack_Etot);
   fChain->SetBranchAddress("OTrack.T", &OTrack_T, &b_OTrack_T);
   fChain->SetBranchAddress("PTrack.ntracks", &PTrack_ntracks, &b_PTrack_ntracks);
   fChain->SetBranchAddress("PTrack.TID", &PTrack_TID, &b_PTrack_TID);
   fChain->SetBranchAddress("PTrack.PID", &PTrack_PID, &b_PTrack_PID);
   fChain->SetBranchAddress("PTrack.posx", &PTrack_posx, &b_PTrack_posx);
   fChain->SetBranchAddress("PTrack.posy", &PTrack_posy, &b_PTrack_posy);
   fChain->SetBranchAddress("PTrack.posz", &PTrack_posz, &b_PTrack_posz);
   fChain->SetBranchAddress("PTrack.momx", &PTrack_momx, &b_PTrack_momx);
   fChain->SetBranchAddress("PTrack.momy", &PTrack_momy, &b_PTrack_momy);
   fChain->SetBranchAddress("PTrack.momz", &PTrack_momz, &b_PTrack_momz);
   fChain->SetBranchAddress("PTrack.polx", &PTrack_polx, &b_PTrack_polx);
   fChain->SetBranchAddress("PTrack.poly", &PTrack_poly, &b_PTrack_poly);
   fChain->SetBranchAddress("PTrack.polz", &PTrack_polz, &b_PTrack_polz);
   fChain->SetBranchAddress("PTrack.Etot", &PTrack_Etot, &b_PTrack_Etot);
   fChain->SetBranchAddress("PTrack.T", &PTrack_T, &b_PTrack_T);
   fChain->SetBranchAddress("SDTrack.ntracks", &SDTrack_ntracks, &b_SDTrack_ntracks);
   fChain->SetBranchAddress("SDTrack.TID", &SDTrack_TID, &b_SDTrack_TID);
   fChain->SetBranchAddress("SDTrack.MID", &SDTrack_MID, &b_SDTrack_MID);
   fChain->SetBranchAddress("SDTrack.PID", &SDTrack_PID, &b_SDTrack_PID);
   fChain->SetBranchAddress("SDTrack.MPID", &SDTrack_MPID, &b_SDTrack_MPID);
   fChain->SetBranchAddress("SDTrack.posx", &SDTrack_posx, &b_SDTrack_posx);
   fChain->SetBranchAddress("SDTrack.posy", &SDTrack_posy, &b_SDTrack_posy);
   fChain->SetBranchAddress("SDTrack.posz", &SDTrack_posz, &b_SDTrack_posz);
   fChain->SetBranchAddress("SDTrack.momx", &SDTrack_momx, &b_SDTrack_momx);
   fChain->SetBranchAddress("SDTrack.momy", &SDTrack_momy, &b_SDTrack_momy);
   fChain->SetBranchAddress("SDTrack.momz", &SDTrack_momz, &b_SDTrack_momz);
   fChain->SetBranchAddress("SDTrack.polx", &SDTrack_polx, &b_SDTrack_polx);
   fChain->SetBranchAddress("SDTrack.poly", &SDTrack_poly, &b_SDTrack_poly);
   fChain->SetBranchAddress("SDTrack.polz", &SDTrack_polz, &b_SDTrack_polz);
   fChain->SetBranchAddress("SDTrack.Etot", &SDTrack_Etot, &b_SDTrack_Etot);
   fChain->SetBranchAddress("SDTrack.T", &SDTrack_T, &b_SDTrack_T);
   fChain->SetBranchAddress("SDTrack.vx", &SDTrack_vx, &b_SDTrack_vx);
   fChain->SetBranchAddress("SDTrack.vy", &SDTrack_vy, &b_SDTrack_vy);
   fChain->SetBranchAddress("SDTrack.vz", &SDTrack_vz, &b_SDTrack_vz);
   fChain->SetBranchAddress("SDTrack.vnx", &SDTrack_vnx, &b_SDTrack_vnx);
   fChain->SetBranchAddress("SDTrack.vny", &SDTrack_vny, &b_SDTrack_vny);
   fChain->SetBranchAddress("SDTrack.vnz", &SDTrack_vnz, &b_SDTrack_vnz);
   fChain->SetBranchAddress("SDTrack.vEkin", &SDTrack_vEkin, &b_SDTrack_vEkin);
   fChain->SetBranchAddress("primaries.Sigma", &primaries_Sigma, &b_primaries_Sigma);
   fChain->SetBranchAddress("primaries.Ebeam", &primaries_Ebeam, &b_primaries_Ebeam);
   fChain->SetBranchAddress("primaries.Eprime", &primaries_Eprime, &b_primaries_Eprime);
   fChain->SetBranchAddress("primaries.Q2", &primaries_Q2, &b_primaries_Q2);
   fChain->SetBranchAddress("primaries.xbj", &primaries_xbj, &b_primaries_xbj);
   fChain->SetBranchAddress("primaries.y", &primaries_y, &b_primaries_y);
   fChain->SetBranchAddress("primaries.W2", &primaries_W2, &b_primaries_W2);
   fChain->SetBranchAddress("primaries.theta_e", &primaries_theta_e, &b_primaries_theta_e);
   fChain->SetBranchAddress("primaries.phi_e", &primaries_phi_e, &b_primaries_phi_e);
   fChain->SetBranchAddress("primaries.px_e", &primaries_px_e, &b_primaries_px_e);
   fChain->SetBranchAddress("primaries.py_e", &primaries_py_e, &b_primaries_py_e);
   fChain->SetBranchAddress("primaries.pz_e", &primaries_pz_e, &b_primaries_pz_e);
   fChain->SetBranchAddress("primaries.vx_e", &primaries_vx_e, &b_primaries_vx_e);
   fChain->SetBranchAddress("primaries.vy_e", &primaries_vy_e, &b_primaries_vy_e);
   fChain->SetBranchAddress("primaries.vz_e", &primaries_vz_e, &b_primaries_vz_e);
   fChain->SetBranchAddress("primaries.Egamma", &primaries_Egamma, &b_primaries_Egamma);
   fChain->SetBranchAddress("primaries.theta_gamma", &primaries_theta_gamma, &b_primaries_theta_gamma);
   fChain->SetBranchAddress("primaries.phi_gamma", &primaries_phi_gamma, &b_primaries_phi_gamma);
   fChain->SetBranchAddress("primaries.px_gamma", &primaries_px_gamma, &b_primaries_px_gamma);
   fChain->SetBranchAddress("primaries.py_gamma", &primaries_py_gamma, &b_primaries_py_gamma);
   fChain->SetBranchAddress("primaries.pz_gamma", &primaries_pz_gamma, &b_primaries_pz_gamma);
   fChain->SetBranchAddress("primaries.vx_gamma", &primaries_vx_gamma, &b_primaries_vx_gamma);
   fChain->SetBranchAddress("primaries.vy_gamma", &primaries_vy_gamma, &b_primaries_vy_gamma);
   fChain->SetBranchAddress("primaries.vz_gamma", &primaries_vz_gamma, &b_primaries_vz_gamma);
   fChain->SetBranchAddress("Primaries.Nprimaries", &Primaries_Nprimaries, &b_Nprimaries);
   fChain->SetBranchAddress("Primaries.PID", &Primaries_PID, &b_Primaries_PID);
   fChain->SetBranchAddress("Primaries.genflag", &Primaries_genflag, &b_Primaries_genflag);
   fChain->SetBranchAddress("Primaries.Px", &Primaries_Px, &b_Primaries_Px);
   fChain->SetBranchAddress("Primaries.Py", &Primaries_Py, &b_Primaries_Py);
   fChain->SetBranchAddress("Primaries.Pz", &Primaries_Pz, &b_Primaries_Pz);
   fChain->SetBranchAddress("Primaries.vx", &Primaries_vx, &b_Primaries_vx);
   fChain->SetBranchAddress("Primaries.vy", &Primaries_vy, &b_Primaries_vy);
   fChain->SetBranchAddress("Primaries.vz", &Primaries_vz, &b_Primaries_vz);
   fChain->SetBranchAddress("Primaries.M", &Primaries_M, &b_Primaries_M);
   fChain->SetBranchAddress("Primaries.E", &Primaries_E, &b_Primaries_E);
   fChain->SetBranchAddress("Primaries.P", &Primaries_P, &b_Primaries_P);
   fChain->SetBranchAddress("Primaries.t", &Primaries_t, &b_Primaries_t);
   fChain->SetBranchAddress("Primaries.theta", &Primaries_theta, &b_Primaries_theta);
   fChain->SetBranchAddress("Primaries.phi", &Primaries_phi, &b_Primaries_phi);
   Notify();
}

Bool_t gmn_pythia_tree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void gmn_pythia_tree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t gmn_pythia_tree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef gmn_pythia_tree_cxx
