#include<iostream>
#include<string>

using namespace std;

class Vechile 
  {
        public:
        void Vechile_Info()
        {cout<<"Its a Vechile"<<endl;}
  };

class Car : public Vechile
  {
        public:
        void Car_Info()
        {cout<<"Its a Car"<<endl;}
   };

class ElectricCar : public Car
  {
        public:
        void ElectricCar_Info()
        {cout<<"Its a ecelctric car"<<endl;}
    };

int main()
  {
        ElectricCar E;
        E.ElectricCar_Info();
        E.Car_Info();
        E.Vechile_Info();

        return 0;
   }

