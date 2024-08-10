#include <iostream>
using namespace std;

int findSum( int arr1[], int n , int arr2[], int m){

int i = n-1;
int j = m-1;
int carry = 0;
while (i >= 0 && j>= 0 ){
    int value1 = arr1[i];
    int value2 =arr2[j];

    int sum = value1+value2 + carry;
    carry = sum/10;
    sum = sum% 10;

}


}