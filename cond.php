<?php
function square($arg) {
    $arg = $arg ** 2;
    return $arg;
}

for ($i = 1; $i < 100; $i++) {
    echo "$i -> " . square($i) . "\n";
}
