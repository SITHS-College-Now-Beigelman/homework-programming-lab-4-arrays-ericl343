//Eric Lin
//Homework #4
//November 12th, 2024

#include <iostream>
#include <string>

using namespace std;

//Exercise #1 Function
void filterEvens(int myArray[], int size) {
    cout << "Even numbers in the array: " << endl ;
    for (int i = 0; i < size; i++) {
        //Only output numbers divisible by 2
        if (myArray[i] % 2 == 0) {
            cout << myArray[i] << " ";
            cout << endl;
        }
    }
}

//Exercise #2 Function
void carSaleAnalysis(const int cars[], int size) {
    //Set the starting value to 0
    int totalCars = 0;
    int maxCars = cars[0];
    //Start with the first salesperson
    int topSalesperson = 1; 
    for (int i = 0; i < size; i++) {
        //Calculate total cars sold
        totalCars += cars[i]; 
        //Find the highest sales
        if (cars[i] > maxCars) { 
            maxCars = cars[i];
            topSalesperson = i + 1;
        }
    }
    cout << "Total cars sold: " << totalCars << endl;
    cout << "Top salesperson: Salesperson #" << topSalesperson << endl;
    cout << "Number of cars sold by top salesperson: " << maxCars << endl;
}

//Exercise #4 Function
void dna_to_rna(string dnaSequence) {
    cout << "RNA sequence: " << endl;
    for (int i = 0; i < dnaSequence.length(); i++) {
        char nucleotide = dnaSequence[i];
        // Nucleotide translations
        if (nucleotide == 'A') cout << 'U';         //A to U
        else if (nucleotide == 'C') cout << 'G';    //C to G
        else if (nucleotide == 'G') cout << 'C';    //G to C
        else if (nucleotide == 'T') cout << 'A';    //T to A
    }
}

int main() {
//Exercise #1
    cout << "Exercise #1: Filter Even Numbers\n";
    int myArray[8];
    //Prompt user to input 8 numbers
    cout << "Enter 8 integers for the array:\n";
    for (int i = 0; i < 8; i++) { 
        cin >> myArray[i];
    }
    //Outputs just the even numbers
    filterEvens(myArray, 8); 

//Exercise #2
    cout << "\nExercise #2: Car Sales Analysis\n";
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8};
    //Analyze car sales data
    carSaleAnalysis(cars, 10); 

//Exercise #4
    cout << "\nExercise #4: DNA to RNA Transcription\n";
    string dnaSeq;
    //Allow user imput
    cout << "Enter a DNA sequence: " << endl;
    cin >> dnaSeq;
    dna_to_rna(dnaSeq); 

    return 0;
}
/*
Exercise #1: Filter Even Numbers
Enter 8 integers for the array:
83 94 74 75 98 39 20 34
Even numbers in the array: 
94
74
98
20
34

Exercise #2: Car Sales Analysis
Total cars sold: 58
Top salesperson: Salesperson #5
Number of cars sold by top salesperson: 14

Exercise #4: DNA to RNA Transcription
Enter a DNA sequence:
GTACATCG
RNA sequence: 
CAUGUAGC
*/