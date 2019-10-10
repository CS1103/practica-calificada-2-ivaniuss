#include <iostream>
#include <fstream>
#include "heap.h"
#include "max_heap.h"
using namespace std;


int main()
{
// leer archivo

    std::vector<std::string> vecOfStr;

    bool result = getFileContent("data.txt", vecOfStr);

    if(result)
    {
        // Print the vector contents
        for(std::string & line : vecOfStr)
            std::cout<<line<<std::endl;
    }
/*
    max_heap<int> h;

    h.insert(10);
    h.insert(20);
    h.insert(40);
    h.insert(50);
    h.insert(10);
/*
    cout << "heap" << endl;
    std::cout << h;
    cout << "heap" << endl;
    cout << h;
    cin >> h;
    cout << "heap" << endl;
    cout << h;
    insert(h, 100, 200);
    cout << "heap" << endl;
    cout << h;
    load_from("data.txt", h);
    cout << h;

 */
    return 0;


 }


