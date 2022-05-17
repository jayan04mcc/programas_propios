<?php
    header ('Content-Type: text/html; charset=ISO-8859-1');
?>
<!DOCTYPE html>
<html>
<head>
    <title>Funciones en PHP</title>
    <meta charset="UTF-8" />
    <link rel="stylesheet" href="php_ejemplo_1.css">
</head>
<body>
    <section id="seccion">
        <h1>JAYAN CACERES CUBA</h1>
        <h1>Tabla de 100 numero Naturales</h1>
        <h2>Numeros Primos en Rojo</h2>
        <?php
        function esPrimo ($n){
            if($n<2){
                return false;
            }    
            for ($i=2; $i<$n; $i++){
                if (($n % $i) == 0){
                  return false;
                }
            }      
             return true;
        }
        
        echo "<table class='tabla'>";
        echo "<tbody>";
        echo "<tr>";
        $cont=0;
        for($i=1;$i<=10;$i++){
            if(esPrimo($i)){
                echo"<td class='primo'>".$i."</td>";
            }else{
                echo"<td>".$i."</td>";
            }
            $cont++;
        }
        echo "<br>";     
        echo "</tr>";
        echo "<tbody>";
        echo "</table>";
        ?>
    </section>
</body>
</html>             
