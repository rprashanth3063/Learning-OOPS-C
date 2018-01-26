#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
        /***** Complete this program. *****/
double pi= 4*atan(1);
    cout.precision(16);
    cout << "pi   = " << pi << " = 4*arctan(1)" << endl;

    cout << endl;
    cout << "Ramanujan's pi formulas:" << endl;
///Ramanujan's formulae////////////////////////////////////////////////////////////////////
    double pi15=(12/sqrt(130))*log(((2+sqrt(5))*(3+sqrt(13)))/sqrt(2));
    cout.precision(16);
    cout<<"pi15 = "<<pi15<<endl;

    double pi16=(24/sqrt(142)*log(sqrt((10+(11*sqrt(2)))/4)+sqrt((10+(7*sqrt(2)))/4)));
    cout<<"pi16 = "<<pi16<<endl;

    double pi18=(12/sqrt(190))*log((2*sqrt(2)+sqrt(10)) * (3+sqrt(10)));
    cout<<"pi18 = "<<pi18<<endl;

    double pi22=(12/sqrt(310))*log(((3+sqrt(5))*(2+sqrt(2))*((5+2*sqrt(10))+sqrt(61+20*sqrt(10))))/4);
    cout<<"pi22 = "<<pi22<<endl;

    double pi31=(4/sqrt(522))*log(pow(((5+sqrt(29))/sqrt(2)),3)*((5*sqrt(29))+(11*sqrt(6)))*pow(((sqrt((9+(3*sqrt(6)))/4))+(sqrt((5+(3*sqrt(6)))/4))),6));
    cout<<"pi31 = "<<pi31<<endl;
    cout<<endl;
////////////////////////////////////////////////////////////////////////////////////////////
float eulerpisquareby6=(pi*((pi/6)));
 	cout.precision(8);
    cout << "Euler's infinite sum for pi*pi/6 = " << eulerpisquareby6<< endl;

float convergedvalue=0;
int i=0;
    for (i=1;i<=10000;i++){
    	convergedvalue+=(1/pow(i,2));
    }

    cout << "                      Converged to " << convergedvalue
             << " after " << i << " iterations" << endl;
    cout<<endl;
float eulerestimate=sqrt(convergedvalue*6);
float error=pi-eulerestimate;

cout << "Euler's estimate for pi = " << eulerestimate << endl;
	cout << "                  error = " << error<<endl;
}