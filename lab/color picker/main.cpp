/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
string getcolr();
string getcard();
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    //Input or initialize values Here
    srand(static_cast<unsigned int>(time(0)));
    //Process/Calculations Here
    
    //Output Located Here
    cout<<getcolr()<<endl;

    //Exit
    return 0;
}
string getcolr(){
fstream in;
string color;
int nlines;
//in variable
in.open("color.dat");{
nlines=rand()%8;
//lok for random cololr
for(int line=1;line<=nlines;line++)
    in>>color;
}
in.close();
return color;
}
