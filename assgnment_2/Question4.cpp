//question4 
//a. concatenate 2 strings
#include<iostream>
using namespace std;

int join2strings(string a, string b){
    cout<<a+b<<endl;
}

//b. reversestring
void reversestring(string a){
    for (int i = a.length()-1; i>=0; i--){
        cout<<a[i];
    }
}
// c. delete vowels
void deletevowels(string c){
    string result = " ";
    for (int i = 0; i<c.length(); i++){
        
        if (c[i]!='a' && c[i]!='e' && c[i]!='i' && c[i]!='o' && c[i]!='u'
        && c[i]!='A' && c[i]!='E' && c[i]!='I' && c[i]!='O' && c[i]!='U'){
            result += c[i];
        }
    
        
}
cout<<result<<endl;
}

//d. arrange in alphabetical order

void alphabeticalorder(string d){
    string lowercase_d;
    for(int i = 0; i<d.length(); i++){
        for(int j=i+1; j<d.length(); j++){
            if (tolower(d[i])>tolower(d[j])){
                swap(d[i], d[j]);
            }
        }
    }
    cout<<d<<endl;      
}

void uppertolower(string e){
    for(int i=0; i<e.length(); i++){
        if(e[i]>='A' && e[i]<='Z'){
            e[i] +=32;
        }
    }
    cout<<e<<endl;
}

int main(){
    // cout<<"Enter 1st and 2nd: "<<endl;
    // string a,b;
    // cin>>a>>b;

    // join2strings(a,b);

    cout<<"Enter your string: "<<endl;
    string c;
    getline(cin,c);
    // reversestring(c);
    // deletevowels(c);
    alphabeticalorder(c);
    uppertolower(c);
}
