#include <bits/stdc++.h>
using namespace std;

bool isPalin(char arr[],int start,int end){
    int i=start;
    int j=end;
    while(i<j){
        if(arr[i]!=arr[j])
            return false;

            i++;
            j--;

    }
    return true;
}


int main(){
    char arr[]="ababd";
    //length of maximum substring
    int ans =0;
    //final substring will start from here
    int s=0;
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(isPalin(arr,i,j)){
                if(j-i+1>=ans){
                    ans = max(ans,j-i+1);
                    s=i;
                }
            }
        }
    }

    for(int i=s;i<s+ans;i++)
        cout << arr[i];


}
