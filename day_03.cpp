#include<iostream>

using namespace std;

/*
  Question 1 : Write a C++ program to get a number from the user and print whether 
               it's positive, negative or zero.
 
*/


/*
   Question 2 : Write a C++ program that takes a year from the user and print whether 
               that year is a leap year or not.

*/


int main(){
       
       int year;

       cout<<"enter the year :"<<endl;
       cin>>year;
      
         if (year % 4 == 0)
         {
              cout<<"year is leep year";
         }
         else if ( year % 100 == 0)
         {
              cout<<"year is not a leep year";
         }
         else if (year % 400)
         {
             cout<<"year is leep year ";
         }else
         
         {
                cout<<"year is not a leep year "; 
         }
         
    return 0;
}


/*
  Question 3 : For any 3 digit number check whether it’s an Armstrong number or not. 
              Armstrong number is a number that is equal to the sum of cubes of its digits.
              Eg : 371 is an armstrong number. 
              3*3*3 + 7*7*7 + 1*1*1 = 371

*/


int main(){
          int n;
     
           int a = n%10;
             n /= 10;
           int b = n%10;
             n/= 10;

    return 0;
}



int main() { 

int n;

cout << "enter a 3 digit number : ";

cin >> n;

int num = n; //creating a copy

int dig1 = num % 10;

num /= 10;

int dig2 = num % 10; 
num /= 10;
  
  int dig3 = num;

int cubeSum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;

if (cubeSum == n) {
cout << n << " is an Armstrong Number\n";
} else {
cout << n << " is NOT an Armstrong Number\n";
}
return 0;
}
