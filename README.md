# Longest-Compounded-Word

# Steps to Execute this code
1. open the cpp file on any c++ ide
2. paste the contents of Input file in Input.txt
3. now compile and run the code
4. the needed output will get printed in Output.txt

# Overview

n: no. of strings 
<br>
k: max(length of string)
<br>
<br>
Time complexity:
<br>
<br>
Best case-> O($k^2$)
<br>
Average Case-> O(nk)
<br>
Worst Case-> O(n $k^2$)  
<br>
Space complexity: O(k)
<br>
<br>

* To solve this problem dynamic programming data structure is used
* To find the largest compounded word first i sort the strings with respect to their length and for equal lengths of strings, strings are sorted alphabetically
* Now starting from the end of list of strings i try to find if current string can be made by smaller words or not
* if yes then store the string in ans1 and same goes with second largest compounded word
* if we get both the strings then we stop and print the output strings
