/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConvolutionIS.cpp
 * Author: shishir19531
 * 
 * Created on January 23, 2018, 3:05 PM
 */

#include "ConvolutionIS.h"
#include <iostream>

ConvolutionIS::ConvolutionIS() {
}

ConvolutionIS::ConvolutionIS(const ConvolutionIS& orig) {
}

ConvolutionIS::~ConvolutionIS() {
}

int * ConvolutionIS::convolution(int * input, int * response){
    int n = sizeof(input)/sizeof(input[0]); // input signal size
    int m = sizeof(input)/sizeof(input[0]); // response signal size
    int o = n + m - 1; // output signal size
    std::cout << n << " " << m << " "<< o <<std::endl;
    /*int output[o];
    for(int i = 0; i < o; i++){
        for(int j = 0; j< m; m++){
            output[i+j] = output[i+j] + input[i+j]*output[j];
        }
    }
    return output;*/
    return 0;
}