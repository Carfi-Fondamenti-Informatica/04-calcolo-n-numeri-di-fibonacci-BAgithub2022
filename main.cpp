#include <iostream>
using namespace std;

int main() {
   int n=0;
   int a=0,b=1,risult=0;
   std::cin>>n;
   if (n>=2){
      std::cout << "i primi"<<" "<<n<<" "<<"numeri della serie di Fibonacci" << std::endl;
      std::cout<<1<<std::endl;
      for (int i = 1; i < n; ++i) {
          risult=a+b;
          a=b;
         b=risult;
         std::cout<<risult<<std::endl;
         }
      } else{
      std::cout<<"errore"<<std::endl;
     } 
   return 0;
}
