//basic file operation 

#include <iostream>
#include <fstream> // why do we have to include fstream if we already have iostream

using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("example.txt");
    myfile << "Writing this to a file";// what does "<<" do ? 
    myfile.close();
    return 0;
}
