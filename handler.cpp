#include "cheats.hpp"

void handler(istream& input, ostream& output);

void handler(istream& input, ostream& output)
{
    //write code here
    cout <<"Hello World" <<endl;
}


int main()
{
    string inputdir = "input/";
    string outputdir = "output/";
    vector<string> IO_data({"level1_example", "level1_1", "level1_2", "level1_3", "level1_4", "level1_5"});
    for(string& io : IO_data)
    {
        time_t t0 = clock();
        ifstream ifile = iopen(inputdir + io + ".in");
        ofstream ofile = oopen(outputdir + io + ".out");
        clog << "Calculating File \""+inputdir+io+"\"...\n";
        handler(ifile, ofile);
        clog << "done in " << clock()-t0 << "\n\n";
        ifile.close();
        ofile.close();
    }
    return 0;
}