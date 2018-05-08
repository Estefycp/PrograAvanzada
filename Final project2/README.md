


Johnny was asked by his math teacher to compute nn (n to the power of n, where n is an integer), and has to read his answer out loud. This is a bit of a tiring task, since the result is probably an extremely large number, and would certainly keep Johnny occupied for a while if he were to do it honestly. But Johnny knows that the teacher will certainly get bored when listening to his answer, and will sleep through most of it! So, Johnny feels he will get away with reading only the first k digits of the result before the teacher falls asleep, and then the last k digits when the teacher wakes up.

Write a program to help Johnny to compute the digits he will need to read out.

Input
The first line contains t, the number of test cases (about 30000). Then t test cases follow.

Each test case consists of one line containing two numbers n and k (1 ≤ n ≤ 109, 1 ≤ k ≤ 9). It is guaranteed that k is not more than the number of digits of nn.

Output
For each test case, print out one line containing two numbers, separated by a space, which are the first and the last k digits of nn.

Example
Input
2
4 2
9 3

Output
25 56
387 489



Para sacar los ultimos k digitos de un numero, me di cuenta que si a un numero haces por ejemplo 4000 módulo 10 te da el último dígito, si haces 4000 módulo 100 te da los ultimso dos dígitos y así sucesivamente. Cómo lo único que importa esa sacar los últimos dígitos entonces si por ejemplo tengo 462527^9 y quiero los últimos 3 dígitos del resultado primero hago 462527 mod 1000 y me da 527, ese número lo multiplico por 462527 y al resultado le vuelvo a hacer mod 1000, asi sucesivamente hasta que lo haya hecho 9 veces o el número que esté elevado, así evito calcular un numero enorme de que si estuviera multiplicando 462527*462527*462527.....

Para encontrar los primeros digitos de n^n, se puede hacer usando logaritmos, primero se necesita resolver n^n=10^d. Al final la fórmula para obtener los primeros dígitos es d=1+⌊nlog10(n)⌋. Una vez que tenemos d podemos resolver para 10d−k⋅t < n^n < 10d−k⋅(t+1) donde k es el numero de digitos que queremos, y t es el número que buscamos 


