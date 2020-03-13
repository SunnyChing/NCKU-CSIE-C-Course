//lab2
//  BMI.cpp
//  
//
//  Created by ching on 2016/3/16.
//
//

#include "BMI.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include<cstdio>
#include <cstdlib>
using namespace std;
BMI::BMI(){
    ifstream inFile("file.in",ios::in); //open file.in
    if(!inFile){
        cerr<<"failed open"<<endl;
        exit(1);
    }
	
    while(inFile>>height>>weight)
          BMIcal(height,weight);

}
void BMI::set_weight(float w){
	
	weight=w;
}
void BMI::set_height(float h){
	height=h;
}
float BMI::get_weight(float weight){
	return weight;
}
float BMI::get_height(float height){
	return height;
}

void BMI::BMIcal(float height,float weight){
    if (height == 0 && weight == 0){
        cerr << "" << endl ;
        exit(1);
    }
    height = 0.01*height; //cm to m
     result =weight/(height*height);
    show(result);
}
void BMI::show(float result){

    ofstream outFile("file.out",ios::app);
    if(!outFile){
        cerr<<"error" << endl ;
        exit(1);
    }
    if(result<15.0)
    outFile << fixed << setprecision(2) << result << "\tVery severely underweight" << endl;
    else if (result >= 15.0 && result < 16.0) outFile <<fixed<<  setprecision(2) << result << "\tSeverely underweight" << endl;
    else if (result >= 16.0 && result < 18.5) outFile << fixed <<  setprecision(2) << result << "\tUnderweight" << endl;
    else if (result >= 18.5 && result < 25.0) outFile << fixed <<  setprecision(2) << result << "\tNormal" << endl;
    else if (result >= 25.0 && result < 30.0) outFile << fixed <<  setprecision(2) << result << "\tOverweight" << endl;
    else if (result >= 30.0 && result < 35.0) outFile << fixed <<  setprecision(2) << result << "\tObese Class I (Moderately obese)" << endl;
    else if (result >= 35.0 && result < 40.0) outFile << fixed <<  setprecision(2) << result << "\tObese Class II (Severely obese)" << endl;
    else if (result >= 40.0) outFile << fixed <<  setprecision(2) << result << "\tObese Class III (Very severely obese)" << endl;
    else cout << "error" << endl ;
    outFile.close();
    /*#include <iomanip>
     setprecision(n): will constrain the floating-output to n places, and once you set it, it is set until you explicitly unset it for the remainder of the stream output.
     
     fixed: will enforce that all floating-point numbers are output the same way. So if your precision is set to 4 places, 6.2, and 6.20 will both be output as:6.2000*/
}
