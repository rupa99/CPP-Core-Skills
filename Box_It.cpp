#include<bits/stdc++.h>

using namespace std;


class Box{
    public: 
    int l; 
    int b; 
    int h; 
    
    public: 
    //no return types for constructors 
    Box(){
        l=0; 
        b=0;
        h=0;
    }
    
    Box(int x, int y, int z){
        l=x;
        b=y;
        h=z;
    }
    
    Box (const Box &B){
        l=B.l; 
        b=B.b;
        h=B.h;
    }
    
    
    int getLength(){
        return l; 
    }
    
    int getBreadth (){
        return b;
    }
    
    int getHeight (){
        return h;
    }
    
    long long CalculateVolume(){
        return 1LL * b * h * l; /*When using long long int to ensure multiplication 
        happens in 64 bit do this */
    }
    
    //box A is less than box b if the following. 
    //must declare the name of class when operator overloading 
    bool operator<(Box& B){
        //one is the object - 'a' and the other one is what we are creating which is b
        //we always call the default which is referenced by this -> param 
        if((this->l)<B.l || ((this->b)<B.b && (this->l)==B.l) || ((this->h)<B.h  && (this->b)==B.b && (this->l)==B.l))
        {
            return true; 
            
        }
            return false; 
    }
    
    //ostream can only be used outside of a class 
 
};

//Ostream- operator << are always declared outside of a class. -- output data type 
//for other operators that are NOT output- the implicit object applies 
//however, for output operators, since they are used outside of the class
//you must declare a paramerter you are going to pass. 
  ostream& operator<<(ostream& out, Box B) {
    out <<B.l << ' '<<B.b <<' '<<B.h << ' '; //declare it as an output type
    return out;
}

