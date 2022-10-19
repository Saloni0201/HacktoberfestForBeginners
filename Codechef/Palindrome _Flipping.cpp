// https://www.codechef.com/submit/FLIPPAL

#include<iostream>
#include<string>

using namespace std;

string getStringReverse(string s){
    char reverseString[s.length()];
    int i;
    int index=0;
    for(i=s.length()-1;i>-1;i--){
        reverseString[index]=s[i];
        index++;
    }

    return reverseString;
}

bool isStringPallindrome(string s){
    return s == getStringReverse(s);   
}

string getUpdatedString(string currentString,int lengthOfString,int iIndex,int jIndex){
    int i;
    char stringArray[lengthOfString];
    for(i=0;i<lengthOfString;i++){
        
        if(i==iIndex || i== jIndex){
            stringArray[i] = currentString[i] == '0' ? '1' : '0';
        } else {
            stringArray[i] = currentString[i];
        }
    }
    return stringArray;
}

int main(){
    string input_binary;
    int numberOfTestCases,lengthOfString;
    int i,j,k,a;
    cin >> numberOfTestCases;
    for(a=0;a<numberOfTestCases;a++){
        cin >> lengthOfString;
        cin >> input_binary;
        string newString;
        newString = input_binary;
        for(i=0;i<input_binary.length();i++){
            for(j=0;j<input_binary.length();j++){
                if(j==i){
                    continue;
                }
                string updatedString = getUpdatedString(newString,input_binary.length(),i,j);
                newString = updatedString;
                if(isStringPallindrome(newString)==true){
                    break;
                }
            }
            if(isStringPallindrome(newString)==true){
                cout << "YES" << "\n";
                break;
            }
        }
        if(i==input_binary.length()){
            cout<<"NO" << "\n";
        }
    }
    
    // cout << res << "\n";
    return 0;
}
