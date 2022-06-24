// C++ program to illustrate the
// Kahan summation algorithm 
//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
 
// Function to implement the Kahan
// summation algorithm
double kahanSum(vector<double> &fa)
{
    double sum = 0.0;
 
    // Variable to store the error
    double c = 0.0;
 
    // Loop to iterate over the array
    for(double f : fa)
    {
        double y = f - c;
        double t = sum + y;
         
        // Algebraically, c is always 0
        // when t is replaced by its
        // value from the above expression.
        // But, when there is a loss,
        // the higher-order y is cancelled
        // out by subtracting y from c and
        // all that remains is the
        // lower-order error in c
        c = (t - sum) - y;
        sum = t;
    }
    return sum;
}
 
// Function to implement the sum
// of an array
double sum(vector<double> &fa)
{
    double sum = 0.0;
 
    // Loop to find the sum of the array
    for(double f : fa)
    {
        sum = sum + f;
    }
    return sum;
}
 
// Driver code
int main()
{
    vector<double> no(10);
    for(int i = 0; i < 10; i++)
    {
        no[i] = 0.1;
    }
  
    // Comparing the results
    //  cout << setprecision(16);
    cout << "Normal sum: " << sum(no) << " \n";
    cout << "Kahan sum: " << kahanSum(no);    
}