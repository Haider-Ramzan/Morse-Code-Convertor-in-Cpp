#include <iostream>
using namespace std;

char* convertToMorseCode(char* input);
char* convertToString(char* morse);

int main(){

    // write what to convert in the given commas and uncomment:
    //convertToMorseCode(  ""  );
    //convertToString(  ""  );

}






char* convertToMorseCode(char* input) {
    
    /*First I am calculating total size of array needed.*/
    /*below loops caluculates the amount of space that we need to allocate from the heap to write the morse
    code. 
    First do while loop checks for the normal charachters which were given in the table
    second calculates number of words
    third calculates number of letters*/

    
    char ch = '\0';
    int i = 0;

    int total_size = 0;

    do
    {
        ch = *(input + i);

        if ((ch == 'A') || (ch == 'a'))
            total_size += 2;
        else if ((ch == 'B') || (ch == 'b'))
            total_size += 4;
        else if ((ch == 'C') || (ch == 'c'))
            total_size += 4;
        else if ((ch == 'D') || (ch == 'd'))
            total_size += 3;
        else if ((ch == 'E') || (ch == 'e'))
            total_size += 1;
        else if ((ch == 'F') || (ch == 'f'))
            total_size += 4;
        else if ((ch == 'G') || (ch == 'g'))
            total_size += 3;
        else if ((ch == 'H') || (ch == 'h'))
            total_size += 4;
        else if ((ch == 'I') || (ch == 'i'))
            total_size += 2;
        else if ((ch == 'J') || (ch == 'j'))
            total_size += 4;
        else if ((ch == 'K') || (ch == 'k'))
            total_size += 3;
        else if ((ch == 'L') || (ch == 'l'))
            total_size += 4;
        else if ((ch == 'M') || (ch == 'm'))
            total_size += 2;
        else if ((ch == 'N') || (ch == 'n'))
            total_size += 2;
        else if ((ch == 'O') || (ch == 'o'))
            total_size += 3;
        else if ((ch == 'P') || (ch == 'p'))
            total_size += 4;
        else if ((ch == 'Q') || (ch == 'q'))
            total_size += 4;
        else if ((ch == 'R') || (ch == 'r'))
            total_size += 3;
        else if ((ch == 'S') || (ch == 's'))
            total_size += 3;
        else if ((ch == 'T') || (ch == 't'))
            total_size += 1;
        else if ((ch == 'U') || (ch == 'u'))
            total_size += 3;
        else if ((ch == 'V') || (ch == 'v'))
            total_size += 4;
        else if ((ch == 'W') || (ch == 'w'))
            total_size += 3;
        else if ((ch == 'X') || (ch == 'x'))
            total_size += 4;
        else if ((ch == 'Y') || (ch == 'y'))
            total_size += 4;
        else if ((ch == 'Z') || (ch == 'z'))
            total_size += 4;
        else if (ch == '0')
            total_size += 5;
        else if (ch == '1')
            total_size += 5;
        else if (ch == '2')
            total_size += 5;
        else if (ch == '3')
            total_size += 5;
        else if (ch == '4')
            total_size += 5;
        else if (ch == '5')
            total_size += 5;
        else if (ch == '6')
            total_size += 5;
        else if (ch == '7')
            total_size += 5;
        else if (ch == '8')
            total_size += 5;
        else if (ch == '9')
            total_size += 5;
        else if (ch == '.')
            total_size += 6;
        else if (ch == ',')
            total_size += 6;
        else if (ch == '?')
            total_size += 6;
        else if ((ch == '\'') || (ch == '\"'))
            total_size += 6;
        else if (ch == '!')
            total_size += 6;
        else if (ch == '/')
            total_size += 5;
        else if (ch == '(')
            total_size += 5;
        else if (ch == ')')
            total_size += 6;
        else if (ch == '&')
            total_size += 5;
        i++;
    } while (ch != '\0');

    //the below loops counts the number of words, to count how many slashes(/) will come
    for (int i = 0; input[i] != '\0'; i++) {
        if ((input[i] == ' ') && (input[i - 1] != ' '))
            total_size++;
    }

    //the below loops counts number of letter to check how many spaces will come.
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != ' ')
            total_size += 2; // 2 added as after every / there is a space
    }
    //////////////////\

    //////////////////\

    char* result = new char[total_size + 1];

    int index = 0;

    for (int i = 0; input[i] != '\0'; i++) {

        /*NOw from below every number is checked with conditions and then accordingly the dots and dashes are added*/

        /*at end of every charachter there is also a line to add space as charachter have space betwwen them*/

        if ((input[i] == 'A') || (input[i] == 'a')) {
            *(result + index) = '.';
            *(result + index + 1) = '-';
            *(result + index + 2) = ' ';
            index += 3;
        }

        else if ((input[i] == 'B') || (input[i] == 'b')) {
            *(result + index) = '-';
            *(result + index + 1) = '.';
            *(result + index + 2) = '.';
            *(result + index + 3) = '.';
            *(result + index + 4) = ' ';
            index += 5;
        }

        else if ((input[i] == 'C') || (input[i] == 'c')) {
            *(result + index) = '-';
            *(result + index + 1) = '.';
            *(result + index + 2) = '-';
            *(result + index + 3) = '.';
            *(result + index + 4) = ' ';
            index += 5;
        }

        else if ((input[i] == 'D') || (input[i] == 'd')) {
            *(result + index) = '-';
            *(result + index + 1) = '.';
            *(result + index + 2) = '.';
            *(result + index + 3) = ' ';
            index += 4;
        }

        else if ((input[i] == 'E') || (input[i] == 'e')) {
            *(result + index) = '.';
            *(result + index + 1) = ' ';
            index += 2;
        }

        else if ((input[i] == 'F') || (input[i] == 'f')) {
            *(result + index) = '.';
            *(result + index + 1) = '.';
            *(result + index + 2) = '-';
            *(result + index + 3) = '.';
            *(result + index + 4) = ' ';
            index += 5;
        }

        else if ((input[i] == 'G') || (input[i] == 'g')) {
            *(result + index) = '-';
            *(result + index + 1) = '-';
            *(result + index + 2) = '.';
            *(result + index + 3) = ' ';
            index += 4;
        }

        else if ((input[i] == 'H') || (input[i] == 'h')) {
            *(result + index) = '.';
            *(result + index + 1) = '.';
            *(result + index + 2) = '.';
            *(result + index + 3) = '.';
            *(result + index + 4) = ' ';
            index += 5;
        }

        else if ((input[i] == 'I') || (input[i] == 'i')) {
            *(result + index) = '.';
            *(result + index + 1) = '.';
            *(result + index + 2) = ' ';
            index += 3;
        }

        else if ((input[i] == 'J') || (input[i] == 'j')) {
            *(result + index) = '.';
            *(result + index + 1) = '-';
            *(result + index + 2) = '-';
            *(result + index + 3) = '-';
            *(result + index + 4) = ' ';
            index += 5;
        }

        else if ((input[i] == 'K') || (input[i] == 'k')) {
            *(result + index) = '-';
            *(result + index + 1) = '.';
            *(result + index + 2) = '-';
            *(result + index + 3) = ' ';
            index += 4;
        }

        else if ((input[i] == 'L') || (input[i] == 'l')) {
            *(result + index) = '.';
            *(result + index + 1) = '-';
            *(result + index + 2) = '.';
            *(result + index + 3) = '.';
            *(result + index + 4) = ' ';
            index += 5;
        }

        else if ((input[i] == 'M') || (input[i] == 'm')) {
            *(result + index) = '-';
            *(result + index + 1) = '-';
            *(result + index + 2) = ' ';
            index += 3;
        }

        else if ((input[i] == 'N') || (input[i] == 'n')) {
            *(result + index) = '-';
            *(result + index + 1) = '.';
            *(result + index + 2) = ' ';
            index += 3;
        }

        else if ((input[i] == 'O') || (input[i] == 'o')) {
            *(result + index) = '-';
            *(result + index + 1) = '-';
            *(result + index + 2) = '-';
            *(result + index + 3) = ' ';
            index += 4;
        }

        else if ((input[i] == 'P') || (input[i] == 'p')) {
            *(result + index) = '.';
            *(result + index + 1) = '-';
            *(result + index + 2) = '-';
            *(result + index + 3) = '.';
            *(result + index + 4) = ' ';
            index += 5;
        }

        else if ((input[i] == 'Q') || (input[i] == 'q')) {
            *(result + index) = '-';
            *(result + index + 1) = '-';
            *(result + index + 2) = '.';
            *(result + index + 3) = '-';
            *(result + index + 4) = ' ';
            index += 5;
        }

        else if ((input[i] == 'R') || (input[i] == 'r')) {
            *(result + index) = '.';
            *(result + index + 1) = '-';
            *(result + index + 2) = '.';
            *(result + index + 3) = ' ';
            index += 4;
        }

        else if ((input[i] == 'S') || (input[i] == 's')) {
            *(result + index) = '.';
            *(result + index + 1) = '.';
            *(result + index + 2) = '.';
            *(result + index + 3) = ' ';
            index += 4;
        }

        else if ((input[i] == 'T') || (input[i] == 't')) {
            *(result + index) = '-';
            *(result + index + 1) = ' ';
            index += 2;
        }

        else if ((input[i] == 'U') || (input[i] == 'u')) {
            *(result + index) = '.';
            *(result + index + 1) = '.';
            *(result + index + 2) = '-';
            *(result + index + 3) = ' ';
            index += 4;
        }

        else if ((input[i] == 'V') || (input[i] == 'v')) {
            *(result + index) = '.';
            *(result + index + 1) = '.';
            *(result + index + 2) = '.';
            *(result + index + 3) = '-';
            *(result + index + 4) = ' ';
            index += 5;
        }

        else if ((input[i] == 'W') || (input[i] == 'w')) {
            *(result + index) = '.';
            *(result + index + 1) = '-';
            *(result + index + 2) = '-';
            *(result + index + 3) = ' ';
            index += 4;
        }

        else if ((input[i] == 'X') || (input[i] == 'x')) {
            *(result + index) = '-';
            *(result + index + 1) = '.';
            *(result + index + 2) = '.';
            *(result + index + 3) = '-';
            *(result + index + 4) = ' ';
            index += 5;
        }

        else if ((input[i] == 'Y') || (input[i] == 'y')) {
            *(result + index) = '-';
            *(result + index + 1) = '.';
            *(result + index + 2) = '-';
            *(result + index + 3) = '-';
            *(result + index + 4) = ' ';
            index += 5;
        }

        else if ((input[i] == 'Z') || (input[i] == 'z')) {
            *(result + index) = '-';
            *(result + index + 1) = '-';
            *(result + index + 2) = '.';
            *(result + index + 3) = '.';
            *(result + index + 4) = ' ';
            index += 5;
        }

        // NOW NUMBERS START

        else if (input[i] == '0') {
            *(result + index) = '-';
            *(result + index + 1) = '-';
            *(result + index + 2) = '-';
            *(result + index + 3) = '-';
            *(result + index + 4) = '-';
            *(result + index + 5) = ' ';
            index += 6;
        }

        else if (input[i] == '1') {
            *(result + index) = '.';
            *(result + index + 1) = '-';
            *(result + index + 2) = '-';
            *(result + index + 3) = '-';
            *(result + index + 4) = '-';
            *(result + index + 5) = ' ';
            index += 6;
        }

        else if (input[i] == '2') {
            *(result + index) = '.';
            *(result + index + 1) = '.';
            *(result + index + 2) = '-';
            *(result + index + 3) = '-';
            *(result + index + 4) = '-';
            *(result + index + 5) = ' ';
            index += 6;
        }

        else if (input[i] == '3') {
            *(result + index) = '.';
            *(result + index + 1) = '.';
            *(result + index + 2) = '.';
            *(result + index + 3) = '-';
            *(result + index + 4) = '-';
            *(result + index + 5) = ' ';
            index += 6;
        }

        else if (input[i] == '4') {
            *(result + index) = '.';
            *(result + index + 1) = '.';
            *(result + index + 2) = '.';
            *(result + index + 3) = '.';
            *(result + index + 4) = '-';
            *(result + index + 5) = ' ';
            index += 6;
        }

        else if (input[i] == '5') {
            *(result + index) = '.';
            *(result + index + 1) = '.';
            *(result + index + 2) = '.';
            *(result + index + 3) = '.';
            *(result + index + 4) = '.';
            *(result + index + 5) = ' ';
            index += 6;
        }

        else if (input[i] == '6') {
            *(result + index) = '-';
            *(result + index + 1) = '.';
            *(result + index + 2) = '.';
            *(result + index + 3) = '.';
            *(result + index + 4) = '.';
            *(result + index + 5) = ' ';
            index += 6;
        }

        else if (input[i] == '7') {
            *(result + index) = '-';
            *(result + index + 1) = '-';
            *(result + index + 2) = '.';
            *(result + index + 3) = '.';
            *(result + index + 4) = '.';
            *(result + index + 5) = ' ';
            index += 6;
        }

        else if (input[i] == '8') {
            *(result + index) = '-';
            *(result + index + 1) = '-';
            *(result + index + 2) = '-';
            *(result + index + 3) = '.';
            *(result + index + 4) = '.';
            *(result + index + 5) = ' ';
            index += 6;
        }

        else if (input[i] == '9') {
            *(result + index) = '-';
            *(result + index + 1) = '-';
            *(result + index + 2) = '-';
            *(result + index + 3) = '-';
            *(result + index + 4) = '.';
            *(result + index + 5) = ' ';
            index += 6;
        }

        //now special symbols start

        else if (input[i] == '.') {
            *(result + index) = '.';
            *(result + index + 1) = '-';
            *(result + index + 2) = '.';
            *(result + index + 3) = '-';
            *(result + index + 4) = '.';
            *(result + index + 5) = '-';
            *(result + index + 6) = ' ';
            index += 7;
        }

        else if (input[i] == ',') {
            *(result + index) = '-';
            *(result + index + 1) = '-';
            *(result + index + 2) = '.';
            *(result + index + 3) = '.';
            *(result + index + 4) = '-';
            *(result + index + 5) = '-';
            *(result + index + 6) = ' ';
            index += 7;
        }

        else if (input[i] == '?') {
            *(result + index) = '.';
            *(result + index + 1) = '.';
            *(result + index + 2) = '-';
            *(result + index + 3) = '-';
            *(result + index + 4) = '.';
            *(result + index + 5) = '.';
            *(result + index + 6) = ' ';
            index += 7;
        }

        else if ((input[i] == '\'') || ((input[i] == '\"'))) {
            *(result + index) = '.';
            *(result + index + 1) = '-';
            *(result + index + 2) = '-';
            *(result + index + 3) = '-';
            *(result + index + 4) = '-';
            *(result + index + 5) = '.';
            *(result + index + 6) = ' ';
            index += 7;
        }

        else if (input[i] == '!') {
            *(result + index) = '-';
            *(result + index + 1) = '.';
            *(result + index + 2) = '-';
            *(result + index + 3) = '.';
            *(result + index + 4) = '-';
            *(result + index + 5) = '-';
            *(result + index + 6) = ' ';
            index += 7;
        }

        else if (input[i] == '/') {
            *(result + index) = '-';
            *(result + index + 1) = '.';
            *(result + index + 2) = '.';
            *(result + index + 3) = '-';
            *(result + index + 4) = '.';
            *(result + index + 5) = ' ';
            index += 6;
        }

        else if (input[i] == '(') {
            *(result + index) = '-';
            *(result + index + 1) = '.';
            *(result + index + 2) = '-';
            *(result + index + 3) = '-';
            *(result + index + 4) = '.';
            *(result + index + 5) = ' ';
            index += 6;
        }


        else if (input[i] == ')') {
            *(result + index) = '-';
            *(result + index + 1) = '.';
            *(result + index + 2) = '-';
            *(result + index + 3) = '-';
            *(result + index + 4) = '.';
            *(result + index + 5) = '-';
            *(result + index + 6) = ' ';
            index += 7;
        }

        else if (input[i] == '&') {
            *(result + index) = '.';
            *(result + index + 1) = '-';
            *(result + index + 2) = '.';
            *(result + index + 3) = '.';
            *(result + index + 4) = '.';
            *(result + index + 5) = ' ';
            index += 6;
        }

        // NOW to seperate Words we will use forward slash /. IN every space there will be one

        else if ((input[i] == ' ') && (input[i - 1] != ' ')) {
            *(result + index) = '/';
            *(result + index+1) = ' ';
            index += 2;
            }

    }

    *(result + index-1) = '\0';

    return result;
}

