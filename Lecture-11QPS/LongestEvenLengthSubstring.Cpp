using namespace std;

int main() {
  int t;
  cin>>t;
  while(t){
      t--;
      char arr[100000];
      cin>>arr;
      // n is length of array
      int n=0;
      for(n=0;arr[n]!='\0';n++);
      int ans =0;
      for(int i=0;i<=n-2;i++){
          int l_sum =0;
          int r_sum=0;
          //k is start of left half;
          int k=i;  //left half k to i
          //j is end of second half
          int j=i+1;  //second half from i+1 to j
          while(k>=0 && j<n){
              l_sum+=(arr[k]-'0');
              r_sum+=(arr[j] -'0');
              if(l_sum==r_sum){
                  ans =max(ans,(i-k+1)*2);
              }
              k--;
              j++;
          }
      }
      
      cout << ans << endl;
      
  }
}
