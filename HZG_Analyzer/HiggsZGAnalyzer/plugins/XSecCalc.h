#ifndef XSECCALC_HH
#define XSECCALC_HH
#define STANDALONE

#include "TLorentzVector.h"
#include "TEvtProb.hh"


void XSecCalc(TVar::Process, TVar::Production, const hzgamma_event_type, TVar::VerbosityLevel);
