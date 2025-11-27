   #include <iostream>
   using namespace std;
   int main(){
   int i, n, marks;
   int sum=0;
   cout<<"Enter the number of marks you want to sum: ";
   cin>>n;
   for(i=0;i<n;i++){
   	cout<<"Enter mark: ";
   	cin>>marks;
   	cout<<endl;
   	sum=sum+marks;
   	cout<<sum;
   	cout<<""<<"\n";
   }
}

