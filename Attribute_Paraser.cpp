//Key- we were trying to program Attribute Parser- Untested, but about complete
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map> 
using namespace std;

void concat(string tag){
    
    char y;
    cin>>y; 
    while (y!= ' '){
        tag = tag + y; 
        cin>>y; 
    }
}

void concat_both (string tag, string att, string concat_of_both){
    //you might need to change how you return this. 
    concat_of_both=tag+'~'+att; 
}

void text_concat (string txt){
    char x; 
    cin>>x; 
    while (x!='"'){
        txt = txt + x;
        cin>>x;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   \
    
    int numof_taglines = 0; 
    int numof_outputlines = 0; 
    string tagname;
    string attribute; 
    string concat_of_both; 
    char x; 
    string text; 
    string sample; 
    
    map<string, string> HashMap;
    
    cin>>numof_taglines; 
    cin>>numof_outputlines; 
    
    
    vector <vector <string>> matrix (numof_taglines/2); 
    
    //**read untill you get the end bracket 
    
    
    for (int i=0; i<(numof_taglines/2); i++){
        cin>>x; 
        if (x == '<'){
            concat(tagname); 
            concat(attribute);
            //concat attribute name and tagname
            concat_both(tagname, attribute, concat_of_both); 
                        
            cin>>x; 
            if (x=='='){
                cin>>x; 
                text_concat(text);
                HashMap.insert(pair<string, string>(concat_of_both, text)); //order doesn't matter. 
            }
        }
        cin>>x;
        
    }
    
    for (int i=0; i<(numof_taglines/2); i++){
        cin>>sample; 
    }
    
    //printing purposes
    for (int i=0; i<numof_outputlines; i++){
        
        //ignoring the dot situaiton 
        cin>>sample; 
        
        //find the value in the Hash map 
        for (auto itr = mp.find(sample); itr != mp.end(); itr++) { //prints that it is there or that it is not there
            cout << itr->first<<endl; 
        }
    }

    return 0;
}
