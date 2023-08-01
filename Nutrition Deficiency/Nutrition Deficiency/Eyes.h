//
//  Eyes.h
//  Knowledge Engineering for Nutrition Deficiency
//
//  Created by Ahsan Virk on 5/24/21.
//

#ifndef Eyes_h
#define Eyes_h

#include <iostream>
using namespace std;

class Eyes // CREATING CLASS FOR EYES
{
    private:
        int vitA=0; // CREATING INT FOR VITAMIN A
        int vitC=0; // CREATING INT FOR VITAMIN C
        int vitE=0; // CREATING INT FOR VITAMIN E
        int vitB7=0; // CREATING INT FOR VITAMIN B7
        int vitB2=0; // CREATING INT FOR VITAMIN B2
    public:
        void display()
        {
            int choice;
            /**********************  FIRST QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you have acne/breakouts? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitA++;}
            /**********************  SECOND QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you get dry eyes? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitA++;}
            /**********************  THIRD QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you have spoon shaped fingernails with red spots or lines? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitC++;}
            /**********************  FOURTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you have dark undereyes or dark spots on skin? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitC++;}
            /**********************  FIFTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you have loss of muscle mass? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitE++;}
            /**********************  SIXTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you also have skin or hair problems? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitE++; vitC++; vitA++; vitB7++;}
            /**********************  SEVENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do your gums bleed? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB7++;}
            /**********************  EIGHTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you get dandruff? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB7++;}
            /**********************  NINTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Are your eyes sensitive to light? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB2++;}
            /**********************  TENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you get ulcers in your mouth? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB2++; vitB7++;}
            
            
            int max = 0;
            if(vitA>max) {max=vitA;}
            if(vitC>max) {max=vitC;}
            if(vitE>max) {max=vitE;}
            if(vitB7>max) {max=vitB7;}
            if(vitB2>max) {max=vitB2;}
            
            cout << endl;
            
            if(max == vitA) {cout << "The vitamin that you need is Vitamin A. \nSome other vitamins that might be good for you are Vitamin C, Vitamin E, Vitamin B7, Vitamin B2 \n";}
            else if(max == vitC) {cout << "The vitamin that you need is Vitamin C. \nSome other vitamins that might be good for you are Vitamin A, Vitamin E, Vitamin B7, Vitamin B2 \n";}
            else if(max == vitE) {cout << "The vitamin that you need is Vitamin E. \nSome other vitamins that might be good for you are Vitamin A, Vitamin C, Vitamin B7, Vitamin B2 \n";}
            else if(max == vitB7) {cout << "The vitamin that you need is Vitamin B7. \nSome other vitamins that might be good for you are Vitamin A, Vitamin C, Vitamin E, Vitamin B2 \n";}
            else if(max == vitB2) {cout << "The vitamin that you need is Vitamin B2. \nSome other vitamins that might be good for you are Vitamin A, Vitamin C, Vitamin E, Vitamin B7 \n";}
            
        }
};

#endif /* Eyes_h */
