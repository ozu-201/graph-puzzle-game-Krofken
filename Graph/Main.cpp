//
// Created by to024376 on 12/14/2023.
//
#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream dict ("shopping_list.txt");
    std::string zort;

    if (dict.is_open()){
        while (dict){
            std::getline(dict,zort);
        }
    }



    return 0;}
