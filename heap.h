//
// Created by Ivan Mamani on 10/10/2019.
//

#ifndef CS1103_PC2_201902_HEAP_H
#define CS1103_PC2_201902_HEAP_H


#include <iostream>
#include <vector>
#include <deque>
#include <fstream>
#include <sstream>
#include <string>

std::ifstream filename("data.txt",std::ios::in);


bool getFileContent(std::string fileName, std::vector<std::string> & vecOfStrs)
{

    std::ifstream in(fileName.c_str());

    if(!in)
    {
        std::cerr << "Cannot open the File : "<<fileName<<std::endl;
        return false;
    }

    std::string str;
    while (std::getline(in, str))
    {
        if(str.size() > 0)
            vecOfStrs.push_back(str);
    }
    in.close();
    return true;
}

#endif //CS1103_PC2_201902_HEAP_H
