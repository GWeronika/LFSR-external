# LFSR-external
Random number generation with linear feedback shift register (LFSR)
LFSR external feedback is performed when the signal at the input of the first flip-flop is sent from the outputs of another flip-flop.

![external_feedback](https://user-images.githubusercontent.com/126601389/226456199-39a86021-72e6-403c-994f-b60a102107d2.png)

Project LFSR-external_feedback:

INPUT: n - variable specifying the lenght of the register (consists of a set of integers) r - initial state with a length of n digits (consists of the digits {0,1})

OUTPUT: tab[0]...tab[n-1] - vector containing successive elements of the register
