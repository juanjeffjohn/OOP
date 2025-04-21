# include "Cylinder.h"

int main(){
    Cylinder c;

    cin >> c;
    cout << fixed <<std::setprecision(3) <<"Circumference: "<< c.Circumference() << endl << "SurfaceArea: " << c.SurfaceArea() << endl << "Volume: "<< c.Volume()<<endl;

    return 0;
}
