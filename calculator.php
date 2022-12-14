<?php
 
 $val=345;
 
 if($val>=300 && $val<=400){
     $price=INTVAL($val/300);
     $val2=$price*100;
     $price1=$val2*5;
     $val-=$val2;
     echo $price1,"<br>";
 }
 if($val>=200 && $val<=300){
    $price=INTVAL($val/200);
    $val2=$price*100;
    $price2=$val2*10;
    $val-=$val2;
    echo $price2,"<br>";
}
if($val>=100 && $val<=200){
    $price=INTVAL($val/100);
    $val2=$price*100;
    $price3=$val2*15;
    $val-=$val2;
    echo $price3 , "<br>";
}
 if($val>1 && $val<100){

    $price6=$val*25;
    echo $price6,"<br>";
}

$sum=($price1+$price2+$price3+$price6);
echo "Bill of total is :",$sum;
?>
