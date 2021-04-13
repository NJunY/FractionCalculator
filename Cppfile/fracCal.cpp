#include <iostream>
#include <string>
using namespace std;

string addFraction(int n1,int d1,int n2,int d2){
  int n; // initialize the n
  if (d1 == d2){ //if both denominators are same
      n = n1+n2; //just add them together
  }
  else{ //make both denominators become same and add
    n1 = n1*d2;
    n2 = n2*d1;
    d1 = d1*d2;
    d2 = d2*d1;
    n = n1+n2;
  }
  int ni = n, di = d1, i = n+1; //value for simplification
  while (n%i!=0 || d1%i!=0){ //simplify the fraction
      i--;
      ni = n/i;
      di = d1/i;
  }
  string ns = to_string(ni); //make the numerator to string
  string ds = to_string(di); //make the denominator to string
  return (ns+"/"+ds); //return the output
}

string subtractFraction(int n1,int d1,int n2,int d2){
  int n; // initialize the n
  if (d1 == d2){ //if both denominators are same
      n = n1-n2; //just subtract them
  }
  else{ //make both denominators become same and subtract
    n1 = n1*d2;
    n2 = n2*d1;
    d1 = d1*d2;
    d2 = d2*d1;
    n = n1-n2;
  }
  int ni = n, di = d1, i = n+1;  //value for simplification
  while (n%i!=0 || d1%i!=0){ //simplify the fraction
      i--;
      ni = n/i;
      di = d1/i;
  }
  string ns = to_string(ni); //make the numerator to string
  string ds = to_string(di); //make the denominator to string
  return (ns+"/"+ds); //return the output
}

string multiplyFraction(int n1,int d1,int n2,int d2){
  int n,d; //initialize the n and d
  n = n1*n2; //multiply them
  d = d1*d2;
  int ni = n, di = d, i = n+1; //value for simplification
  while (n%i!=0 || d%i!=0){ //simplify the fraction
      i--;
      ni = n/i;
      di = d/i;
  }
  string ns = to_string(ni); //make the numerator to string
  string ds = to_string(di); //make the denominator to string
  return (ns+"/"+ds); //return the output
}

string divideFraction(int n1,int d1,int n2,int d2){
  int n,d; //initialize the n and d
  d = n2*d1; //multiply them
  n = n1*d2;
  int ni = n, di = d, i = n+1; //value for simplification
  while (n%i!=0 || d%i!=0){ //simplify the fraction
      i--;
      ni = n/i;
      di = d/i;
  }
  string ns = to_string(ni); //make the numerator to string
  string ds = to_string(di); //make the denominator to string
  return (ns+"/"+ds); //return the output
}

int main() {
  int ans,n1,d1,n2,d2;
  cout << "Choose an option:\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n";
  cout << "Option: ";
  cin>>ans;
  
  cout<<"Enter the first numerator:";
  cin>>n1;
  cout<<"Enter the first denominator:";
  cin>>d1;
  cout<<"Enter the first numerator:";
  cin>>n2;
  cout<<"Enter the first dennominator:";
  cin>>d2;

  if (ans == 1){
    cout<<addFraction(n1,d1,n2,d2);
  }
  else if(ans == 2){
    cout<<subtractFraction(n1,d1,n2,d2);
  }
  else if(ans == 3){
    cout<<multiplyFraction(n1,d1,n2,d2);
  }
  else if(ans == 4){
    cout<<divideFraction(n1,d1,n2,d2);
  }
  else{
    cout<<"Invalid Number";
  }
  return 0;
}