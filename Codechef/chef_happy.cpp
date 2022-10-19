#include <bits/stdc++.h>
using namespace std;
int isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    return 0;
}
int main() {
    int t, n, i, j, temp, happy;
    string s;
    cin>>t;
    vector<string> vec;
    for (i = 0; i < t; ++i)
    {
        cin>>s;
        happy = 0;
        for(j = 0; j<s.size(); ++j){
            if(isVowel(s[j]) && isVowel(s[j+1]) && isVowel(s[j+2])){
                vec.emplace_back("HAPPY");
                happy = 1;
                break;
            } 
        }
        if(happy == 0)
            vec.emplace_back("SAD");
    }

    for (auto it: vec)
        cout<<it<<endl;
	return 0;
}
