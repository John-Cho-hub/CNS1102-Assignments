 
   #include <iostream>
   #include <cmath>
   using namespace std;
      int sum(int a, int b){
   int add;
   add=a+b;
   return add;
   }
   double mul(double c,double d){
   double product;
   product=c*d;
   return product;
   }
   double div(double e, double f){
   double ans;
   ans=e/f;
   return ans;
   }
   int mod(int a, int b){
   int h;
   h=a%b;
    return h;
    
   }
    int sq(int a){
       int squared;
       squared=a*a;
       return squared;
    }
    int sub(int a,int b){
      int tans;
      tans=a-b;
      return tans;
    
   }
    int main(){
    double a,b;
    int n;
    
   cout<<"option 1=addition"<<endl;
    cout<<"option 2=multiplication"<<endl;
    cout<<"option 3=division"<<endl;
    cout<<"option 4=modulo"<<endl;
    cout<<"option 5=square a number"<<endl;
    cout<<"option 6=subtraction"<<endl;
    cout<<"option 7=square root"<<endl;
    cout<<"enter number of operation you want to perform:"<<endl;
    cin>>n;
    switch(n){
    case 1:
    cout<<"enter value for a"<<endl;
    cin>>a;
    cout<<"enter value for b"<<endl;
    cin>>b;
    cout<<"the sum is="<<sum(a,b);
    break;
    case 2:
    cout<<"enter value for a:"<<endl;
    cin>>a;
    cout<<"enter value for b:"<<endl;
    cin>>b;
    cout<<"the product is= "<<mul(a,b);
    break;
    case 3:
    cout<<"enter value for a:"<<endl;
    cin>>a;
    cout<<"enter value for b:"<<endl;
    cin>>b;
        cout<< "the answer for the division is:"<<div(a,b)<<endl;
    break;
    case 4:
    cout<<"enter value for a:"<<endl;
    cin>>a;
    cout<<"enter value for b:"<<endl;
    cin>>b;
  cout<<"the answer for the modulo is="<<mod(a,b);
   break;
    case 5:
                    cout<<"enter number you wish to square:"<<endl;
                    cin>>a;
                    cout<<"the square of this number is = "<<sq(a);
                    break;
                case 6:
                    cout<<"enter the number you want to subtract from:"<<endl;
                    cin>>a;
                    cout<<"enter the number to be subtracted:"<<endl;
                    cin>>b;
                    cout<<"the answer is ="<<sub(a,b);
                    break;
                case 7:
                    cout<<"enter the number you wish to find the square root of"<<endl;
                    cin>>a;
                    cout<<"the square root of this number is="<<sqrt(a);
                    break;
    default:
    cout<<"enter a valid option";
    
   }
    return 0;
    
   }
   