/* Mixing Alphabets
 *
 * Description
 *
 * Program reads words that user gives untill user enters the word END. Program
 * shuffles the letters in input word that user can still read the word.
 *
 *
 * Writer of the program
 *
 * Name: EILeh
 */

#include <algorithm>
#include <iostream>
#include <random>
#include <string>

int main()
{
    // This is a random number generator that should be given as parameter to
    // the function of the algorithm library to shuffle letters
    std::minstd_rand generator;

    std::cout << "Enter some text. Quit by entering the word \"END\"." <<
                 std::endl;
    std::string word;

    while (std::cin >> word)
    {
        if (word == "END")
        {
            return EXIT_SUCCESS;
        }

        // If input word has more than two letters, the word will be shuffeled.
        if ( word.length() > 2 )
        {
            std::shuffle(word.begin() + 1, word.end() - 1, generator);
        }

        std::cout << word << std::endl;
    }
}
