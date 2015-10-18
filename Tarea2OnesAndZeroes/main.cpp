//
//  main.cpp
//  Tarea2OnesAndZeroes
//
//  Created by Zareek Galvan on 8/13/15.
//  Copyright (c) 2015 Zareek Galvan. All rights reserved.
//

#include <iostream>

using namespace std;

//=======================================================================================================================
int intCharRemaining(string strSequence)
{
    for (int intPosition = 1; intPosition < strSequence.length() + 1; intPosition++)
    {
        if (
            (strSequence[intPosition] == '0' && strSequence[intPosition - 1] == '1') ||
            (strSequence[intPosition] == '1' && strSequence[intPosition - 1] == '0')
            )
            
        {
            strSequence.erase(intPosition - 1, 2);
            intPosition -= 2;
        }
        if (intPosition < 0)
        {
            intPosition = 0;
        }
    }
    return (int)strSequence.length();
}

//=======================================================================================================================

int main()
{
    int intLength;
    string strSequence;
    cin >> intLength >> strSequence;
    cout<<intCharRemaining(strSequence)<<endl;
}
