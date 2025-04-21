# include "Cylinder.h"

int main(){
    Cylinder c;

    cin >> c;
    int new_feature = 0;
    cout << fixed <<std::setprecision(3) <<"Circumference: "<< c.Circumference() << endl << "SurfaceArea: " << c.SurfaceArea() << endl << "Volume: "<< c.Volume()<<endl;

    return 0;
}
