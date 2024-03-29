# Binary <-> Octal

- Remember binary to decimal?
- Easier than that
- 8 and 16 are powers of 2, 10 is not!
  - 8 = 2^3 and 16 = 2^4
- 000 to 111 => 0 to 7 (Octal)
- 0000 to 1111 => 0 to F (Hexadecimal)
- Binary 10111011 to octal?
  - 010 111 011 => 273
- Octal 314 to binary?
  - 314 => 011 001 100

# Summary

- Combinatorial problems
  - Choice / Combination / nCr
  - Arrangement / Permutation / nPr
- Probability
- Number system revisited

# Practice Day

- Convert this binary number to hexadecimal number
  - 01110100111011
- Binary: 0111 0100 1110 11
- Now, convert each group into hexadecimal:
- 0111 = 7 in hexadecimal
- 0100 = 4 in hexadecimal
- 1110 = E in hexadecimal
- 11 = 3 in hexadecimal
- So, the hexadecimal representation of the binary number 01110100111011 is 74E3.

- Convert this octal number to hexadecimal number
  - 127416
- Convert octal to binary:
- 1 (octal) = 001 (binary)
- 2 (octal) = 010 (binary)
- 7 (octal) = 111 (binary)
- 4 (octal) = 100 (binary)
- 1 (octal) = 001 (binary)
- 6 (octal) = 110 (binary)

- So, the binary representation of the octal number 127416 is 00101011110000110.

- Now, group the binary digits into sets of four, starting from the right (adding leading zeros if necessary):

  - 00 1010 1111 0000 110

- Convert each group of four binary digits into hexadecimal:
- 0010 = 2 in hexadecimal
- 1010 = A in hexadecimal
- 1111 = F in hexadecimal
- 0000 = 0 in hexadecimal
- 110 = 6 in hexadecimal (with leading zeros dropped)

- So, the hexadecimal representation of the octal number 127416 is 2AF06.

- If you throw a dice and toss a coin at the same time, what is the probability that you will get head (coin) and value less than 3 (dice)?
- When throwing a fair six-sided die and flipping a fair coin simultaneously, let's consider the outcomes for each event:

- For the die:

  - There are 6 possible outcomes: 1, 2, 3, 4, 5, and 6.

- For the coin:

  - There are 2 possible outcomes: Heads (H) or Tails (T).

- To find the probability of getting a head (H) on the coin and a value less than 3 on the die (i.e., a 1 or a 2), we need to calculate the probability of each event separately and then multiply them because the events are independent.

- Probability of getting a head on the coin (H) = 1/2 (since there are 2 equally likely outcomes, and H is one of them).

- Probability of getting a value less than 3 on the die (1 or 2) = 2/6 = 1/3 (since there are 2 successful outcomes out of 6 equally likely outcomes).

- Now, multiply the probabilities of the two independent events to find the overall probability:

- P(H and value less than 3) = P(H) _ P(value less than 3) = (1/2) _ (1/3) = 1/6

- So, the probability of getting a head (coin) and a value less than 3 (dice) is 1/6.

- 10 people came to party. Everyone shake hands with everyone. How many handshakes took place?
- Each person shakes hands with every other person, which means each person shakes hands with 9 other people (since they don't shake hands with themselves). However, this counts each handshake twice (once for each person involved in the handshake), so you need to divide by 2 to get the total number of unique handshakes.

- The formula for the number of unique handshakes among n people is:

- \[ \text{Number of Handshakes} = \frac{n(n - 1)}{2} \]

- In your case, with 10 people:

- \[ \text{Number of Handshakes} = \frac{10(10 - 1)}{2} = \frac{10 \cdot 9}{2} = \frac{90}{2} = 45 \]

- So, there were 45 handshakes that took place at the party.

- Section A and B have 25 students and 20 students, respectively. If a team of 11 players need to be formed and 6 students must be from A and the others from B, how many ways are there to form the team? How many batting order would be there?

- To form a team of 11 players with 6 students from section A and the remaining 5 students from section B, you can use combinations.

- First, calculate the number of ways to choose 6 students from section A (25 students) and 5 students from section B (20 students):

- Ways to choose 6 students from A = C(25, 6) = 177,100 ways
- Ways to choose 5 students from B = C(20, 5) = 15,504 ways

- Now, to form the complete team, you can multiply these two values because these selections are independent:

- Total ways to form the team = Ways from A _ Ways from B = 177,100 _ 15,504 = 2,748,750,400 ways

- So, there are 2,748,750,400 ways to form the team.

- Now, let's calculate the number of possible batting orders for the team. To do this, you simply need to find the permutations of the 11 players in the team.

- The number of permutations of 11 players is given by 11!, which is 11 factorial:

- 11! = 11 × 10 × 9 × 8 × 7 × 6 × 5 × 4 × 3 × 2 × 1 = 39,916,800

- So, there are 39,916,800 possible batting orders for the team.
