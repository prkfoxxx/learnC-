//
//  break.cpp
//  BreakContinue
//
//  Created by Priyansh Kumar on 04/02/18.
//  Copyright © 2018 Priyansh Kumar. All rights reserved.
//

#include <iostream>
using namespace std;

int main (){
    int n=10,i;
    
    for (i=0;i<n;i++){
        cout<<"Here is loop started";
        if(i==3)
        break;
    }
    cout<<"Here the loop is terminted when i = 3";
}

