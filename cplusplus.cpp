// #include<iostream>
// using namespace std;

// int main(){
//     int i;
//     cout << "entre the age \n" ;
//     cin >> i;
//     cout<< "your age is "  << i;
//     return 0;
// }
/*if else wala question yahan se hai
dhanyawad*/

// #include<iostream>
// using namespace std;

// int main () {
//     int i;
//     cout << " enter the age ";
//     cin >> i;
//     if(i<=18){
//         cout<< "you are not an adult";
//     }
//     else if(i>120){
//         cout<< "you are dead buddy";
//     }
    
//     else{
//         cout<< "oops you are grown";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main ()  {
//     int i;
//     cout<< "entre the num ";
//     cin>> i;
//     if(i>0){
//         cout<< "the num is positive";
//     }
//     else if(i<0){
//         cout<< "the num is ngiteve";
//     }
//     else{
//         cout<< "the num is 0";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main (){
//     int i, n;
//     cout<< "give 1st num ; ";
//     cin>> i;
//     cout<< "give 2nd num ";
//     cin>> n;
//     if(i>n){
//         cout<< i;
//     }
//     else if(i<n){
//         cout<< n;
//     }
//     else{
//         cout<< "both are equal";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main () {
//     int i;
//     cout<<"entre the marks";
//     cin>> i;
//     if(i<=32){
//         cout<<"you are failled";
//     }
//     else if(i<40){
//         cout<< "c";
//     }
//     else if(i<60){
//         cout<<"b";
//     }
//     else if(i<=100){
//         cout<< "congratulations for a";
//     }
//     else{
//         cout<< "please give a valid marks";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i;
//     cout<<"entre the num :";
//     cin>> i;
//     if(i%5==0){
//         if(i%11==0){
//             cout<<" the num is divisible by both 5 & 11";
//         }
//     }
//     else{
//         cout<< "the num is not divisible by 5 or 11";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i;
//     cout<<"entre the year ";
//     cin>> i;
//     if(i%4==0){
//         cout<<" its the leap year";
//     }
//     else{
//         cout<<"the year is not a leapyear";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     char op;

//     cout<<"entre a";
//     cin>>a;
//     cout<<"entre b";
//     cin>>b;
//     cout<<"enter the opreater";
//     cout>>op;

//     switch(op){
//         case '+':

//     }
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     char op;

//     cout << "Enter first number: ";
//     cin >> a;
//     cout << "Enter second number: ";
//     cin >> b;

//     cout << "Enter operator (+, -, *, /): ";
//     cin >> op;

//     switch(op) {
//         case '+':
//             cout << "Result = " << a + b;
//             break;
//         case '-':
//             cout << "Result = " << a - b;
//             break;
//         case '*':
//             cout << "Result = " << a * b;
//             break;
//         case '/':
//             if(b != 0) 
//                 cout << "Result = " << a / b;
//             else 
//                 cout << "Error! Division by zero.";
//             break;
//         default:
//             cout << "Invalid Operator!";
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int day;
//     cout<<"entre the num";
//     cin>>day;

//     switch(day){
//         case 1:
//         cout<<"sunday";
//         break;
//         case 2:
//         cout<<"monday";
//         break;
//         case 3:
//         cout<<"tuesday";
//         break;
//         case 4:
//         cout<<"wednessday";
//         break;
//         case 5:
//         cout<<"thursday";
//         break;
//         case 6:
//         cout<<"friday;";
//         break;
//         case 7:
//         cout<<"saturday";
//         break;
//         default: 
//         cout<<"enter a correct value";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     cout<<"entre the value";
//     cin>>i;
//     switch(i){
//         case 1:
//         cout<<"pizzzaaaa";
//         break;
//         case 2:
//         cout<<"burgir";
//         break;
//         case 3:
//         cout<<"momoz";
//         break;
//         case 4:
//         cout<<"bahar nikal ja lala please";
//         break;
//         default:
//         cout<<"entre the write value";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int i,n,m,c;
//     cout<<"entre the num 1: ";
//     cin>>i;
//     cout<<"entre the num 2: ";
//     cin>>n;
//     cout<<"entre the num 3: ";
//     cin>>m;
//     cout<<"entre the num 4: ";
//     cin>>c;

