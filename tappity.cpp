#include "tappity.h"
/**
 * Class for tappity
**/

//Constructor sets the reference phrase
tappity::tappity(std::string reference){
    m_refrence = reference;
}

//Provide the input to be compared to the reference. Before this 
//function is called, the input should be considered an empty string
void tappity::entry(std::string input){
    m_input = input;
}

//Compares the length of the reference to that of the input and
//returns the absolute value of the difference, or 0 if they are the
//same length

int tappity::length_difference(){
    
    int length = 0;

    if(m_input == " " && m_refrence == " "){
        
        return 0;
    }
    else if(m_input != " " && m_refrence == " "){
        
        return 1;
    }
    else if(m_input == " " && m_refrence != " "){
        
        return 1;
    }
    else if(m_input.length() == 1 && m_refrence.length() == 1){
        
        return 0;
    }
    else{

        for(int i = 0; i < m_input.length(); i++){
            
            // counts the number of matches
            if(m_input[i] == m_refrence[i]){
                length+=1;
            }
            if(m_input[i+1] == '\0' && m_refrence[i+1] != '\0'){

                return (m_refrence.length()-length); 
            }
            if(m_input[i+1] != '\0' && m_refrence[i+1] == '\0'){

                return (m_input.length()-length); 
            }
            if(m_input[i+1] == '\0' && m_refrence[i+1] == '\0'){
                
                return (m_refrence.length()-length);
            }
        }
    }

    return -1;
}

//Compares the content of the reference to that of the input and
//calculates the accuracy of matching characters. If the two strings
//are identical, accuracy should be 100. However, for each 
//corresponding character that does not match in the same location,
//the percentage of corresponding characters should be returned.
//For example, if the reference and input have 10 letters and the input
//matches 8 of the corresponding reference characters, the function 
//should return 80. When input does not have the same number of
//characters as the reference, the accuracy should represent the percent
//of matching characters between the shorter and longer strings. For
//example, if one string has 8 characters matching the corresponding
//locations in another string that has 16 characters, the accuracy is 50.
double tappity::accuracy()
{  
    double accuracy = 0;

    if(m_input == " " && m_refrence == " "){
        
        return 100;
    }
    else if(m_input != " " && m_refrence == " "){
        
        return 0;
    }
    else if(m_input == " " && m_refrence != " "){
        
        return 0;
    }
    else if(m_input.length() == 1 && m_refrence.length() == 1){
        
        return 100;
    }
    else{
        for(int i = 0; i < m_input.length(); i++){
            
            // counts the number of matches
            if(m_input[i] == m_refrence[i]){
                accuracy+=1;
            }
            if(m_input[i+1] == '\0' && m_refrence[i+1] != '\0'){

                return (int((accuracy/m_refrence.length())*100)); 
            }
            if(m_input[i+1] != '\0' && m_refrence[i+1] == '\0'){

                return (int((accuracy/m_input.length())*100)); 
            }
            if(m_input[i+1] == '\0' && m_refrence[i+1] == '\0'){
                
                return (int((accuracy/m_refrence.length())*100));
            }
        }
    }
    return -1;
}
