//
//  Hair.h
//  Knowledge Engineering for Nutrition Deficiency
//
//  Created by Ahsan Virk on 5/24/21.
//

#ifndef Hair_h
#define Hair_h

#include <iostream>
using namespace std;

class Hair // CREATING HAIR CLASS
{
    private:
        int vitD=0; // CREATING INT FOR VITAMIN D
        int vitE=0; // CREATING INT FOR VITAMIN E
        int vitB7=0; // CREATING INT FOR VITAMIN B7
        int vitB9=0; // CREATING INT FOR VITAMIN B9
    public:
        void display()
        {
            int choice;
            /**********************  FIRST QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you often get sick or infected? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitD++;}
            /**********************  SECOND QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Is your exposure to sunlight limited? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitD++;}
            /**********************  THIRD QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you have vision problems? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitE++;}
            /**********************  FOURTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you have loss of muscle mass? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitE++;}
            /**********************  FIFTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do your gums bleed? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB7++;}
            /**********************  SIXTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you get dandruff? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB7++;}
            /**********************  SEVENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Did you, or do you, have gray hair before age 21? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB9++;}
            /**********************  EIGHTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you get mouth sores? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB9++; vitB7++;}
            
            int max = 0;
            if(vitD>max) {max=vitD;}
            if(vitB7>max) {max=vitB7;}
            if(vitE>max) {max=vitE;}
            if(vitB9>max) {max=vitB9;}
            
            cout << endl;
            
            if(max == vitD) {cout << "The vitamin that you need is Vitamin D. \nSome other vitamins that might be good for you are Vitamin B7, Vitamin E, Vitamin B9 \n";}
            else if(max == vitB7) {cout << "The vitamin that you need is Vitamin B7. \nSome other vitamins that might be good for you are Vitamin D, Vitamin E, Vitamin B9 \n";}
            else if(max == vitE) {cout << "The vitamin that you need is Vitamin E. \nSome other vitamins that might be good for you are Vitamin D, Vitamin B7, Vitamin B9 \n";}
            else if(max == vitB9) {cout << "The vitamin that you need is Vitamin B9. \nSome other vitamins that might be good for you are Vitamin D, Vitamin B7, Vitamin E \n";}
            
        }
};
#endif /* Hair_h */
