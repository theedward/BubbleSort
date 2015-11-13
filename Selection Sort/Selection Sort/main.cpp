//
//  main.cpp
//  Selection Sort
//
//  Created by João Seixas on 13/11/15.
//  Copyright © 2015 João Seixas. All rights reserved.
//

#include <iostream>
#include <vector>
#include <sstream>

std::vector<int> selectionSort(std::vector<int>array, int arraySize){
    int key, keyj;
    int max = arraySize - 1;
    
    for(int i = 0; i <= max; i++){
        key = array[i];
        keyj = i;
        
        for(int j = i+1; j <= max; j++){
            if(array[j] < key){
                key = array[j];
                keyj = j;
            }
        }
        array[keyj] = array[i];
        array[i] = key;
    }
    
    return array;
}

int main(int argc, const char * argv[]) {
    
    std::string line;
    std::cout << "Please enter the size of the array to sort: ";
    std::getline(std::cin, line);
    
    //Getting rid of that first value
    std::cin.clear();
    
    std::string::size_type sz;
    int arraySize = std::stoi (line,&sz);
    std::vector<int> arrayNumbers (arraySize);
    
    std::cout << "Please enter the array to sort: ";
    
    int c;
    
    //Reading the actual Array from cin
    do{
        std::string str = "";
        int iterator;
        
        c = std::cin.get();
        
        if(c != '\n'){
            while (c != ',' && c != '\n') {
                str += (char) c;
                c = std::cin.get();
            }
            arrayNumbers[iterator] = std::stoi(str, &sz);
            iterator++;
        }
    }while(c != '\n');
    
    std::vector<int> newArray = selectionSort(arrayNumbers, arraySize);
    
    std::cout << "Sorted array: \n";
    for(int i = 0; i < arraySize; i++){
        printf("%d ", newArray[i]);
    }
    std::cout << ".\n";
    
    return 0;
}