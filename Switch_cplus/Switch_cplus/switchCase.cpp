//
//  main.cpp
//  Switch_cplus
//
//  Created by Priyansh Kumar on 14/01/18.
//  Copyright © 2018 Priyansh Kumar. All rights reserved.
//

#include<iostream>

using namespace std;

int main () {
    int num;
    cout << " Enter the number to check the grade";
    
    cin >> num;
    
    switch (num)
    {
        case 10: cout<<"It is 10"; break;
        case 20: cout<<"It is 20"; break;
        case 30: cout<<"It is 30"; break;
        default: cout<<"Not 10, 20 or 30"; break;
    }
    return 0;
    
}
