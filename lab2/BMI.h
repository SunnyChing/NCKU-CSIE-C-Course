//
//  BMI.hpp
//  
//
//  Created by ching on 2016/3/16.
//
//


#include <string>
#include <cstdio>
#include <iostream>

class BMI{
public:
     BMI();
    void BMIcal(float height, float weight);
    void show(float result);
    void set_height(float h);
    void set_weight(float w);
    float get_height(float height);
    float get_weight(float weight);    
private:
    float height,weight;
    float result;//H is height, M is weight
    
};
/* BMI_hpp */
