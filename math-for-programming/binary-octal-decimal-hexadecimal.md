# Number system

- Remember Decimal and Binary?
- How many digits -> base
- Base 10: Decimal [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
- Base 2: Binary [0, 1]
- Base 8: Octal [0, 1, 2, 3, 4, 5, 6, 7]
- Base 16: Hexadecimal [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F]

# Convert decimal to decimal

- Just for the fun of it!
- 273
- 200 + 70 + 3
- 2 x 100 + 7 x 10 + 3 \* 1
- 2 x 10^2 + 7 x 10^1 + 3 \* 10^0
- 2 x b^2 + 7 x b^1 + 3 \* b^0
- For decimal: b = 10

# Convert binary to decimal

- For Binary: b = 2
- 1101
- 1 x b^3 + 1 x b^2 + 0 x b^1 + 1 x b^0
- 1 x 2^3 + 1 x 2^2 + 0 x 2^1 + 1 x 2^0
- 1 x 8 + 1 x 4 + 0 x 2 + 1 x 1
- 8 + 4 + 0 + 1
- 13

- 101101011
- 1 x b^8 + 0 x b^7 + 1 x b^6 + 1 x b^5 + 0 x b^4 + 1 x b^3 + 0 x b^2 + 1 x b^1 + 1 x b^0
- 1 x 2^8 + 1 x 2^6 + 1 x 2^5 + 1 x 2^3 + 1 x 2^1 + 1 x 2^0
- 256 + 64 + 32 + 8 + 2 + 1
- 363

# Convert decimal to Binary

- Decimal value 13 -> binary?
- 13
- 13 / 2 = 6; remainder = 1 (LSB: goes to the right)
- 6 / 2 = 3; remainder = 0
- 3 / 2 = 1; remainder = 1
- 1 / 2 = 0; remainder = 1 (MSB: goes to the left)
- 1101 (Binary)

- 540
- 540 / 2 = 270; remainder = 0 (LSB: goes to the right)
- 270 / 2 = 135; remainder = 0
- 135 / 2 = 67; remainder = 1
- 67 / 2 = 33; remainder = 1
- 33 / 2 = 16; remainder = 1
- 16 / 2 = 8; remainder = 0
- 8 / 2 = 4; remainder = 0
- 4 / 2 = 2; remainder = 0
- 2 / 2 = 1; remainder = 0
- 1 / 2 = 0; remainder = 1 (MSB: goes to the left)
- 1000011100 (Binary)
