//
//  Skin.h
//  Knowledge Engineering for Nutrition Deficiency
//
//  Created by Ahsan Virk on 5/24/21.
//

#ifndef Skin_h
#define Skin_h

#include <iostream>
using namespace std;

class Skin // CREATING CLASS OF SKIN
{
    private:
        int vitA = 0; // CREATING INT FOR VITAMIN A
        int vitC = 0; // CREATING INT FOR VITAMIN C
        int vitE = 0; // CREATING INT FOR VITAMIN E
        int vitB6 = 0; // CREATING INT FOR VITAMIN B6
        int vitB12 = 0; // CREATING INT FOR VITAMIN B12
        int vitB7 = 0; // CREATING INT FOR VITAMIN B7
        int vitB3 = 0; // CREATING INT FOR VITAMIN B3
        int vitB2 = 0; // CREATING INT FOR VITAMIN B2
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
                cout << "Do you have frequent chest or throat infections? (1-Yes || 2-No)" << endl;
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
                cout << "Do you have balance problems? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitE++;}
            /**********************  SEVENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you have sore, glossy lips? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB6++;}
            /**********************  EIGHTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you ever get seizures? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB6++;}
            /**********************  NINTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you get vision loss? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB12++;}
            /**********************  TENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you have smooth tounge? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB12++;}
            /**********************  ELEVENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you get hair loss? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB7++;}
            /**********************  TWELFTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you rash around nose, eyes, and mouth? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB7++;}
            /**********************  THIRTEENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you get thick, scaly pigment rash on skin because of sunlight? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB3++;}
            /**********************  FOURTEENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you get mentally confused on occasions or memory loss? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB3++;}
            /**********************  FIFTEENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you get inflammation around your mouth? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB2++;}
            /**********************  SIXTEENTH QUESTION  **********************/
            while(1)
            {
                choice = 0;
                cout << "Do you have excess fluid in your mucous? (1-Yes || 2-No)" << endl;
                cin >> choice;
                if(choice == 1 || choice == 2) break;
                cout << "Invalid Entry!" << endl << endl;
            }
            if(choice == 1) {vitB3++;}
            
            int max = 0;
            if(vitA>max) {max=vitA;}
            if(vitC>max) {max=vitC;}
            if(vitE>max) {max=vitE;}
            if(vitB6>max) {max=vitB6;}
            if(vitB12>max) {max=vitB12;}
            if(vitB7>max) {max=vitB7;}
            if(vitB3>max) {max=vitB3;}
            if(vitB2>max) {max=vitB2;}
            cout << endl;
            if(max == vitA) {cout << "The vitamin that you need is Vitamin A. \nSome other vitamins that might be good for you include Vitamin C, Vitamin E, B-complex Vitamins \n";}
            else if(max == vitC) {cout << "The vitamin that you need is Vitamin C. \nSome other vitamins that might be good for you include Vitamin A, Vitamin E, B-complex Vitamins \n";}
            else if(max == vitE) {cout << "The vitamin that you need is Vitamin E. \nSome other vitamins that might be good for you include Vitamin A, Vitamin C, B-complex Vitamins \n";}
            else if(max == vitB6) {cout << "The vitamin that you need is Vitamin B6. \nSome other vitamins that might be good for you include Vitamin A, Vitamin C, Vitamin E, B-complex Vitamin \n";}
            else if(max == vitB12) {cout << "The vitamin that you need is Vitamin B12. \nSome other vitamins that might be good for you include Vitamin A, Vitamin C, Vitamin E, B-complex Vitamin \n";}
            else if(max == vitB7) {cout << "The vitamin that you need is Vitamin B7. \nSome other vitamins that might be good for you include Vitamin A, Vitamin C, Vitamin E, B-complex Vitamin \n";}
            else if(max == vitB3) {cout << "The vitamin that you need is Vitamin B3. \nSome other vitamins that might be good for you include Vitamin A, Vitamin C, Vitamin E, B-complex Vitamin \n";}
            else if(max == vitB2) {cout << "The vitamin that you need is Vitamin B2. \nSome other vitamins that might be good for you include Vitamin A, Vitamin C, Vitamin E, B-complex Vitamin \n";}
            
        }
        
};


#endif /* Skin_h */
