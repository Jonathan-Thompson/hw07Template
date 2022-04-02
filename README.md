# Counting and Sorting
Take as input a sentence from the user. Count how many occurrences of each letter there are and output a sorted list.

## Requirements
- Ask for and store a sentence or phrase that is typed in by the user.
- Count the occurrences of every letter (do no separate upper and lower case).
- Print a table showing only the letters that appeared, sorted so that the letter that appeared the most frequently is at the top.
  - In case of a tie, fall back to alphabetical order.
- Perform the sort using bubble sort.
  - You are required to write this function.
    - The return type shall be `void`.
    - The name of the function shall be `bubble_sort`.

## Sample Runs
**NOTE:** There are 2 spaces between the letter and the count.
```
Enter a phrase: It's a hard knock life  
A  2   
I  2  
K  2  
C  1  
D  1  
E  1  
F  1  
H  1  
L  1  
N  1  
O  1  
R  1  
S  1  
T  1

Enter a phrase: The quick brown fox jumped over the lazy dog.  
E  4  
O  4  
D  2  
H  2  
R  2  
T  2  
U  2  
A  1  
B  1  
C  1  
F  1  
G  1  
I  1  
J  1  
K  1  
L  1  
M  1  
N  1  
P  1  
Q  1  
V  1  
W  1  
X  1  
Y  1  
Z  1
```

## Hints
- When starting to test your code, don't use phrases or sentences. Instead just type letters for which you controll the counts.
- Choose to work exclusively in upper-case letters.
- Test with non-letter ASCII characters.
- Your life may be made easier by utilizing `std::pair` from `<utility>`. It may not. `std::unordered_map` is also an option.
- Pseudo-code for the bubble-sort algorithm:
```
procedure bubbleSort( A : list of sortable items )
n = length(A)
repeat
    swapped = false
    for i = 1 to n - 1 inclusive do
        /* if this pair is out of order */
        if A[i - 1] > A[i] thten
            /* swap them and remember something changed */
            swap(A[i - 1], A[i])
            swapped = true
        end if
    end for
until not swapped
end procedure
```

## Reminders
- Name your file *wsuid*\_hw07.cpp
- You are required to place a comment block at the top of the file. Refer to the Coding Guidelines
handout.
