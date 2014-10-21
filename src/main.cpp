#include <cstdio>

#include <string>
#include <iostream>

#include "example.h"

#include "gff.h"


int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;
    std::cout << sq(3.0) << std::endl;
    GffReader gff_reader;
    const std::string fname = "/Users/hjp/lmcb/intron-retention/src/tests/inputs/refGene_07.23.2014_CHL1.gtf";
    FILE* fhandle = fopen(fname.c_str(), "r");
    gff_reader.init(fhandle, true);

    std::cout << "here!" << std::endl;

    gff_reader.readAll();

    std::cout << "there!" << std::endl;

    fclose(fhandle);

    return 0;
}
