//
//  main.cpp
//  Knowledge Engineering for Nutrition Deficiency
//
//  Created by Ahsan Virk on 5/24/21.
//

#include "Skin.h"
#include "Bones.h"
#include "Hair.h"
#include "Eyes.h"

using namespace std;
int main()
{
    //--------  Disclaimer and continuing to the program ----------------------------------------------------------------------------------
    int cntnu;
    
    cout << "Disclaimer: Ask your doctor before taking any vitamins as this is not an official test." << endl;
    
    
    while(1) // KEEPS GOING UNTIL BREAK
    {
        cout << endl << "Do you wish to continue? (1 for yes | 2 for no)" << endl;
        cin >> cntnu;
        if(cntnu==1 || cntnu ==2)
            break;
        cout << "Invalid Entry!" << endl << endl;
    }
    
    
    if(cntnu == 1) // Choice 1 means continue with the program
    {
        int choice;
        while(1) // LOOP UNTIL BREAK
        {
            cout << "What has been bothering you? (1-Skin | 2-Bones/Joints/Muscles | 3-Eyes | 4-Hair)" << endl;
            cin >> choice;
            if(choice == 1 ||choice == 2 ||choice == 3 ||choice == 4) break;
            cout << "Invalid Entry!" << endl << endl;
        }
        
        if(choice == 1)
        {
            Skin sk; // CREATING INSTANCE OF SKIN CLASS
            sk.display(); // CALLING SKIN CLASS
        }
        else if(choice ==2)
        {
            Bone bn; // CREATING INSTANCE OF BONE CLASS
            bn.display(); // CALL BONE CLASS
        }
        else if(choice == 3)
        {
            Hair hr; // CREATING INSTANCE OF HAIR CLASS
            hr.display(); // CALLING HAIR CLASS
        }
        else if(choice == 4)
        {
            Eyes eye; // CREATING INSTANCE OF EYE CLASS
            eye.display(); // CALLING EYE CLASS
        }

    }
    else if(cntnu == 2) // ENDS PROGRAM WITH CHOICE 2
    {
        cout << "Thank you for your time." << endl;
    }
        
    return 0;
}