//     if(i>n){
//         if(i>m){
//             if(i>c){
//                 cout<<i;
//             }
//         }
//     }
//     if(n>i){
//         if(n<m){
//             if(n<c){
//                 cout<<n;
//             }
//         }
//     }
//     if(m>i){
//         if(m>n){
//             if(m>c){
//                 cout<<m;
//             }
//         }
//     }
//     if(c>i){
//         if(c>n){
//             if(c>m){
//                 cout<<c;
//             }
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void printum() {
//     cout<<1<<" ";

//     printnum();
// }
// int main (){
//     cout<<"function calling itself again and again"<<endl;
//     printnum();
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n = 5; 
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }
//         for(int k = 1; k <= i; k++) {
//             cout << "*";
//         }
//         cout << endl; 
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i,n;
//     cout<<"entre the num";
//     cin>>n;
//     for(i=1;i<=10;i++){
//         cout<<n*i<<endl;
//     }
//     return 0;
// }

// while loop yahan se hai ladle /\/\/\\//\\//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\\/\/\/\/\/\/\/\/\/\/\/\\


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i =1, n;
//     cout<<"entre the num";
//     cin>>n;
//     while(i<=10){
//         cout<<i*n<<"\n";
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int N, i = 1, sum = 0;
//     cout << "Enter a number: ";
//     cin >> N;
//     while (i <= N) {
//         sum = sum + i;  
//         i++; 
//     }
//     cout << "Sum of 1 to " << N << " = " << sum << endl;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     int i=0,n;
//     cout<<"enter the num  ";
//     cin>>n;
//     while(i<=n){
//         cout<<i<< endl;
//         i=i+2;
//     }
//     return 0;

// }
// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     int i=0;
//     while(i<=10){
//         cout<<i<<endl;
//         i=i+2;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i=0,n;
//     cout<<"entre the num";
//     cin>>n;
//     while(i<=n){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int i=1, sum =0,n;
//     cout<<"enter the num";
//     cin>>n;
//     while(i<=n){
//         sum = sum+i;
//         i++;
//     } 
//     cout<<sum<<endl;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i=0,n;
//     cout<<"enter the num";
//     cin>>n;
//     while(i<=n){
//         cout<<i<<endl;
//         i=i+2;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i=1,n;
//     cout<<"enter the num";
//     cin>>n;
//     while(i<=n){
//         cout<<i<<endl;
//         i=i+2;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i=1,fact=1,n;
//     cout<<"enter the num";
//     cin>>n;
//     while(i<=n){
//         fact = fact*i;
//         i++;
//     }
//     cout<<fact;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     int  i=0,n;
//     cout<<"enter the num ";
//     cin>>n;
//     while(n>0){
//         n= n/10;
//         i++;
//     }
//     cout<<i;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     int n,digit,sum =0;
//     cout<<"entre the num";
//     cin>>n;
//     while(n>0){
//         digit = n%10;
//         sum = sum + digit;
//         n = n/10;
//     }
//     cout<<sum;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     int reverse ;
//     cout<<"entre the num ";
//     cin>>reverse ;
//     while(reverse = reverse){
//         reverse = reverse ;
//         cout<<reverse ;

//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, digit, rev =0;
//     cout<<"enter the num ";
//     cin>>n;
//     while(n>0){
//         digit = n%10;
//         rev = rev * 10+ digit;
//         n = n/10;
//     }
//     cout<<rev;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main () {
//     int rev =0, org ,n,digit;
//     cout<<"entre the num ";
//     cin>>n;

