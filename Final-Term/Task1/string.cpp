#include<bits/stdc++.h>
using namespace std;

int main(){

string s = "gadygheuvhhbn";

int arr[26];

for(int i=0; i<26; i++){
    arr[i] = 0;
}
for(int i=0; i<s.size(); i++){
    arr[s[i]-'a']++;
}

char ans = 'a';
int maxF =0;
for(int i=0; i<26; i++){
    if(arr[i] > maxF){
        maxF = arr[i];
        ans = i+'a';
    }
}
cout<<maxF<<endl;
cout<<ans<<endl;

return 0;
}
