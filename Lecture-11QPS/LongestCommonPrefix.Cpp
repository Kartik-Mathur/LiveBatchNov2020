#include <bits/stdc++.h>
using namespace std;




int main(){
    char arr[5][5]={"aba","abcd","abd","ab"};
    //length of longest common prefix
    int ans =0;
    //currently we are checking this character
    int checked=0;

    while(true){
            //sab me h ye
        bool matched =true;
        if(arr[0][checked]=='\0')
            break;
            //check if 0th string is avilable in all the string
        char ch = arr[0][checked];
        for(int i=1;i<4;i++){
            if(arr[i][checked]=='\0' || ch!=arr[i][checked]){
                matched =false;
                break;
            }
        }
        if(matched ==false)
            break;
        ans++;
        checked++;


    }

    for(int i=0;i<ans;i++)
        cout << arr[2][i];





}

