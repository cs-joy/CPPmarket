#include<iostream>
#include<string>
#include<ctime>
#include<ctype.h>
#include<conio.h>
#include<windows.h>

using namespace std;

// global identifiers ofr validation
int numUpper = 0, numLower = 0, numNumber = 0, validation = 0;
string login_sign, parol_sign;

// identifires for file handling
string memoryName, memoryLogin, memoryParol, memoryPhone;

class Validation_C
{
    private:
        // identifires
        string Name, Login, Parol, PhoneNumber;
    
    public:
        Validation_C()
        {
            Name = "";
            Login = "";
            Parol = "";
            PhoneNumber = "";
        }

        // Display User INFO
        void Display()
        {
            cout << "\t\t\tUser Information :" << endl;
            cout << "\t\tUser Name : " << Name << endl;
            cout << "\t\tPhone Number : " << PhoneNumber << endl;
            cout << "\t\tLogin : " << Login << endl;
            cout << "\t\tPassword : " << Parol << endl;
        }

        // set info of user
        void setUser()
        {
            cout << "\t\t\t Register User :" << endl << endl;
            cout << "\t\t\t User Name    : "; cin >> Name;
            cout << "\t\t\t Phone Number : "; cin >> PhoneNumber;
            cout << "\t\t\t Login        : "; cin >> Login;
            cout << "\t\t\t Password     : "; cin >> Parol;

            // info sended to memory
            //memoryName, memoryLogin, memoryParol, memoryPhone;
            memoryName = Name;
            memoryParol = Parol;
            memoryLogin = Login;
            memoryPhone = PhoneNumber;
        }

        // Friend Functions
        // Validation check for parol
        friend void validationParol(Validation_C User)
        {
            if(User.Parol.length() >= 6 && User.Parol.length() <= 15)
            {
                for(int i = 0; i < User.Parol.length(); i++)
                {
                    if(isupper(User.Parol[i])) // number of upper letters
                    {
                        numUpper += 1;
                    }

                    if(islower(User.Parol[i])) // number of lower letters
                    {
                        numLower += 1;
                    }

                    if(isdigit(User.Parol[i])) // number of digits
                    {
                        numNumber += 1;
                    }
                }

                if(numUpper >= 1 && numUpper <= 10 && numLower >=4 && numLower <= 10 && numNumber >= 2 && numNumber <= 10)
                {
                    validation++;
                    numUpper = 0;
                    numLower = 0;
                    numNumber = 0;
                }
                else
                {
                    numUpper = 0;
                    numLower = 0;
                    numNumber = 0;
                }
            }
            else
            {
                numUpper = 0;
                numLower = 0;
                numNumber = 0;
            }
        }

        friend void validationName(Validation_C User)
        {
            if(User.Name.length() >= 1 && User.Name.length() <= 15)
            {
                for(int i = 0; i < User.Name.length(); i++)
                {
                    if(isupper(User.Name[i]))
                    {
                        numUpper += 1;
                    }

                    if(islower(User.Name[i]))
                    {
                        numLower += 1;
                    }

                    if(isdigit(User.Name[i]))
                    {
                        numNumber += 1;
                    }
                }

                if(numUpper <= 1 && numLower >= 1 && numLower <= 14 && numNumber == 0)
                {
                    validation++;
                    numUpper = 0;
                    numLower = 0;
                    numNumber = 0;
                }
                else
                {
                    numUpper = 0;
                    numLower = 0;
                    numNumber = 0;
                }
            }
            else
            {
                numUpper = 0;
                numLower = 0;
                numNumber = 0;
            }
        } 

        // validation check for phone number
        friend void validationPhoneNumber(Validation_C User)
        {
            if(User.PhoneNumber.length() >= 9 && User.PhoneNumber.length() <= 12)
            {
                for(int i = 0; i < User.PhoneNumber.length(); i++)
                {
                    if(isupper(User.PhoneNumber[i]))
                    {
                        numUpper += 1;
                    }

                    if(islower(User.PhoneNumber[i]))
                    {
                        numLower += 1;
                    }

                    if(isdigit(User.PhoneNumber[i]))
                    {
                        numNumber += 1;
                    }
                }

                if(numUpper == 0 && numLower == 0 && numNumber >= 9 && numNumber <= 12)
                {
                    validation++;
                    numUpper = 0;
                    numLower = 0;
                    numNumber = 0;
                }
                else
                {
                    numUpper = 0;
                    numLower = 0;
                    numNumber = 0;
                }
            }
            else
            {
                numUpper = 0;
                numLower = 0;
                numNumber = 0;
            }
        }
};