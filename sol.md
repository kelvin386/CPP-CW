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

