#include <sstream>
#include <vector>
#include <iostream>


/*
STRING STREAM: extracts the nearest int and the char in whatever string it is referencing.
stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56 ------ Q)what if we dont have an fixed idea of the variables/number of values we will get 
Sol) Use a vectorr--- if the array  is dynamic 

//goal - if we know that we have a line of an int and a comma wee can easily store that as a vector. 
*/
using namespace std;

vector<int> parseInts(string blah) {
    // Complete this function
    stringstream test (blah);
    vector <int> prac; 
    char ch; 
    int x;
    
    while(!test.eof()) { //there is a different way to check if its at the end of a string stream. 
           test >> x;
        prac.push_back(x);
        test>>ch; //you need to assign it before, cannot just do multiple operations 
    }    
    return prac;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        //you can easily output with the index, just not the input. 
        cout << integers[i] << "\n";
    }
    
    return 0;
}

