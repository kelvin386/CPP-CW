### Q1

The output is `4294967271`. This is because `25u` defined an unsigned integer through the suffix `u`. However, an unsigned integer can not represent negative values, thus causing underflow. Due to the size of underflow `25`, the value returned equals `2^32 - 25`, as an unsigned integer takes 32 bits.

### Q2

The output is

```c++
i: 7
j: 5
k: 7
```

This is because `i++` and `++i` both increase the value of `i` by 1, although the former increases the value after assignment and the latter before assignment. That's why `j = 5`, as `i` increases after `j` is initialized, and `k = 7`, as `i` increases and the assigned to `k`.

### Q3
The result is
```c++
main: a: 3, b: 5
swap1: a: 5, b: 3
main: a: 3, b: 5
swap2: *a: 5, *b: 3
main: a: 5, b: 3
swap3: a: 3, b: 5
main: a: 3, b: 5
```

The first line shows the initial values of `a` and `b`.

The first function `swap1` did not change the value of `a` and `b` because by inputting `a` and `b` the programme creates a copy in local scope and does not affect the `a` and `b` in the `main()` function scope. The output of `swap1` gives swapped `a` and `b` as those outputs are the local `a` and `b`, which are swapped.

`swap2` inputs the pointers of the main scope `a` and `b`. Although the two pointers are passed to `swap2` as two copies, they still point to the `a` and `b` of the main scope. Hence swapping the values pointed by the two pointers actually swaps the main scope `a` and `b`. This results in the `*a` and `*b` in `swap2` being `5` and `3` and the same for scope `a` and `b`.

The last function `swap3` takes the references as inputs. By the nature of references, changing them directly changes the values referred to by them. Note that before this function, the values of `a` and `b` have already been changed to `5` and `3` by `swap2`. In the function, `int temp = a` initializes `temp` as a integer `5`. `a = b` sets the main scope `a` at 3, with function scope `a`'s value also set at 3. `b = temp` changing both the main scope and function scope `b` to 5.