//     org = n;
//     while(n>0){
//         digit = n%10;
//         rev = rev*10+digit;
//         n = n/10;
//     }
//     if(rev==org){
//         cout<<org<<" is penidrome";
//     }
//     else{
//         cout<<org<<" is not penidrome";
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main (){
//     int fact= 1, i =1, n;
//     cout<<"entre the num";
//     cin>>n;
//     while(i<=n){
//         fact *= i;
//         i++;
//         cout<<fact<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
//  int main(){
//     float i, j;
//     for(i=1; i<=5;i++){
//         for(j=i;j<=5;j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
        
//     return 0;
//  }

// #include<bits/stdc++.h>
// using namespace std;

// void swapnum(int a , int b){
//     int num =a;
//     a=b;
//     b=num;
//     cout<<a<< " " <<b<< endl;
// }

// int main (){
//     int x = 3, y= 6;
//     swapnum(x,y);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void squrenum(int x){
//     x=x*x;
//     cout<<x;
// }

// int main(){
//     int a = 5;
//     squrenum(a);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void incrten(int x){
//     x = x+10;
//     cout<<x;
// }

// int main (){
//     int a = 5;
//     incrten(a);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int sumoftwo(int x,int y){
//     int n;
//     n = x+y;
//     cout<<x<<"+"<<y<<endl<<"= "<<n;
// }

// int main (){
//     int a =5 , b = 6;
//     sumoftwo(a,b);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a = 5;
//     if(a%2==0){
//         cout<<"even";
//     }
//     else{
//         cout<<"Odd";
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b, c;
//     cout<<"enter a";
//     cin>>a;
//     cout<<"enter b";
//     cin>>b;
//     cout<<"enter c";
//     cin>>c;
//     if(a>b&& a>c){
//         cout<<a;
//     }
//     else if(b>a && b>c){
//         cout<<b;
//     }
//     else{
//         cout<<c;
//     }
//     return 0;
// }
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     int n , fact = 1;
//     cin>>n;
//     for(int i = 1;i<=n;i++){
//         fact =fact*i;
//     }
//     cout<<fact;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main (){
//     int a = 4;
//     int *p = &a;
//     cout<<*p;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void increment(int &x){
//     x=x+1;
// }

// int main (){
//     int a =4;
//     increment(a);
//     cout<<a;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void swapnum(int *a, int *b){
//     swap(*a,*b);
// }

// int main (){
//     int a = 4, b = 7;
//     swapnum(&a,&b);
//     cout<<a<<" "<<b<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int giligili(int &a, int *b){
//     a = a + 10;
//     *b = *b * 3;
// }

// int main (){
//     int a = 10, b = 7;
//     giligili(a,&b);
//     cout<<a<<" "<<b;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void printadd(int *p){
// }

// int main(){
//     int p=20;
//     printadd(&p);
//     cout<<&p;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main (){
//     int  digit, n, rev = 0;
//     cout<<"enter the num "<<endl;
//     cin>>n;
//     for(int i = 1 ; i<n; i++){
//         digit = n%10;
//         n=n/10;
//         rev = rev * 10 + digit;
//     }
//     cout<<rev;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std ;

// int main(){
//     int digit , n, rev = 0;
//     cout<<"enter the num : ";
//     cin>>n;
//     while(n<0){
        
//     }
//         digit = n%10;
//         rev = rev * 10 + digit;
//         n = n/10;
//     cout<<rev;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int rev = 0;
//     int num;
//     cout<<"enter the num ";
//     cin>>num ;
//     while (num!=0){
//         rev=rev * 10 +num % 10 ;
//         num = num/10;
//     }
//     cout<<rev;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int rev = 0, num ;
//     cout<<"enter the num ";
//     cin>>num;
//     int org=num;
//     while(num!=0){
//         rev = rev * 10 + num %10;
//         num = num/10;
//     }
//     if(org==rev){
//         cout<<" it is  palindrom";
//     }
//     else{
//         cout<<"its not a palindrom ";
//     }   
//     return 0;
// }
// areeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeyyyyyyyyyyyyyyyyyyyyyyyy
// #include<bits/stdc++.h>
// using namespace std;

// int main (){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i = 0 ; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main (){
//     int count= 0,num;
//     cin>>num;
//     while(num!=0){
//         num%10;
//         count++;
//         num=num/10;
//     }
//     cout<<count;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i = 0 ; i<n;i++ ){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// arrayyyyyyyyyyyyyy ka swap wala queston
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     swap(arr[2],arr[5]);
//     for(int i= 0 ; i <n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i = 0;i<n;i++){
//         cout<<arr[i];
//     }
//     return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int countodd= 0 , counteven = 0 ;
//     int arr[8]={1,2,3,4,5,6,7,8};
//     for(int i = 0 ; i<8; i++){
//         if(arr[i]%2==0){
//             counteven++;
//         }
//         else{
//             countodd++;
//         }
//     }
//     cout<<counteven<<endl<<countodd;
//     return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[12]={1,2,3,4,5,6,7,8,9,10, 11, 12 };
//     for(int i=0; i<12;i++){
//         if(arr[i]%2==0){
//             cout<<arr[i]<<" ";
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[12]={1,2,3,4,5,6,7,8,9,10, 11, 12 };
//     int a = 7;
//     for(int i=0; i<12;i++){
//         if(arr[i]==a){
//             cout<<"your index of "<< a << " is : "<<i;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[9]={84,64,-73,84,92,47,49,57,48 };
//     for(int i=0; i<9;i++){
//         if(arr[i]<0){
//             cout<<"yes there is a negitive";
//              break;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[9] = {1,4,2,6,3,8,7,9,5,};
//     int num = 7, found = -1;
//     for(int i =0; i<9; i++){
//         if(arr[i]==num){
//             found = i;
//             break;
//         }
        
//     }
//     if(found!=-1){
//             cout<<" your given number's index is  : "<<found;
//         }
//         else{
//             cout<<found;
//         }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main (){
//     int i, j;
//     for(i=1;i<=5;i++){
//         for(j=i;j>=1;j--){
//             cout<<j;
//         }cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i,j, dew=0;
//     for(i =1;i<=5;i++){
//         for(j=i;j<=i; j++){
//             dew=j;
//             cout<<dew;
//         }
        
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Student {
//     int roll;
//     string name;

// public:
//     void setData(int r, string n) {
//         roll = r;
//         name = n;
//     }

//     void showData() {
//         cout << "Roll No: " << roll << endl;
//         cout << "Name   : " << name << endl;
//     }
// };

// int main() {
//     Student s1;
//     s1.setData(81, "Apurv ");
//     s1.showData();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main (){
//     int i, j;
//     for(i=5; i>=1; i--){
//         for(j=i ; j>=1; j--){
//             cout<< j;
//         }
//         cout<< endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main (){
//     int i , j ;
//     for(i=5 ; i>=1; i--){
//         for(j=i; j>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main (){
//      int i,j;
//      char lett='A';
//     for(i=1 ; i<=5; i++){
//         for(j=1; j<=i; j++){
//             cout<<lett ;
//             lett++;
//         }
//         cout<<endl;

//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int num = 1;
//     for(int i = 1; i <= 4; i++){
//         for(int j = 1; j <= i; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[7];
//     for(int i = 1; i<7; i++){
//         cin>>arr[i];
//     }
//     int smallest = INT_MAX;
//     for(int i =1 ; i<7; i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     cout<<smallest;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[6];
//     for(int i=0; i<6; i++){
//         cin>>arr[i];
//     }
//     int maximum = INT_MIN;
//     for(int i=0 ; i<6; i++){
//         if(arr[i]>maximum){
//             maximum=arr[i];
//         }
//     }
//     cout<<maximum;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std ;

// int main(){
//     int arr[6];
//     for(int i = 0 ; i< 6; i++){
//         cin>>arr[i];
//     }
//     int sum= 0;
//     for(int i=0 ; i < 6; i++){
//         sum += arr[i];
//     }
//     cout<<sum;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std ;

// int main (){
//     int arr[6];
//     int odd =0, even = 0;
//     for(int i=0;i<6;i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<6; i++){
//         if(arr[i]%2==0){
//             even++;
//         }
//         else{
//             odd++;
//         }
//     }
//     cout<<"even = "<<even<<endl;
//     cout<<"odd = "<<odd;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[6];
//     for(int i =0; i<6; i++){
//         cin>>arr[i];
//     }
//     for(int i = 5 ; i>=0; i--){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std ;

// int main(){
//     int arr[6];
//     int negetive = 0, positive = 0 , zero = 0;
//     for(int i = 0 ; i<6; i++){
//         cin>>arr[i];
//     }
//     for(int i =0 ; i<6; i++){
//         if(arr[i]<0){
//             negetive++;
//         }
//         else if(arr[i]>0){
//             positive++;
//         }
//         else{
//             zero++;
//         }
//     }
//     cout<<"negetive = "<< negetive  <<endl;
//     cout<<"positive = "<<positive<<endl;
//     cout<<"zero  = "<<zero;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main (){
//     int arr[6];
//     for(int i=0 ; i<6; i++){
//         cin>>arr[i];
//     }
//     int n;
//     cin>>n;
//     bool found = false ;
//     for(int i = 0 ; i<6; i++){
//         if(arr[i]==n){
//             found= true;
//             break;
//         }
//         else{
//             found= false ;
//         }
//     }
//     if(found = true ){
//         cout<<"element found ";
//     }
//     else{
//         cout<<"element not found ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[6];
//     for(int i = 0 ; i<6; i++){
//         cin>>arr[i];
//     }
//     int n, count = 0;
//     cin>>n;
//     for(int i=0 ; i<6; i++){
//         if(arr[i]==n){
//             count++;
//         }
//     }
//     cout<<n<<" occured "<< count<< "times ";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main (){
//     int arr[6];
//     for(int i=0;i<6;i++){
//         cin>>arr[i];
//     }
//     int maximum = INT_MIN;
//     int second = INT_MIN;

//     for(int i=0;i<6;i++){
//         if(arr[i]>maximum){
//             second = maximum;
//             maximum = arr[i];
//         }
//         else if(arr[i]> second && arr[i] != maximum){
//             second = arr[i];
//         }
//     }
//     cout<<"maximum is = "<<maximum<<endl;
//     cout<<second;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[6];
//     for(int i=0;i<6;i++){
//         cin>>arr[i];
//     }

//     int minimum = INT_MAX;
//     int second = INT_MAX;

//     for(int i=0; i<6; i++){
//         if(arr[i]<minimum){
//             second = minimum;
//             minimum = arr[i];
//         }
//         else if(arr[i]<second && arr[i] != minimum){
//             second=arr[i];
//         }
//     }
//     cout<<"minimum = "<<minimum<<endl;
//     cout<<second;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std ;

// int main (){
//     int arr[6];
//     for(int i=0;i<6;i++){
//         cin>>arr[i];
//     }
//     bool found = true ; 
//     for(int i=0;i<5;i++){
//         if(arr[i]>arr[i+1]){
//             found = false ;
//             break;
//         }
//     }
//     if(found){
//         cout<<"shorted ";
//     }
//     else {
//         cout<<"not shorted ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[6];
//     for(int i=0;i<6;i++){
//         cin>>arr[i];
//     }
//     bool found = false ;

//     for(int i =0 ; i<6;i++){
//         for(int j= i+1; j<6; j++){
//             if(arr[i]==arr[j]){
//                 found = true ;
//                 cout<<"the dublicates are = "<<arr[j]<<endl;
//             }
//         }
//     if(!found){
//         cout<<"there is none dublicates .";
//         break;
//     }

//     }
//     return 0;
// }


//  #include <bits/stdc++.h>
//  using namespace std;

//  int main (){
//     int arr[6];
//     for(int i=0; i<6;i++){
//         cin>>arr[i];
//     }

    
//     for(int i=0;i<6;i++){
//         int count=0;
//         for(int j=0;j<6;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             cout<<arr[i]<<" ";
//         }
//     } 
//     return 0;
//  }


// #include <bits/stdc++.h >
// using namespace std ;

// int main (){
//     int arr[6]={3,4,5,6,7,8};
//     int target = 9;
//     int low= 0 ;
//     int high = 5;

//     bool found = false;

//     while(low<=high){
//         int mid = (low+high)/2;

//         if(arr[mid]==target){
//             found= true;
//             break;
//         }
//         else if(arr[mid]<target){
//             low= mid+1;
//         }
//         else{
//             high = mid-1;
//         }
//     }
//     if(found){
//         cout<<"found";
//     }
//     else{
//         cout<<"not in the array ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main (){
//     int arr[6]={2,3,4,4,4,5};

//     int target = 4;
//     int low = 0;
//     int high = 5;

//     int answer =0;
//     bool found = false ;

//     while(low<=high){
//         int mid = (low+high)/2;

//         if(arr[mid]==target){
//             answer=mid;
//             found = true;
//             high = mid-1;
//         }
//         else if(arr[mid]<target){
//             low=mid+1;
//         }
//         else{
//             high= low-1;
//         }
//     }
//     if(found){
//         cout<<"the first itrationfound in = "<<answer;
//     }
//     else{
//         cout<<"not found ";
//     }
//     return 0; 
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[6]= {2,3,4,4,4,5};
//     int target = 4;
//     int low = 0;
//     int high = 5;

//     int answer = 0;
//     bool found = false;

//     while(low<=high){

//         int mid = (low+high)/2;

//         if(arr[mid]==target){
//             answer = mid;
//             found =true;
//             low = mid+1;
//         }
//         else if(arr[mid]<target){
//             low = mid+1;
//         }
//         else{
//             high = mid -1;
//         }
//     }
//     if(found){
//         cout<<"the last occurence is at = "<<answer;
//     }
//     else{
//         cout<<"not appered ";
//     }
//     return 0;
// }