#include <iostream>
using namespace std;

int main()
{
    float annualSalary;
    cout << " Please enter your Annual Salary " << endl;
    cin >> annualSalary;
    float monthlySalaray = annualSalary / 12;
    cout << " Your monthly salary is = " << monthlySalaray << endl;
    
    float Salaryintenyears = annualSalary * 10;


    bool doAgain = true;
    while (doAgain)
    {
        char c;
        cout << " Do you want to know what you will earn in the next 10 years [y/n]" << endl;
        cin >> c;
        if (c == 'y')
        {
            
            cout << "You Have earned this much in ten years " << Salaryintenyears << endl;
           doAgain = false;
        }
        else if (c == 'n')
        {
            cout << "Please press enter for the program to exit" << endl;
            doAgain = false;
        }
        else
        {
            cout << "Only 'y' or 'n' accepted!" << endl;
        }
    }
    
    
    bool againdo = true;
        while (againdo)
        {
            char k;
            cout << " Do you want to know what you will earn in 10 years with tax [y/n] " << endl;
                cin >> k;
                if (k == 'y')
                {
                    double result, rate;


                    cout << "Enter your tax rate in %: " << endl;
                    cin >> rate;

                    result = rate * annualSalary /100 *12 ;
                cout << "You will earn = " << result << endl;
                cout << "Please press enter for the program to exit" << endl;
                againdo = false;
                }

                else if (k == 'n')
                {
                    cout << "Please press enter for the program to exit" << endl;
                    againdo = false;


                }
                    
        
        }
    exit;
    
   return 0;
}
