#include <iostream>
using namespace std;

double conversion(double);
float conversion(float);
int conversion(int);

int main(){

    cout<<"Hasil konversi Fahrenheit ke Celcius: "<<conversion(213.8)<<endl;
    cout<<"Hasil konversi Fahrenheit ke Celcius: "<<conversion(92.6)<<endl;
    cout<<"Hasil konversi Fahrenheit ke Celcius: "<<conversion(123)<<endl;

    return 0;
}
double conversion(double f){
    return ((f-32.0)*0.55);
}
float conversion(float f){
    return ((f-32.0)*0.55);
}
int conversion(int f){
    return ((f-32.0)*0.55);
}
