//
//  continue.cpp
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
        cout<<"Here is loop started"<<i<<"times";
        if(i==3)
        continue;
    }
    cout<<"Here the loop is skipped when i=3";
}

