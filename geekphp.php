<?php
for($i = 65; $i <= 90; $i++)
{
    printf("%c", $i);
}

$array1 = [
    'a',
    0=>'b',
    +0 => 'c',
    0.1 => 'd',
    '0' => 'e',
    false => 'f',
];
$array2 = [
    '00'=>'g',
    '+0' =>'h',
    '0.1' => 'i',
    null => 'j',
];
var_dump($array1);
var_dump($array2);

// $array1: ‘f’

// $array2: ‘g’, ‘h’, ‘i’, ‘j’

// Explanation In PHP, if multiple elements in the 
// array declaration use the same key, only the last one 
// will be used as all others are overwritten. 
// Additionally the following key casts will occur:
// Strings containing valid decimal integers will be cast to the integer type.
// Floats are also cast to integers, which means that the fractional 
// part will be truncated.
// Bools are cast to integers, 
// too, i.e. the key true will actually be stored under 1 
// and the key false under 0.
// Null will be cast to the empty string, i.e.
//  the key null will actually be stored under “”.
// See https://www.php.net/manual/en/language.types.array.php for more details.



// >>>>>>>>>>>>>>>>>>>>>>>>php 
// Which of these options helps prevent a server from revealing details of its PHP install?

// magic_quotes_gpc=Off

// Explanation Magic quotes are deprecated in PHP 5.3.0 and removed in later versions of PHP. This does not prevent a server revealing details of its PHP install.
// Disable directory access in the server.

// Explanation This is considered good practice as it prevents your source code from being listed, but this does not prevent a server revealing details of its PHP install.
// expose_version=Off

// Explanation Not a valid directive.
// expose_php=Off

// Explanation The expose variable by default is set to On which exposes the PHP version of any remote server using HTTP header as X-Powered-By: PHP/7.2.
// allow_version_include=Off

// Explanation Not a valid directive.
// Your feedback help