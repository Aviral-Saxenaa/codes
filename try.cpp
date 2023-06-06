#include <bits/stdc++.h>
using namespace std;

class aa{
   int a,b,c;

   public:
      aa(int A,int B){
         a=A;
         b=B;
      }
      aa(aa &z){
         a=z.a;
         b=z.b;

      }
      void getdata();
};

void aa :: getdata(){
   cout<<"a is "<<a;
   cout<<"b is "<<b;
   cout<<"c is "<<c;
}

int main()
{
   
   aa obj(1,2);
   obj.getdata();                                        
   aa obj2(obj);
   obj2.getdata();
   // obj.get();

return 0;
}
