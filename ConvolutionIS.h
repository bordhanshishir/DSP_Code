/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConvolutionIS.h
 * Author: shishir19531
 *
 * Created on January 23, 2018, 3:05 PM
 */

#ifndef CONVOLUTIONIS_H
#define CONVOLUTIONIS_H

class ConvolutionIS {
public:
    ConvolutionIS();
    ConvolutionIS(const ConvolutionIS& orig);
    virtual ~ConvolutionIS();
    int * convolution(int * input, int * response);
private:

};

#endif /* CONVOLUTIONIS_H */

