   #include <iostream>
   using namespace std;
   int main(){
   int n,i;
     cout<<"enter the range:";
     cin>>n;
     for(i=1;i<=n;i++){
       if(i%2==0){
           cout<<i<<",\n";
       }
   
     }
     return 0;
   }