<?php 
    function leftRotateByOne(&$arr, $n)
    {
        $temp = $arr[0];
        for($i = 0; $i < $n - 1; $i++)
        {
            $arr[$i] = $arr[$i + 1];
        }
        $arr[$n-1] = $temp;
    }

    function leftRotate(&$arr, $d, $n)
    {
        for($i = 0; $i < $d; $i++)
        {
            leftRotateByOne($arr, $n);
        }
    }

    function printArray(&$arr, $n)
    {
        for($i = 0; $i < $n; $i++)
        {
            echo $arr[$i] . " ";
        }
    }

    $arr = array(1, 2, 3, 4, 5, 6, 7);
    $n = sizeof($arr);

    leftRotate($arr, 2, $n);
    printArray($arr, $n);
?>