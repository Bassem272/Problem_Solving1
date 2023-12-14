Let's analyze each code snippet:

1. `$a = $b + $a - ($b = $a);`
   - This code snippet swaps the values of `$a` and `$b` using arithmetic operations. It's a valid way to swap values.

2. `$tmp = $a; $a = $b; $b = $tmp;`
   - This code snippet uses a temporary variable (`$tmp`) to swap the values of `$a` and `$b`. It's a classic way of swapping values and is also valid.

3. `$a = $b; $b = $a;`
   - This code snippet does not correctly swap values because the value of `$a` is assigned to `$b`, and then the value of `$b` (which is now the same as the original value of `$a`) is assigned back to `$a`. After this, both `$a` and `$b` will have the same value.

4. `list ($a, $b) = [$b, $a];`
   - This code snippet correctly swaps the values of `$a` and `$b` using the `list` construct with an array.

5. `$a ^= $b ^= $a ^= $b;`
   - This code snippet uses the XOR (`^=`) operator to swap values. It is a valid way to swap values in some languages but may not work correctly in PHP due to how PHP evaluates expressions.

So, the code snippet that does not correctly swap values is:

```php
$a = $b; $b = $a;
```