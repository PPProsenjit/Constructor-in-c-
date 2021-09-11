#include <iostream>
#include<math.h>
using namespace std;

class Triangle{
public:
      int len, wid, high;

    Triangle(int i, int j, int k)
    {
        len = i;
        wid = j;
        high = k;

    }
    void area()
    {
        float s = (len + wid + high)/2.0;
        float A = sqrt(s*(s-len)*(s - wid)*(s - high));
        cout<<"Area = "<<A<<endl;
    }
    void perimeter()
    {
        cout<<"perimeter = "<<len+wid+high<<endl;
    }
    ~Triangle()
    {
        cout<<"This is destructor"<<endl;
    }


};

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
   Triangle ob(a, b, c);

    ob.area();
    ob.perimeter();

    return 0;
}


