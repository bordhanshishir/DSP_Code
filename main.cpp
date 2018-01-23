/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: shishir19531
 *
 * Created on January 23, 2018, 3:03 PM
 */

#include <cstdlib>
#include <iostream>
#include "ConvolutionIS.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int h[5] = {0, 1, -1, 0, 0};
    int x[20] = {0, 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 -1, -2, -3, -4, -5, -4, -3, -2, -1};
    int *y ;
    int n = sizeof(x)/sizeof(x[0]); // input signal size
    int m = sizeof(h)/sizeof(h[0]); // response signal size
    int o = n + m - 1; // output signal size
    std::cout << n << " " << m << " "<< o <<std::endl;
    ConvolutionIS conv;
    
    y = conv.convolution(x, h);
    for(int i = 0; i <24; i++){
        cout << y[i] << endl;
    }
    cout << y << endl;

    return 0;
}

