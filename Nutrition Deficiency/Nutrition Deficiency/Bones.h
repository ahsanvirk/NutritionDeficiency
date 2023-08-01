//
//  Bones.h
//  Knowledge Engineering for Nutrition Deficiency
//
//  Created by Ahsan Virk on 5/24/21.
//

#ifndef Bones_h
#define Bones_h


#include <iostream>
using namespace std;

class Bone // CREATING BONE CLASS
{
    private:
        int vitD=0; // CREATING INT FOR VITAMIN D
        int vitC=0; // CREATING INT FOR VITAMIN C
        int vitE=0; // CREATING INT FOR VITAMIN E
        int vitB9=0; // CREATING INT FOR VITAMIN B9
        int vitB1=0; // CREATING INT FOR VITAMIN B1
        int vitB5=0; // CREATING INT FOR VITAMIN B5
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
            if(choice == 1) {vitD++; vitC++;}
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
                cout << "Do you have unexplained weight gain? (1-Yes || 2-No)" << endl;
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
                cout << "Do you also get hair loss? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitE++; vitD++;}
            /**********************  SEVENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you, or did you, have growth problem? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB9++;}
            /**********************  EIGHTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Does your tongue swell? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB9++;}
            /**********************  NINTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you have loss of appetite? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB1++;}
            /**********************  TENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you have muscless weakness? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB1++; vitD++;}
            /**********************  ELEVENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you have gastrointestinal problems? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB5++;}
            /**********************  TWELFTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you get headaches? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB5++;}
            
            
            int max = 0;
            if(vitD>max) {max=vitD;}
            if(vitC>max) {max=vitC;}
            if(vitE>max) {max=vitE;}
            if(vitB9>max) {max=vitB9;}
            if(vitB1>max) {max=vitB1;}
            if(vitB5>max) {max=vitB5;}
            
            cout << endl;
            
            if(max == vitD) {cout << "The vitamin that you need is Vitamin D. \nSome other vitamins that might be good for you are Vitamin C, Vitamin E, Vitamin B9, Vitamin B5, Vitamin B1 \n";}
            else if(max == vitC) {cout << "The vitamin that you need is Vitamin C. \nSome other vitamins that might be good for you are Vitamin D, Vitamin E, Vitamin B9, Vitamin B5, Vitamin B1 \n";}
            else if(max == vitE) {cout << "The vitamin that you need is Vitamin E. \nSome other vitamins that might be good for you are Vitamin D, Vitamin C, Vitamin B9, Vitamin B5, Vitamin B1 \n";}
            else if(max == vitB9) {cout << "The vitamin that you need is Vitamin B9. \nSome other vitamins that might be good for you are Vitamin D, Vitamin C, Vitamin E, Vitamin B5, Vitamin B1 \n";}
            else if(max == vitB5) {cout << "The vitamin that you need is Vitamin B5. \nSome other vitamins that might be good for you are Vitamin D, Vitamin C, Vitamin E, Vitamin B9, Vitamin B1 \n";}
            else if(max == vitB1) {cout << "The vitamin that you need is Vitamin B1. \nSome other vitamins that might be good for you are Vitamin D, Vitamin C, Vitamin E, Vitamin B9, Vitamin B5 \n";}
        }
};

#endif /* Bones_h */
