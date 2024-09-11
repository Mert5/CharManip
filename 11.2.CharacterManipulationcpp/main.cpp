
// Shows the Character Manipulation in C++.
// Considered some of commands

#include <iostream>
//include <cctype>

int main(){

    
    // Check if character is alphanumeric
    std::cout << std::endl;
    std::cout << "Being used the command => std::isalnum : " << std::endl;

    std::cout << "C is alphanumeric : " << std::boolalpha << static_cast<bool>(std::isalnum('C')) << std::endl; // to see as true or false
    std::cout << "^ is alphanumeric : " << std::boolalpha << static_cast<bool>(std::isalnum('^')) << std::endl; // to see as true or false
    //std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;    // it will show as boolean
    //std::cout << "^ is alphanumeric : " << std::isalnum('^') << std::endl;    // it will show as boolean

    // Can use this as a test condition
    char input_char {'*'};
    if(std::isalnum(input_char)){
        std::cout << input_char <<" is alphanumeric." << std::endl;
    }
    else{
        std::cout << input_char <<" is not alphanumeric. " << std::endl;
    }
    

    // Check if character is alphabetic
    std::cout << std::endl;
    std::cout << "Being used the command => std::isalpha : " << std::endl;
    std::cout << "C is alphabetic : " << std::isalpha('C') << std::endl;    //1
                                                // if true it will return a value different than 0
    std::cout << "^ is alphabetic : " << std::isalpha('^') << std::endl;    //0
    std::cout << "7 is alphabetic : " << std::isalpha('7') << std::endl;    //0

    if(std::isalpha('e')){
        std::cout << 'e' << " is alphabetic. " << std::endl;
    }
    else{
        std::cout << 'e' << " is not alphabetic. " << std::endl;
    }
    

    // Check if a character is blank
    std::cout << std::endl;
    std::cout << "Being used the command => std::isblank : " << std::endl;
    char message[] {"Hello there. How are you doing? The weather is rainy."};
    std::cout << "message : " << message << std::endl;

    // Find and print blank index
    size_t blank_count {};
    for (size_t i{0}; i < std::size(message) ; i++){   // sizeof(message) is also valid
        // std::cout << "Value : " << message[i] << std::endl;
        if(std::isblank(message[i])){
            std::cout << "Blank has founded at index : " << i+1 << " " << std::endl;
            blank_count++;
        }
    }
    std:: cout << "In total there are " << blank_count << " blank characters in message. " << std::endl;


    // Lets check uppercase and lowercase characters
    std::cout << "Being used commands std::isupper and std::islower : " << std::endl;

    char astring[] {"C++ language has a lot of users on the Planet. "};
    size_t uppercount {};
    size_t lowercount {};

    for (size_t i{}; i < std::size(astring) ; i++){ //for ( auto letter : astring)  => also works
        if(std::isupper(astring[i])){
            std::cout << " Uppercase letter : " << astring[i] << std::endl;
            uppercount++;
        }
        if(std::islower(astring[i])){
            //std::cout << " Lowercase letter : " << astring[i] << std::endl;
            lowercount++;
        }
    }

    std::cout << " Length of sentence : " << std::size(astring) << std::endl;
    std::cout << " Number of uppercase letter : " << uppercount << std::endl;
    std::cout << " Number of lowercase letter : " << lowercount << std::endl;
    

    // Now let's check if a character is a digit or not
    std::cout << "Being used the command std::isdigit : " << std::endl;

    char event []{"Man had an accident. Car was burning and the man was trying to get out. Everybody was watching except 1. "};
    std::cout << "Event : " << event << std::endl;

    size_t digit_count{} ;

    for(auto chr : event){
        if(std::isdigit(chr)){
            std::cout << chr << "-" << std::endl;
            digit_count++;
        }
    }

    std::cout << "There are " << digit_count << " digits in this situation. " << std::endl;
    */


    // Turning a character to lowercase or uppercase
    std::cout << std::endl;
    std::cout << "Being used std::tolower and std::toupper commands: " << std::endl;

    char sentences[] {"Look around. Search, find and improve it."};
    // State is : lOOK AROUND. sEARCH, FIND AND IMPROVE IT. => you should see this as an output below
    char newsentences[std::size(sentences)];
    std::cout << "State is : " << sentences << std::endl;

    for(size_t j{}; j < std::size(sentences) ; ++j){
        if(std::isblank(sentences[j]) || !(std::isalnum(sentences[j]))){
            newsentences[j] = sentences[j];
        }
        if(std::isupper(sentences[j])){
            newsentences[j] = std::tolower(sentences[j]);
        }
        if(std::islower(sentences[j])){
            
            newsentences[j] = std::toupper(sentences[j]);
        }
    }

    std::cout << "State is : " << newsentences << std::endl;

    return 0;
}
