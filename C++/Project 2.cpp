#include <iostream>
using namespace std;

const int allowance = 3;                                        // declaring allowance constant
int main()
{
    int i = 0;                                                  // declaring while loop counter
    float salary[15], KM[15], OThours[15], sundry[15];          // declaring real arrays
    float totalsalary[15], OTpay[15], OTcalc[15], KMpay[15];    // declaring real arrays
    string employee[15];                                        // declaring string array

    cout << "Welcome to Bakwena Logistics Program\n";

    while (i <= 14){                                            // while loop initialising to loop 15 times
        salary[i] = 0;
        KM[i] = 0;
        OThours[i] = 0;
        sundry[i] = 0;
        totalsalary[i] = 0;
        OTpay[i] = 0;
        OTcalc[i] = 0;                                          // initalising all values in particular array

        cout << "Enter employee name: \n";
        cin >> employee[i];                                     // employee name input
        cout <<"Enter basic salary:\n";
        cin >> salary[i];                                       // employee salary input
        cout << "KM covered:\n";
        cin >> KM[i];                                           // employee distance travelled to work input
        cout << "Enter hours overtime: \n";
        cin >> OThours[i];                                      // employee overtime hours input
        cout << "Sundry contributions?\n";
        cin >> sundry[i];                                       // employee sundry contributions input

        OTcalc[i] = 1.5*(salary[i]/(8*21));                     // overtime rate calculation
        OTpay[i] = OThours[i] * OTcalc[i];                      // overtime pay calculation

        KMpay[i] = KM[i] * allowance;                           // travel allowance calculation

        totalsalary[i] = salary[i] + OTpay[i] + KMpay[i] + sundry[i];   // total salary calculation

        cout << "Employee Name: " << employee[i] << endl;               // displaying employee's name
        cout << "Total salary: " << totalsalary[i] << endl <<endl;      // displaying total employee's salary

        i++;                                                    // counter increment
    }

    return 0;
}
