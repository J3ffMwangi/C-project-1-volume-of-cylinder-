#include<iostream>
#include<cmath>
using namespace std;

float addition(int x, int y){
      int sum;
      sum=x+y;
      return sum;
}

float simple_interest(int principle, float rate, float time){
    float interest;
    interest=principle*rate*time;
    return interest;
}

float area_rectangle(float length, float width){
    float area;
    area= length * width;
    return area;
}

int main(){
    int sum=addition(10,20);
    int sum1=addition(30,70);
    float interest=simple_interest(5000,0.2,4);

    std::cout<<"sum:"<<sum<<endl;
    std::cout<<"sum1:"<<sum1<<endl;
    std::cout<<"interest:"<<sum<<endl;

    return 0;
}
