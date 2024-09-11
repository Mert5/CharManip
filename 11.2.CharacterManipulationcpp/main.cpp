
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


    return 0;
}
