#include<iostream>
//#include <cmath>
//#include<ostream>
//#include<vector>
//#include<<sum<string>
//#include <climits>
//#include <algorithm>
//#include<string>
//#include <memory>
//#include <sstream>
using namespace std;
//using std::cout;
//using std::endl;
//smart pointer is a wrapper around a pointer //dont have to call new and delete 



int main (){ 
int n;
cin>>n;
//-> find the max number in sequence 
int min;
cin >>min;
n--;
while(n-->0){
    int current;
    cin>>current;
    if(current<min){
        min=current;
    }
}
std::cout<<min<<std::endl;
}