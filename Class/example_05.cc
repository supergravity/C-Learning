//File:Struct example code 05 
//Purpose: struct with Initialization 
//Date:12/10/17 
//Author:Tzu-Lu Lin
//

#include <iostream>

using namespace std;

struct Particle 
{
    string particle_ID;
    string interaction;
    double inv_mass;
    double px;
    double py;
    double pz;

};


int main ()
{
    Particle electron = {"electron","EM",0.5,30,40,50};//Initialization
    Particle pion     = {"pion+","Strong",139.57,40,30,45}   ;//Initialization
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"particle_ID\t interaction\t inv_mass \t px \t py \t pz \n"<<endl;
    cout<<electron.particle_ID<<'\t';
    cout<<electron.interaction<<'\t';
    cout<<electron.inv_mass<<'\t';
    cout<<electron.px<<'\t';
    cout<<electron.py<<'\t';
    cout<<electron.pz<<'\n';
    
    cout<<pion.particle_ID<<'\t';
    cout<<pion.interaction<<'\t';
    cout<<pion.inv_mass<<'\t';
    cout<<pion.px<<'\t';
    cout<<pion.py<<'\t';
    cout<<pion.pz<<'\n';

    return 0;

}
