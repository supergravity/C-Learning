#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    ifstream input_file;
    int var[8];

    input_file.open("example_numbers_3.txt",ios::in);
    for (int i  = 0; i < 8; i++)
    {
        input_file >> var[i];
    }
    for (int i  = 0; i < 8; i++)
    {
        cout << var[i]<<" ";
    }
    cout <<endl;
    input_file.close();
    return 0;

}
