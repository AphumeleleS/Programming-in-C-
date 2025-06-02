#include <iostream>
using namespace std;

float student[10];                                              // declaring student array

int main()
{

    int highest = 0;                                            // declaring variables
    float average, total = 0 ;                                  // declaring variables


    cout << "Welcome to Thoyandou School Program\n";

    for (int i = 0; i <= 9; i++)
    {
        cout << "Input mark for Learners "<<i+1<<":\n";           // prompts user to input learners' marks
        cin >> student[i];                                      // 1.1 input for learners marks
        if (student[i] > highest) highest = student[i];         // 1.2 loop which determines highest mark
        total = total + student[i];                             // calculating the total mark which
                                                                // will then be used to determine average
    }

    average = total/10;                                         // 1.3 average calculation

    cout << "\nThe class average mark is: " << average << "%\n";// 1.4 displaying output
    cout << "The highest mark is: " << highest <<"%\n";         // 1.4 displaying output

    return 0;
}
