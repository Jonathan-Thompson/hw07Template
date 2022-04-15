//Jonathan Thompson
//z472c678
//Hw07
//Create a bubble sort for passphrases inputed
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
/*
void bubble_sort(std::pair<char,int> let[], int counter, int i)
{
    if (let.second[i] > let.second[i + 1])
    {
        std::swap(let[i], let[i + 1]);
    }
}

*/





void info(std::string message,const char arr[])
{
    int counter = 0;
    std::pair<char, int> let[26];
    std::pair <char, int> statement;
    for (int i = 0; i < message.size(); i++)
    {
        char count = toupper(message.at(i));
        for (int j = 0; j < 26; j++)
        {
            if (count == arr[j])
            {
                counter += 1;
                statement.first = count;
                statement.second = counter;
                let[i] = statement;
                //bubble_sort(let[],counter,i)
                std::cout << statement.first << ": " << statement.second << '\n';
                counter = 0;
            }
        }
    }
}
int main()
{
    const char arr[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    std::string message;
    std::cout << "what is your message?: \n";
    std::getline(std::cin, message);
    info(message,arr);
}

/*
* #include <iostream>
#include <utility>
int main()
{
	std::pair <double, int>p{ 3.14,42 };
	std::cout << p.first << ' ' << ++p.second << '\n';
}



* 
* /*
* procedure bubbleSort( A : list of sortable items )
* n = length(A)
* repeat
*     swapped = false
*     for i = 1 to n - 1 inclusive do
*         /* if this pair is out of order */
//if A[i - 1] > A[i] thten
/* swap them and remember something changed */

//swap(A[i - 1], A[i])
//swapped = true
//end if
//end for
//until not swapped
//end procedure
