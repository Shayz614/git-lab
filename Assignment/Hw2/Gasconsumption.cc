#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    float mileageX = 22.5;
    float mileageY = 29.5;

    float milesinTown;
    float milesonHighway;

    cout << "Enter the number of miles travelled in Town: " << endl;
    cin >> milesinTown;
    cout << "\n ";

    cout << "Enter number of miles travelled on the Highway: " << endl;
    cin >> milesonHighway;
    cout << "\n ";

    if (milesinTown < 0 || milesonHighway < 0) {

        cout << "Error: Number of miles driven in town cannot be negative" << endl;

        exit (0);

    }else{

    cout << "The number of miles driven in town: " << milesinTown << " miles." << endl;
    

    float gasX = milesinTown/mileageX ;
    cout << "The gas consumption for town driving: " << gasX << " gallons." << endl;
    

    cout << "The number of miles driven on the highway: " << milesonHighway << " miles." << endl;
    

    float gasY = milesonHighway/mileageY ;
    cout << "The gas consumption for highway driving: " << gasY << " gallons." <<endl;
    

    float totalx = milesinTown + milesonHighway ;
    cout << "The total miles driven: " << totalx << " miles." <<endl;
    

    float totaly = gasX + gasY ;
    cout << "The total gas consumption: " << totaly << " gallons." <<endl;
    

    float avg = (milesinTown + milesonHighway)/totaly;
    cout << "The average mpg for the trip: " << avg << " miles/gallons." << endl;
    }
return 0;
}