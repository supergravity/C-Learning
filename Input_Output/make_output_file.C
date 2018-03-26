//basic file operation 

#include <iostream>
#include <fstream> // why do we have to include fstream if we already have iostream

using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("example_numbers_3.txt");
    myfile << "5 3"<<endl<<"3 4 5 6 7"<<endl<<"8 9"<<endl<<"10 11"<<endl<<"12 13"<<endl;// what does "<<" do ? 
    myfile.close();
    return 0;
}
