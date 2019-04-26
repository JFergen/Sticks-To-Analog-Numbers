#include <iostream>
using namespace std;

string getSmallest (int n);
string getLargest(int n);

int main()
{
    int userChoice;
    string smallest; // Smallest number in form of a string
    string largest; // Largest number in form of a string
    
    cout << "Enter the number of sticks that you have [2-100]:";
    cin >> userChoice;
    
    while(userChoice < 2 || userChoice > 100) // Making sure number is = [2-100]
    {
        cout << "Try again. Number of sticks must be between 2 and 100:";
        cin >> userChoice;
    }
    cout << endl;
    
    smallest = getSmallest(userChoice); // Gets the smallest number
    largest = getLargest(userChoice); // Gets the largest number
    
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
    
    return 0;
}

string getSmallest(int n)
{
    int userNum = n; // This is just so I can change the number in function without changing user's choice
    string smallNum; // This is the string that is returned after pushing back numbers
    
    switch(userNum)
    {
        case 2:
            return "1";
        case 3:
            return "7";
        case 4:
            return "4";
        case 5:
            return "2";
        case 6:
            return "6";
        case 7:
            return "8";
    }
    
    while(userNum != 0)
    {
        if(userNum >= 7)
        {
            userNum -= 7;
            smallNum += "8";
        }
        if(userNum >= 6)
        {
            userNum -= 6;
            //smallNum.at(s)
        }
    }
}

string getLargest(int n)
{
    int userNum = n; // This is just so I can change the number in function without changing user's choice
    string largeNum; // This is the string that is returned after pushing back numbers
    
    if(userNum == 2)
    {
        return "1";
    }
    
    while(userNum != 0)
    {
        if(userNum == 3)
        {
            largeNum.insert(0, "7"); // Adds a "7" to the front of the number
            return largeNum;
        }
        
        userNum -= 2;
        largeNum += "1";
    }
    return largeNum;
}