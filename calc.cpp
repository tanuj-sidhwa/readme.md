#include<iostream>
#include <iomanip>
using namespace std;

int factorial(int n){
  if(n==0 or n==1){
    return 1;
  }
  return (n*factorial(n-1));
}

float power(float x, int y) {
 if(y == 0){
        return 1;
   }
    if(y == 1){
        return x;
    }
    return x * power(x, y - 1);
}


double sin(double x, int n)
{
   double t = x;
   double sine = t;
   for ( int a=1; a<n; ++a)
   {
      double mult = -x*x/((2*a+1)*(2*a));
      t *= mult;
      sine += t;
   }
   return sine;
}

double cos(double x, int n)
{
   double t = x;
   double cosine = t;
   for ( int a=1; a<n; ++a)
   {
      double mult = -x*x/((2*a-1)*(2*a));
      t *= mult;
      cosine += t;
   }
   return cosine;
}
double expo(double x, int n)
{
   double t = x;
   double exp = t;
   for ( int a=1; a<n; ++a)
   {
      double mult = x/((a+1));
      t *= mult;
      exp += t;
   }
   return exp;
}


int main(){
  int x;
  float a,b;
  cout<<"Please select operation you want to perform"<<endl;
  cout<<"1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n5 for Factorial\n6 for Sine\n7 for cosine\n8 for Tangent\n9 for Cosecant\n10 for Secant\n11 for Cotangent\n12 for Exponential "<<endl;
  cout<<"Your Response : ";
  cin>>x;
  if(x<5){
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    if(x==1){
      cout<<"Sum = "<<(a+b);
    }
    else if(x==2){
      cout<<"Difference = "<<(a-b);
    }
    else if(x==3){
      cout<<"Product = "<<(a*b);
    }
    else {
      cout<<"Quotient = "<<(a/b);
  }
  }

  else if (x==5){
    int s;
    cout<<"Enter the number : ";
    cin>>s;
    cout<<s<<"! = "<<factorial(s);
  }

   
  else if(x == 6){
         double num;
         int n =50;
         cout << "Enter any Number" << endl;
         cin >> num;
         
         cout << std::setprecision(20) << "sine of given x equals " << sin(num, n);
  }
  else if(x == 7){
         double k;
    double t;
    int m;
    m=50;
    cout << "Enter any Number" << endl;
    cin >> k;
    t = (1.5707963267948966-k);
    cout << std::setprecision(20) << "Cosine of given x equals " << sin(t, m);
  }
    else if(x == 8){
         double k;
         double h;
         double g;
      double t;
         int c;
         int n=50;
         cout << "Enter any Number" << endl;
         cin >> k;
         
         std::setprecision(20);
         h = sin(k, c);
         t = (1.5707963267948966-k);
         g = sin(t, c);
         cout<<"Tangent of given x equals "<<(h/g);
  }
  else if(x == 9){
         double num;
         int n = 50;
         cout << "Enter any Number" << endl;
         cin >> num;
         
         cout << std::setprecision(20) << "Cosecant of given x equals " << (1/sin(num, n));
  }
  else if(x == 10){
         double k;
         int c;
      double t;
         int n = 50;
         cout << "Enter any Number" << endl;
         cin >> k;
         t = (1.5707963267948966-k);
         cout << std::setprecision(20) << "Secant of given x equals " << (1/sin(t, c));
  }
  else if (x==11){
         double k;
         double h;
         double g;
         int c;
         int n;
         double t;
         cout << "Enter any Number" << endl;
         cin >> k;
         cout << "Enter c" <<  endl;
         cin >> n;
         std::setprecision(20);
         h =sin(k, c);
         t = (1.5707963267948966-k);
         g = sin(t, c);
         cout<<"Cotangent of gien x equals "<<(g/h);
   }
   else if(x == 12){
         double num;
         int n = 50;
         cout << "Enter any Number" << endl;
         cin >> num;
         
         cout << std::setprecision(20) << "Exponential of given x equals " << expo(num, n);
  }
  else {
    cout<<"Please enter a valid operation";
  }
  
  return 0;
}