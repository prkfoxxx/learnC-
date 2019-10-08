#include<iostream>
using namespace std;
int main() {
    long long int bin;
    int n,dec=0,base = 1,rem;
    cin >> n;
    for (int i=0; i<n; i++){
        cin>> bin;
        while(bin!=0){
            rem = bin % 10;
            bin = bin/10;
            dec = dec + rem*base;
            base = base*2;
        }
        cout<<dec<<endl;
        dec=0;
        rem=0;
        base=1;
    }
    return 0;
}
