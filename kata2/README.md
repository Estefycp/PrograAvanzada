A password is considered strong if below conditions are all met:

It has at least 6 characters and at most 20 characters.
It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.
It must NOT contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met).
Write a function strongPasswordChecker(s), that takes a string s as input, and return the MINIMUM change required to make s a strong password. If s is already strong, return 0.

Insertion, deletion or replace of any one character are all considered as one change.

My first approach was to solve each point by itself, but then I noticed that some cases overlaps.
It was too difficult to solve this problem, my code just pass 11 cases. I couldn't do it, there was so many cases .
What I did was to check if the password was 20> and 6<, I created a global variable changes to save the minum changes required.
then if the pass needed and upper, lower or digit I added it to the variable changes
