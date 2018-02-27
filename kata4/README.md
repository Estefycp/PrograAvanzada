Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true

Como el objetivo es saber si un string es numérico o no, lo más lógico que siempre deberia checar es si el contenido tiene números y que 
no estén separados y que únicamente haya un punto.
Después vi el caso de exponienciación y me di cuenta que puede tener una "e" el numero siempre y cuando no esté al principio o al final.

En el caso de los signos, únicamente que haya uno y al principio o un + o un -

Los casos en que literal no hay nada o es null pues regresa falso.

Metería todos estos casos en puros if y deberia de regresarme true si es numérico o false si no.

Para mejorarlo se me ocurriría usar una expresión regular en un autómata que incluya todas estas restricciones







