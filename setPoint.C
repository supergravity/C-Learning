#include <iostream>
#include "TGraph2D.h"
#include "TCanvas.h"
#include "TRandom.h"
#include <stdlib.h>

using namespace std;

int  main()
{
    TCanvas* c = new TCanvas("canv", "graph", 0,0,600,400);
    double x, y, z, P = 6.;
    double radius = 64;
    int np = 200;
    TRandom* r = new TRandom();
    TGraph2D* dt = new TGraph2D();
    for(int i=0;i<np;++i)
    {
        double ratio = r->Uniform(1.);
        x = 2*radius*ratio - radius;
        y = 2*radius*ratio - radius;
        z = x*x+y*y;
        dt->SetPoint(i, x, y, z);
    }
    dt->Draw("surf1");
}

