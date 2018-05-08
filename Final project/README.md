

Para sacar los ultimos k digitos de un numero, me di cuenta que si a un numero haces por ejemplo 4000 módulo 10 te da el último dígito, si haces 4000 módulo 100 te da los ultimso dos dígitos y así sucesivamente. Cómo lo único que importa esa sacar los últimos dígitos entonces si por ejemplo tengo 462527^9 y quiero los últimos 3 dígitos del resultado primero hago 462527 mod 1000 y me da 527, ese número lo multiplico por 462527 y al resultado le vuelvo a hacer mod 1000, asi sucesivamente hasta que lo haya hecho 9 veces o el número que esté elevado, así evito calcular un numero enorme de que si estuviera multiplicando 462527*462527*462527.....

Para encontrar los primeros digitos de n^n, se puede hacer usando logaritmos, primero se necesita resolver n^n=10^d. Al final la fórmula para obtener los primeros dígitos es d=1+⌊nlog10(n)⌋. Una vez que tenemos d podemos resolver para 10d−k⋅t < n^n < 10d−k⋅(t+1) donde k es el numero de digitos que queremos, y t es el número que buscamos 


