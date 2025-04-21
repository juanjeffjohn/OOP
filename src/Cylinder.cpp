# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <math.h>
 
double Cylinder :: SurfaceArea(){
    double m, ll;
    
    double pi = M_PI;
    m = pi*2*radius*radius;
    ll = pi*2*radius*height; 
    return  m + ll;
}

double Cylinder :: Volume(){
    double pi = M_PI;
    return pi*radius*radius*height;
}

double Cylinder :: Circumference(){
    double pi = M_PI ;  
    return pi*2*radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed <<std::setprecision(3) << cldr.radius << cldr.height;
    return out;
}

# endif
