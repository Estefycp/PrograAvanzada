Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:
Input: "UD"
Output: true
Example 2:
Input: "LL"
Output: false

Mi primer acercamiento fue declarar 4 variables, u d l y r y sumar si aparecia una u a su variable y asi sucesivamente
si u y d eran iguales y l y r también pues regresaba falso, pero luego me di cuenta que lo podía optimizar con dos variables x y y.
Realmente este no lo pensé mucho porque era muy lógico 