char* convertToString(char* morse) {

    // calculating total size of array needed
    int total_size = 0;

    for (int i = 0; morse[i] != '\0';i++) {
        if (morse[i] == ' ') {
            total_size += 1;
        }
    }
    total_size += 1; //added this as the last charachter doesn't has it's own space.

    char* result = new char[total_size + 1]; // added 1 so that no problem occurs.


    // COnverting starts

    /* this code will work by cheking each dot and dash according to table given.
    My code is not sequenced i.e forst a then b, c, d ,e ... . . . .1, 2, 3, 4 .... etc.
    This is bcz my code checks the dots and dashes and not the spaces. and if i check e.g
    .- before .-. then answer will be wrong as the .- conditioned would be fulfilled firstly.

    sothe sequence my code follows is the biggest morse code charachter is checked first that are the 6 digit morse code and at last the
    1 digit ones are checked.

     The number of dot and dashes will be the number of shifting i (of for loop)*/
    int index = 0;

    for (int i = 0; morse[i] != '\0';) { //i have removed the increment condition as i have addded it inside the loop

        // six digits:

        if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '-') && (morse[i + 4] == '.') && (morse[i + 5] == '-')) {
            result[index] = '.';
            index++;

            i += 6;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '-') && (morse[i + 5] == '-')) {
            result[index] = ',';
            index++;

            i += 6;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '.') && (morse[i + 2] == '-') && (morse[i + 3] == '-') && (morse[i + 4] == '.') && (morse[i + 5] == '.')) {
            result[index] = '?';
            index++;

            i += 6;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '-') && (morse[i + 3] == '-') && (morse[i + 4] == '-') && (morse[i + 5] == '.')) {
            result[index] = '\'';
            index++;

            i += 6;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '.') && (morse[i + 2] == '-') && (morse[i + 3] == '.') && (morse[i + 4] == '-') && (morse[i + 5] == '-')) {
            result[index] = '!';
            index++;

            i += 6;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '.') && (morse[i + 2] == '-') && (morse[i + 3] == '-') && (morse[i + 4] == '.') && (morse[i + 5] == '-')) {
            result[index] = ')';
            index++;

            i += 6;
        }

        // five digits: 

        else if ((morse[i] == '-') && (morse[i + 1] == '.') && (morse[i + 2] == '-') && (morse[i + 3] == '-') && (morse[i + 4] == '.')) {
            result[index] = '(';
            index++;

            i += 5;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '.') && (morse[i + 2] == '.') && (morse[i + 3] == '-') && (morse[i + 4] == '.')) {
            result[index] = '/';
            index++;

            i += 5;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '.')) {
            result[index] = '&';
            index++;

            i += 5;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '.')) {
            result[index] = '&';
            index++;

            i += 5;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '.')) {
            result[index] = '&';
            index++;

            i += 5;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '.')) {
            result[index] = '&';
            index++;

            i += 5;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '.')) {
            result[index] = '&';
            index++;

            i += 5;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '.')) {
            result[index] = '&';
            index++;

            i += 5;
        }
        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '.')) {
            result[index] = '&';
            index++;

            i += 5;
        }


        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '.')) {
            result[index] = '&';
            index++;

            i += 5;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '-') && (morse[i + 2] == '-') && (morse[i + 3] == '-') && (morse[i + 4] == '-')) {
            result[index] = '0';
            index++;

            i += 5;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '-') && (morse[i + 3] == '-') && (morse[i + 4] == '-')) {
            result[index] = '1';
            index++;

            i += 5;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '.') && (morse[i + 2] == '-') && (morse[i + 3] == '-') && (morse[i + 4] == '-')) {
            result[index] = '2';
            index++;

            i += 5;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '.') && (morse[i + 2] == '.') && (morse[i + 3] == '-') && (morse[i + 4] == '-')) {
            result[index] = '3';
            index++;

            i += 5;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '.') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '-')) {
            result[index] = '4';
            index++;

            i += 5;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '.') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '.')) {
            result[index] = '5';
            index++;

            i += 5;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '.') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '.')) {
            result[index] = '6';
            index++;

            i += 5;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '.') && (morse[i + 4] == '.')) {
            result[index] = '7';
            index++;

            i += 5;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '-') && (morse[i + 2] == '-') && (morse[i + 3] == '.') && (morse[i + 4] == '.')) {
            result[index] = '8';
            index++;

            i += 5;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '-') && (morse[i + 2] == '-') && (morse[i + 3] == '-') && (morse[i + 4] == '.')) {
            result[index] = '9';
            index++;

            i += 5;
        }

        // now 4 digits:

        else if ((morse[i] == '-') && (morse[i + 1] == '.') && (morse[i + 2] == '.') && (morse[i + 3] == '.')) {
            result[index] = 'b';
            index++;

            i += 4;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '.') && (morse[i + 2] == '-') && (morse[i + 3] == '.')) {
            result[index] = 'c';
            index++;

            i += 4;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '.') && (morse[i + 2] == '-') && (morse[i + 3] == '.')) {
            result[index] = 'f';
            index++;

            i += 4;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '.') && (morse[i + 2] == '.') && (morse[i + 3] == '.')) {
            result[index] = 'h';
            index++;

            i += 4;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '-') && (morse[i + 3] == '-')) {
            result[index] = 'j';
            index++;

            i += 4;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '.')) {
            result[index] = 'l';
            index++;

            i += 4;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '-') && (morse[i + 3] == '.')) {
            result[index] = 'p';
            index++;

            i += 4;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '-')) {
            result[index] = 'q';
            index++;

            i += 4;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '.') && (morse[i + 2] == '.') && (morse[i + 3] == '-')) {
            result[index] = 'v';
            index++;

            i += 4;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '.') && (morse[i + 2] == '.') && (morse[i + 3] == '-')) {
            result[index] = 'x';
            index++;

            i += 4;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '.') && (morse[i + 2] == '-') && (morse[i + 3] == '-')) {
            result[index] = 'y';
            index++;

            i += 4;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '-') && (morse[i + 2] == '.') && (morse[i + 3] == '.')) {
            result[index] = 'z';
            index++;

            i += 4;
        }

        //now 3 digit:

        else if ((morse[i] == '-') && (morse[i + 1] == '.') && (morse[i + 2] == '.')) {
            result[index] = 'd';
            index++;

            i += 3;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '-') && (morse[i + 2] == '.')) {
            result[index] = 'g';
            index++;

            i += 3;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '.') && (morse[i + 2] == '-')) {
            result[index] = 'k';
            index++;

            i += 3;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '-') && (morse[i + 2] == '-')) {
            result[index] = 'o';
            index++;

            i += 3;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '.')) {
            result[index] = 'r';
            index++;

            i += 3;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '.') && (morse[i + 2] == '.')) {
            result[index] = 's';
            index++;

            i += 3;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '.') && (morse[i + 2] == '-')) {
            result[index] = 'u';
            index++;

            i += 3;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '-') && (morse[i + 2] == '-')) {
            result[index] = 'w';
            index++;

            i += 3;
        }

        // now 2 digits: 

        else if ((morse[i] == '.') && (morse[i + 1] == '-')) {
            result[index] = 'a';
            index++;

            i += 2;
        }

        else if ((morse[i] == '.') && (morse[i + 1] == '.')) {
            result[index] = 'i';
            index++;

            i += 2;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '-')) {
            result[index] = 'm';
            index++;

            i += 2;
        }

        else if ((morse[i] == '-') && (morse[i + 1] == '.')) {
            result[index] = 'n';
            index++;

            i += 2;
        }

        //now 1 digits:

        else if ((morse[i] == '.')) {
            result[index] = 'e';
            index++;

            i += 1;
        }

        else if ((morse[i] == '-')) {
            result[index] = 't';
            index++;

            i += 1;
        }

        // NOW the front slash which means space:

        else if ((morse[i] == '/')) {
            result[index] = ' ';
            index++;

            i += 1;
        }

        // now space 
        else if ((morse[i] == ' ')) {
            i += 1;
        }

        else {
            i++; // incrementing needed as this is the case for the spaces between dots and dashes
        }

    }

    result[index] = '\0';


    return result;
}
