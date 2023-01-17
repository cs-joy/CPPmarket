
/*
USER Registration - Name, Phone Number, 
class User which takes the values of products which a specific user has bought
*/

#pragma once
#include<iostream>
#include<string>
#include<ctime>
#include<ctype.h>
#include<conio.h>
#include<windows.h>
#include<fstream>
#include<iomanip>

class Person
{
    protected:
        std::string name;
        std::string phone;

    public:
        // Constructor for Person Class
        Person(std::string name, std::string phone)
        {
            this->name = name;
            this->phone = phone;
        }

        // pure virtual function 'Display'
        virtual void Display() = 0;
};


/*
 Sub class of Person
*/
class Security : public Person
{
    protected:
        std::string login;
        std::string password;
    
    public:
        // Constructor for Security class
        Security(std::string name, std::string phone, std::string login, std::string password) : Person(name, phone)
        {
            this->login = login;
            this->password = password;
        }
};


// first sub class of Security
class User : public Security
{
    public:
        // storage
        int _product1User1 = 0, _product1User2 = 0, _product1User3 = 0;
        int _product2User1 = 0, _product2User2 = 0, _product2User3 = 0;
        int _product3User1 = 0, _product3User2 = 0, _product3User3 = 0;

        // Constructor for User's sign up
        User(std::string name, std::string phone, std::string login, std::string password) : Security(name, phone, login, password)
        {
            this->name = name;
            this->phone = phone;
            this->login = login;
            this->password = password;
        }

        // get Name of User
        std::string getName()
        {
            return name;
        }

        // get phone number of User
        std::string getPhone()
        {
            return phone;
        }

        // get login of User
        std::string getLogin()
        {
            return login;
        }

        // get password of User
        std::string getPassword()
        {
            return password;
        }

        // Display Info
        void Display()
        {
            std::cout << "\t\tName     :  " << name << std::endl;
            std::cout << "\t\tPhone    :  " << phone << std::endl;
            std::cout << "\t\tLogin    :  " << login << std::endl;
            std::cout << "\t\tPassword :  " << password << std::endl;
        }
};


// second sub class of Security
class Owner : public Security
{
    public:
        // Constructor for User's sign up
        Owner(std::string name, std::string phone, std::string login, std::string password) : Security(name, phone, login, password) {}

        // get Name of User
        std::string getName()
        {
            return name;
        }

        // get Phone of User
        std::string getPhone()
        {
            return phone;
        }

        // get Login of User
        std::string getLogin()
        {
            return login;
        }

        // get Password of User
        std::string getPassword()
        {
            return password;
        }

        // Display Info
        void Display()
        {
            std::cout << "\t\tName     :  " << name << std::endl;
            std::cout << "\t\tPhone    :  " << phone << std::endl;
            std::cout << "\t\tLogin    :  " << login << std::endl;
            std::cout << "\t\tPassword :  " << password << std::endl;
        }
};