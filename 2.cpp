// // Print numbers 1 to n

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin >> n;
// //     int i = 1;
// //     int sum = 0;


// //     while(i <= n){
// //         sum = sum + i;
// //         i = i +1; 
        
// //     }
// //     cout << sum << endl;
// // }
// // HW  


// // Find the sum of all even numbers from 1 to n
// // f to c table

// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int i = 2;
// //     int sum = 0;
// //     int n;
// //     cin >> n;

// //     while (i <= n){
// //         if (i%2 == 0){
// //             sum = sum + i;
            
// //         }
        
// //         i = i + 2;
// //     }
// //     cout << sum << endl;
// // }

// // f to c table


//  #include <iostream>
 
//  double fahrenheitToCelsius(double fahrenheit)
//  {
//      double celsius;
 
//      celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
//      return celsius;
//  }
 
//  int main()
//  {
//      double fahrenheit;
 
//      std::cout << "Enter temperature in fahrenheit (in degrees) ";
//      std::cin  >> fahrenheit;
//      std::cout << "Temperature in Celsius (in degrees) = "
//                << fahrenheitToCelsius(fahrenheit) << std::endl;
//  }





 #include<iostream>
using namespace std;

int main(){
    for (int i = 0; i <= 5;i ++){
        cout << i << " " ;
        i++;
    }
}