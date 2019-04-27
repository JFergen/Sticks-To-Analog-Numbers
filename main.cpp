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
    int numNumbers = (n / 7) + 1; // This should be the amount of numbers in final number
    int numRemainder = n % 7;
    
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
        switch(numRemainder)
        {
            case 0:
                numNumbers--;
                for(int i = 0; i < numNumbers; i++)
                {
                    userNum -= 7;
                    smallNum += "8";
                }
                break;
            case 1:
                userNum -= 2;
                smallNum += "1";
                
                userNum -= 6;
                smallNum += "0";
                
                for(int i = 0; i < numNumbers - 2; i++)
                {
                    userNum -= 7;
                    smallNum += "8";
                }
                break;
            case 2:
                userNum -= 2;
                smallNum += "1";
        
                for(int i = 0; i < numNumbers - 1; i++)
                {
                    userNum -= 7;
                    smallNum += "8";
                }
                break;
            case 3:
                if(userNum == 10)
                {
                    return "22";
                }
                
                userNum -= 5;
                smallNum += "2";
                
                userNum -= 6;
                smallNum += "0";
                
                userNum -= 6;
                smallNum += "0";
                
                for(int i = 0; i < numNumbers - 3; i++)
                {
                    userNum -= 7;
                    smallNum += "8";
                }
                break;
            case 4:
                userNum -= 5;
                smallNum += "2";
        
                userNum -= 6;
                smallNum += "0";
        
                for(int i = 0; i < numNumbers - 2; i++)
                {
                    userNum -= 7;
                    smallNum += "8";
                }
                break;
            case 5:
                userNum -= 5;
                smallNum += "2";
        
                for(int i = 0; i < numNumbers - 1; i++)
                {
                    userNum -= 7;
                    smallNum += "8";
                }
                break;
            case 6:
                userNum -= 6;
                smallNum += "6";
        
                for(int i = 0; i < numNumbers - 1; i++)
                {
                    userNum -= 7;
                    smallNum += "8";
                }
                break;
        }
    }
    
    return smallNum;
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