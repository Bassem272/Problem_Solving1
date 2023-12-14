<?php

function f(){
    echo "f1";
    return function() {
        echo "f2";
        return f();
    };
};

f()(); // f1f2f1
///>>>>>>>>>>

// $a = 10; echo $a++, ‘,’, ++$a;
const datadumb {
    0:23,
    1:24,
    2:35,
}
datadumb.entries(datadumb).slice(1).reduce((acc,acur)=> acc+acur[0],0)

function sum(){
    const args = arguments
return args.reduce((acc,acur)=> acc+acur,0)}
sum (1,2,3);