<?php

echo "Hello<br>";
$a = 1;
$b = 4.9;
echo $a + $b;
echo "<br>";
echo "hello". 5 ."<br>";
echo "hello". (5+4);//parenthsis is necessary to execute addition first

$str = "<br>Programming languages";
echo $str . "<br>";
//echo strtoupper($str);

$str = str_replace("m","hii",$str,$a);
echo $a . " is the number of'm's " ;
echo $str;

$name = "prithviraj";

echo "<br>hi $name";
echo '<br>hi $name';

if(isset($_POST['submit'])){
    echo "<br>pressed<br>";
    $a = $_POST['name'];
    echo $a;
}
    

?>

<html>
<body>
    <form action="" method = "POST">
    <input type="text" name = "name">
    <input type="submit" name = "submit">
    </form>
</body>
</html>

<?php
$record = array("blue", "1", 1, NULL, TRUE);
echo $record[3];
echo "<br>";
if($record[1]==$record[2]){
    echo "equal";
}
else{
    echo "not equal";
}
echo "<br>";
foreach($record as $values){
    echo $values;
}
echo "<br>";

$salaries = array("hello" => 2000, 
                   "" => True,
                   "zara" => NULL,
                   100 => "nikita",
                   Null => "tanya",
                   True => Null,
                   Null => 100,
                   1 => "dinosor"        
                 );

foreach($salaries as $keys => $values){
    echo $keys. "=>" .$values;
}

//Associative arrays
$rec = array( 
    "tanya" => array (
       "physics" => 35,
       "maths" => 30,	
       "chemistry" => 39
    ),
    
    "abc" => array (
       "physics" => 30,
       "maths" => 32,
       "chemistry" => 29
    ),
    
    "zara" => array (
       "physics" => 31,
       "maths" => 22,
       "chemistry" => 39
    ),
    "nikita" => array (
       "physics" => 38,
       "maths" => 29,
       "chemistry" => 43
    )
    
 ); 
 echo "<br>";

 print_r($rec["tanya"]);
echo $rec["tanya"]['physics'];
foreach($rec as $key => $values){
    foreach($values as $key1 => $values1){
        echo $values1."<br>";
    }
}

?>