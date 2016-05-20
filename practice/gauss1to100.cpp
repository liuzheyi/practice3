//
//  gauss1to100.cpp
//  practice
//
//  Created by 刘哲一 on 16/2/5.
//  Copyright © 2016年 刘哲一. All rights reserved.
//

#include "gauss1to100.hpp"
#include <iostream>

int main(){
    int n = 100;
    int sum = 0;
    sum = n*(n+1)/2;
    std::cout<<sum<<std::endl;
    return 0;
}

