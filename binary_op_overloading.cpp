//binary operator overloading

#include<iostream>
using namespace std;
class bin
{
    int x,y;
    public:
    void getdata()
    {
        cout<<"Enter the values of x & y = ";
        cin>>x>>y;
    }

    bin operator +(bin &a)
    {
      bin temp;
      temp.x= x+ a.x;
      temp.y= x+ a.y;

      return temp;

    }
    void show()
    {
        cout<<"\nThe value after addition x = "<<x<<" y= "<<y;
        
    }
};
int main()
{
    
bin obj1,obj2,obj3;
obj1.getdata();
obj2.getdata();
obj3 = obj1+obj2;
obj3.show();

return 0;
}