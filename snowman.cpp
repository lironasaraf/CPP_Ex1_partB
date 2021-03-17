#include "snowman.hpp"
#include <iostream>
#include <array>
#include <stdexcept>
#include <string>
using namespace std;

const int four = 4;
const std::string hat1 = "       \n _===_ ";   //1
const std::string hat2 = "  ___  \n ..... \n"; //2
const std::string hat3 = "   _   \n  /_\\  ";  //3
const std::string hat4 = "  ___  \n (_*_) ";   //4
const int index_five = 5;
const int index_six = 6;
const int index_seven = 7;
//every array represnt one number between 1-8 from above
const std::array<std::string, four> hats = {hat1, hat2, hat3, hat4};      //1
const std::array<std::string, four> noses = {",", ".", "_", " "};         //2
const std::array<std::string, four> lefteye = {".", "o", "O", "-"};       //3
const std::array<std::string, four> righteye = {".", "o", "O", "-"};      //4
const std::array<std::string, four> leftarmup = {" ", "\\", " ", " "};    //5
const std::array<std::string, four> leftarm_low = {"<", " ", "/", " "};   //5
const std::array<std::string, four> rightarmup = {" ", "/", " ", " "};    //6
const std::array<std::string, four> rightarm_low = {">", " ", "\\", " "}; //6
const std::array<std::string, four> torso = {" : ", "] [", "> <", "   "};  //7
const std::array<std::string, four> base = {" : ", "\" \"", "___", "   "};  //8



namespace ariel
{
    std::string snowman(int number)
    {

        const long int MIN = 11111111;
        const long int MAX = 44444444;
        const int valid_input_length = 8;

        if (number < MIN || number > MAX)
        {
            throw std::range_error("Input out of range");
        }

        std::string number_to_str = std::to_string(number);
        int size = number_to_str.length();
        if (size != valid_input_length)
        {
            throw std::range_error("Invalid Input");
        }
     
        std::string input = number_to_str;

        //build hat+nose+eyes+hands+torso+base
        std::string buildSnowMan = ((hats.at(input.at(0) - '1')) + "\n" +
                                    (leftarmup.at(input.at(4) - '1')) + '(' +
                                    (lefteye.at(input.at(2) - '1')) +
                                    (noses.at(input.at(1) - '1')) +
                                    (righteye.at(input.at(3) - '1')) + ')' +
                                    (rightarmup.at(input.at(index_five) - '1')) + "\n" +
                                    (leftarm_low.at(input.at(4) - '1')) + '(' +
                                    (torso.at(input.at(index_six) - '1')) + ')' +
                                    (rightarm_low.at(input.at(index_five) - '1')) + '\n' + " (" +
                                    (base.at(input.at(index_seven) - '1')) + ')');

       
        return buildSnowMan;
    }

}