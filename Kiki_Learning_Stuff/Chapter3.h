#ifndef CHAPTER_3_H__
#define CHAPTER_3_H__

#include "std_lib_facilities.h"

namespace chapter3
{
    void subChapter3()
    {
        cout << "Please enter your name and age:\n";
        string first_name;
        double age;
        cin >> first_name;
        cin >> age;
        cout << "Hello," << first_name << "(age: " << age * 12 << " months)\n";
    }

    void subChapter4()
    {
        cout << "Please enter a floating point value:\n";
        double d;
        cin >> d;
        cout << "\n value --> " << d;
        cout << "\n d+1 --> " << d + 1;
        cout << "\n d three times --> " << d * 3;
        cout << "\n twice d --> " << d + d;
        cout << "\n squared d --> " << d*d;
        cout << "\n half of d --> " << d / 2;
        cout << "\n square root of d --> " << sqrt(d);
        cout << endl;

        cout << "Please enter your first and second name:\n";
        string first;
        string second;
        cin >> first >> second;
        if (first == second)
            cout << "That is the same name twice!\n";
        if (first<second)
            cout << first << " is alphabetically before " << second << "\n";
        if (first>second)
            cout << first << " is alphabetically after " << second << "\n";
        string name = first + ' ' + second;
        cout << "\n Hello " << name << "!" << "\n";
    }

    void subChapter5()
    {
        string previous = "";
        string current;
        while (cin >> current){
            if (previous == current)
            {
                cout << "repeated word: " << current << "\n";
            }
            previous = current;
        }
    }

    void lastSubChapter()
    {
        double d = 0;
        while (cin >> d)
        {
            int i = d; //assigning a 64bit double floating point precision number to a 32 bit integer. Loss of fractioanl part ( after , ) and possible loss of integral part.
            char c = i; //assigning a 32 bit integer to a 8 bit char anything over 128 is lost, anything below -127 is lost!
            int i2 = c;
            cout << "d==" << d;
            cout << "i==" << i;
            cout << "i2==" << i2;
            cout << "char(" << c << ")\n";
        }
    }

    void exerciseOne()
    {
        cout << "Enter the name of the person you want to write to:\n";
        string first_name;
        cin >> first_name;
        cout << "Dear " << first_name << ",\n";
        cout << "How are you? I am fine,I miss you.\n";

        cout << "--------------------------------\n";

        cout << "Enter a friend's name:\n";
        string friend_name;
        cin >> friend_name;
        cout << "Have you seen " << friend_name << " lately?\n";

        cout << "--------------------------------\n";

        char friend_sex = '0';
        cout << "Please enter m for male or f for female:\n";
        cin >> friend_sex;

        if (friend_sex == 'm')
        {
            cout << "If you see " << friend_name << " please ask him to call me!\n";
        }
        else if (friend_sex == 'f')
        {
            cout << "If you see " << friend_name << " please ask her to call me!\n";
        }
        cout << "--------------------------------\n";

        cout << "Please enter the age of the recepient: \n";
        int age;
        cin >> age;
        if ((age <= 0) || (age >= 110))
        {
            cout << "YOU'RE KIDDING!!\n";
        }
        else
        {
            cout << "I hear you just had a birthday and you are " << age << " years old.\n";
        }

        if ((age > 1) && (age < 12))
        {
            cout << "Next year you will be " << age + 1 << ".\n";
        }
        if (age == 17)
        {
            cout << "Next year you will be able to vote.\n";
        }
        if (age > 70)
        {
            cout << "I hope you enjoy retirement!\n";
        }

        cout << "Yours sincerely,\n\n\n";
        cout << "kiki\n";
    }

    void convertMiles()
    {
        cout << "Please enter a number for miles \n";
        double miles;
        cin >> miles;
        cout << "You typed " << (miles * 1.609) << " kilometers\n";
    }

    void mathProblem()
    {
        cout << "Enter two integer values\n";
        int val1;
        int val2;
        cin >> val1 >> val2;

        if (val1 < val2){
            cout << val1 << " is the smallest number and " << val2 << "is the largest.\n";
        }
        else {
            cout << val2 << " is the smallest number and " << val1 << "is the largest.\n";

        }

        cout << "Their sum is: " << val1 + val2 << "\n";


        int temp;
        if (val1 < val2){
            temp = val2 - val1;
        }
        else
        {
            temp = val1 - val2;
        }

        cout << "Their difference is: " << temp << "\n";

        cout << "Their product is: " << val1*val2 << "\n";
    }
}

#endif