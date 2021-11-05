     
class Solution
{
   public:
   int SubsetSum( int arr[], int sum, int n){
     int dp[n+1][sum+1];
     for(int i=0; i<n+1; i++){
       for(int j=0; j<sum+1; j++){
         if(i==0)
           dp[i][j]=false;
         if(j==0)
           dp[i][j]=true;
         
         if(arr[i-1]<=j){
           dp[i][j]=(dp[i-1][j-arr[i-1]] || dp[i-1][j]);
         }
         else{
           dp[i][j] = dp[i-1][j];
         }
       }
     }
     return dp[n][sum];
   }
};
       
