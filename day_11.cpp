#include<iostream>
#include<algorithm>
using namespace std;

// void printsubarr(int arr [] , int n){

//     int maxsum = INT16_MIN;
          
//           for (int start = 0; start < n; start++)
//           {
//              for (int end = start; end < n; end++)
//              {

//                 cout<<"("<<start<<","<<end<<")";
                  
//                   // print subarray

//                   //max  sum of sub array

                  

//                   int currsum = 0;

//                   for (int i = start; i <= end; i++)
//                   {
//                        cout<<arr[i]<<" ";

//                        currsum+=arr[i];
//                   }
//                     cout<<currsum<<" ,";

//                     maxsum = max(maxsum , currsum);

//              }
//              cout<<endl;
//           }
          

// }


// int main(){

//          int arr[] = {1,2,3,4,5};

//          int n = sizeof(arr)/sizeof(arr[0]);

//          printsubarr(arr,n);
// }



// slightly optimize the max sum by remove one for loop time complexity from n*3 to n*2




void maxsum(int arr[] , int n){

           
           int maxs = INT16_MIN; 

           for (int start = 0; start < n; start++)           
           {
                
                  int currs = 0;

                for (int end  = start; end < n ; end++)
                {
                      currs+= arr[end];

                     maxs = max(currs, maxs);
                }

              
           }

           cout<<maxs<<" ";
           
}





int main(){
     
     int arr[] = {2,3,4,5,6,7};

     int n = sizeof(arr)/sizeof(arr[0]);

      // printsubarr( arr , n);
         maxsum(arr,n);

    return 0;
}





/*   Kadane's algo for max sum of subarray   */



// void maxsum(int arr[] , int n){
            
//             int maxs = INT16_MIN;

//             int currs = 0;

//             for (int i = 0; i < n; i++)
//             {
//                 currs+= arr[i];
                      
//                       maxs = max( maxs , currs);

//                    if (currs < 0)
//                    {
//                       currs = 0;
//                    }
                   

//             }

//             // max sum of subarray 

//             cout<<currs<<" "<<endl;
            

// }


// int main(){
   
//    int arr [] = {2,-3,6,-5,4,2};
    
//     int n = sizeof(arr)/sizeof(arr[0]);

//    maxsum(arr , n);

//   return 0;
// }




/*  buy and sell of stocks */




// void maxprofit(int price[] , int n){

//        int bestBuy[100000] ;

//        bestBuy[0] = INT16_MAX;
     
//        for (int i = 1; i < n; i++)
//        {
//           bestBuy[i] = min( bestBuy[i-1] , price[i-1] );
//            cout<<bestBuy[i]<<",";
//        }
      
//         int maxsprofit = 0;

//         for (int i = 0; i < n; i++)
//         {
//             int currprofit = price[i] - bestBuy[i];
               
//                maxsprofit = max(maxsprofit , currprofit);
              
//         }
        
//         cout<<"max profit  = "<<maxsprofit<<endl;


// }



// int main(){
   
//    int price[] = {7,1,5,3,6,4};

// int n = sizeof(price)/sizeof(price[0]);

//  maxprofit( price  , n);
   

//   return 0;
// }






/*
      trapping rain water 
  
*/


// void trap( int height[] , int n){

//     int leftmax[20000] , rightmax[20000];

//      leftmax[0] = height[0];

//      rightmax[0] = height[n-1];

      
//       for (int i = 1; i < n; i++)
//       {
//           leftmax[i] = max(leftmax[i - 1] , height[ i - 1] );          
//       }
      
//       for (int i = n-2 ; i >= 0; i--)
//       {
//            rightmax[i] = max(rightmax[i+1] , height[i+1]);
//       }
      
//       int waterTrapped = 0;

//       for (int i = 0; i < n; i++)
//       {
//             int currWater = min(leftmax[i] , rightmax[i]) - height[i];

//             if (currWater > 0)
//             {
//                     waterTrapped+=currWater;
//             }
            


//       }
      

//           cout<<"water trapped is "<<waterTrapped<<endl;



// }



// int main(){
 
//   int height[] = {4,2,0,6,3,2,5};

//   int n = sizeof(height)/sizeof(height[0]);


//     return 0;
// }